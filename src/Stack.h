#ifndef _Stack_H_
#define _Stack_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Node.h"

    typedef struct stack
    {
        int top;
        Node* top_ptr;
    } Stack;

    Stack* new_Stack();
    void delete_Stack(Stack* stack);
    void push(Stack* stack, int value);
    int pop(Stack* stack);

#ifdef __cplusplus
}
#endif

#endif // _Stack_H_
