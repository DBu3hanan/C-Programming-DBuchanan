#include <stdio.h>
typedef struct laptops{
    char size [100];
    char model [50];
    char brand[100];
}laptop;

int main()
{
    laptop computer = {"12 inch", "OmniBook", "Hewlett Packard"};
    
    printf("%s", computer.size);

    return 0;
}


