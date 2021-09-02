#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef char StackEntry;
typedef enum {False , True} boolean;

typedef struct stacknode{
    StackEntry entry;
    struct stacknode *next;
}StackNode;

typedef struct stack{
    StackNode *top;
    unsigned int size;
}Stack;

void StackInit(Stack *);
void Push(StackEntry , Stack *);
void Pop(StackEntry * , Stack *);
boolean StackFull(Stack *);
boolean StackEmpty(Stack *);
void StackTop(StackEntry * , Stack *);
unsigned int StackSize(Stack *);
void ClearStack(Stack *);
void TraverseStack(Stack * , void(*)(StackEntry));

#endif // STACK_H_INCLUDED
