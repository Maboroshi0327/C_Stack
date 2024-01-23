#include "Node.h"

#include <stdio.h>
#include <stdlib.h>

Node* new_Node(int value)
{
    Node* node = malloc(sizeof(Node));
    if (node == NULL)
    {
        perror("Error in new_Node");
        exit(EXIT_FAILURE);
    }

    node->value = value;
    node->next = NULL;
    return node;
}
