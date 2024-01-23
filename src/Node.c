#include "Node.h"

#include <stdio.h>
#include <stdlib.h>

Node* new_Node(int value)
{
    Node* node = malloc(sizeof(Node));

    if (node == NULL)
    {
        fprintf(stderr, "Error: Node* node = malloc(sizeof(Node))\n");
        exit(1);
    }

    node->value = value;
    node->next = NULL;
    return node;
}
