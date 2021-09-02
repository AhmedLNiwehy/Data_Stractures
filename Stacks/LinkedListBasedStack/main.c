#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void Display(StackEntry e);

int main()
{
    Stack stack;
    StackInit(&stack);

    Push('d' , &stack);
    Push('e' , &stack);
    Push('m' , &stack);
    Push('h' , &stack);
    Push('a' , &stack);

    TraverseStack(&stack , &Display);
    printf("\n%d",StackSize(&stack));

    return 0;
}

void Display(StackEntry e)
{
    putchar(e);
}
