#include <stdlib.h>
#include "stack.h"

void StackInit(Stack *ps)
{
    ps->top = NULL;
    ps->size = 0;
}

void Push(StackEntry e, Stack *ps)
{
    StackNode *newNode = (StackNode *) malloc(sizeof(StackNode));
    newNode->entry = e;
    newNode->next = ps->top;
    ps->top = newNode;
    ps->size++;
}

void Pop(StackEntry *pe , Stack *ps)
{
    StackNode *temp;
    *pe = ps->top->entry;
    temp = ps->top;
    ps->top = ps->top->next;
    free(temp);
    ps->size--;
}

boolean StackFull(Stack *ps)
{
    return False;
}

boolean StackEmpty(Stack *ps)
{
    return ps->top == NULL;
}

void StackTop(StackEntry *pe , Stack *ps)
{
    *pe=ps->top->entry;
}

unsigned int StackSize(Stack *ps)
{
    return ps->size;
}

void ClearStack(Stack *ps)
{
    StackNode *pn = ps->top;
    StackNode *qn = ps->top;

    while(pn != NULL)
    {
        pn = pn->next;
        free(qn);
        qn = pn;
    }
    ps->top = NULL;
    ps->size = 0;
}

void TraverseStack(Stack *ps , void(*pf)(StackEntry))
{
    for(StackNode *pn=ps->top; pn; pn=pn->next)
	(*pf)(pn->entry);
}
