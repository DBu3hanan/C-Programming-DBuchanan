/******************************************************************************* 
Prepared by: Miss D Buchanan - November 28, 2025 - Function for calculating the volume of a cylinder
Write a c function that calculates the volume of a cylinder. 
The main must only be used to call the function.
Use the formula V=πr2h for the calculation. It must be written on paper.
*******************************************************************************/
#include <stdio.h>

//One way of acheiving the answer
float volumeCylinder(float radius, float height){ 
    float pi = 3.14;
    float volume = pi * (radius * radius)* height;
    printf("Volume is %.3f", volume);
    return volume;
}

//One way of acheiving the answer
void volumeCylinderCal(){
    float radius, height;
    float pi = 3.14;
    printf("\nEnter radius:");
    scanf("%f", &radius);
    
    printf("\nEnter height:");
    scanf("%f", &height);
    
    float volume = pi * (radius * radius)* height;
    printf("\nVolume is %.3f", volume);
    
}
int main()
{
    volumeCylinderCal(); //the difference between how you call the functions
    volumeCylinder(7, 15);
    return 0;
}

