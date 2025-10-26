#include <stdio.h>
#include <stdlib.h>

void printSomething();

int pens = 21; //Global Variable

int main()
{
    //int pens = 21; //Local Variable
    printf("I have %d pens\n", pens);
    printSomething();

    return 0;
}

void printSomething()
{
    printf("I have %d pens\n", pens);

    return;
}
