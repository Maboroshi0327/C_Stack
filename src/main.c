#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

int main()
{
    Stack* stack = new_Stack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);

    for (int i = 0; i < 3; i++)
    {
        int value = pop(stack);
        printf("%d\n", value);
    }

    push(stack, 100);
    push(stack, 200);

    for (; stack->top != -1;)
    {
        int value = pop(stack);
        printf("%d\n", value);
    }

    delete_Stack(stack);

    return EXIT_SUCCESS;
}
