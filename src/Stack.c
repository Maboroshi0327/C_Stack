#include "Stack.h"

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

Stack* new_Stack()
{
    Stack* stack = malloc(sizeof(Stack));
    if (stack == NULL)
    {
        perror("Error in new_Stack");
        exit(EXIT_FAILURE);
    }

    stack->top = -1;
    stack->top_ptr = NULL;
    return stack;
}

void delete_Stack(Stack* stack)
{
    if (stack == NULL)
    {
        fprintf(stderr, "Error in delete_Stack, stack == NULL\n");
        exit(EXIT_FAILURE);
    }

    if (stack->top == -1)
    {
        free(stack);
        stack = NULL;
        return;
    }

    Node* next = stack->top_ptr->next;
    free(stack->top_ptr);
    stack->top_ptr = next;
    stack->top -= 1;

    delete_Stack(stack);
}

void push(Stack* stack, int value)
{
    if (stack == NULL)
    {
        fprintf(stderr, "Error in push, stack == NULL\n");
        exit(EXIT_FAILURE);
    }

    if (stack->top == -1)
    {
        stack->top_ptr = new_Node(value);
        stack->top += 1;
        return;
    }

    Node* next = stack->top_ptr;
    stack->top_ptr = new_Node(value);
    stack->top_ptr->next = next;
    stack->top += 1;
}

int pop(Stack* stack)
{
    if (stack == NULL)
    {
        fprintf(stderr, "Error in pop, stack == NULL\n");
        exit(EXIT_FAILURE);
    }

    if (stack->top == -1)
        return INT_MIN;

    int value = stack->top_ptr->value;

    Node* next = stack->top_ptr->next;
    free(stack->top_ptr);
    stack->top_ptr = next;
    stack->top -= 1;

    return value;
}
