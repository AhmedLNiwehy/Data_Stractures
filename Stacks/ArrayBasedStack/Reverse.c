#include "Reverse.h"

void ReverseRead(void)
{
    Stack stack;
    StackEntry item;
    StackInit(&stack);

    while (!StackFull(&stack) && (item = getchar()) != '\n')
        Push(item, &stack);

    while (! StackEmpty(&stack))
        {
            Pop( &item, &stack);
            putchar(item);
        }
    putchar('\n');
}
