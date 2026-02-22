
#include <stdio.h>

int linsearsearch(int arrayname[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arrayname[i] == key) {
            return i;
        }
    }
    return -1;   // guaranteed return
}


int main()
{
    printf("Hello World");

    return 0;
}