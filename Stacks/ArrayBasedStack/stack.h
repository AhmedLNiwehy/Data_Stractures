#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef char StackEntry;
#define MAXSTACK 5

typedef enum {False , True} boolean;

typedef struct stack{
    int top;
    StackEntry entry[MAXSTACK];
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
