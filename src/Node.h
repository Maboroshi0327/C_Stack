#ifndef _Node_H_
#define _Node_H_

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct node
    {
        int value;
        struct node* next;
    } Node;

    Node* new_Node(int value);

#ifdef __cplusplus
}
#endif

#endif // _Node_H_
