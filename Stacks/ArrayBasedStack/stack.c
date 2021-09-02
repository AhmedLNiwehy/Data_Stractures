#include "stack.h"

void StackInit(Stack *ps)
{
    ps->top = 0;
}

void Push(StackEntry e , Stack *ps)
{
    ps->entry[ps->top++] = e;
}

void Pop(StackEntry *pe, Stack *ps)
{
  *pe=ps->entry[--ps->top];
}

boolean StackFull(Stack *ps)
{
    if(ps->top == MAXSTACK)
        return True;
    else
        return False;
}

boolean StackEmpty(Stack *ps)
{
   if (ps->top==0)
        return True;
   else
        return False;
}

void StackTop(StackEntry *pe, Stack *ps)
{
	*pe = ps->entry[ps->top-1];
}

unsigned int StackSize(Stack *ps)
{
   return ps->top;
}

void ClearStack(Stack *ps)
{
   ps->top=0;
}

void TraverseStack(Stack *ps , void(*pf)(StackEntry))
{
    for(int i=ps->top; i>0; i--)
      (*pf)(ps->entry[i-1]);
}
