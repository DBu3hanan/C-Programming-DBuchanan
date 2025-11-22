/*
     Prepared by: Miss D Buchanan 
     November 18, 2025 
     Area of Triangle Function
*/

#include <stdio.h>
float base, height;


float areaofTriangle(float base, float height){
     float area= 0.5* base * height;
     printf("The area of the triangle is: %f", area);
     return area;
}

int main()
{
    printf("Enter base:");
    scanf("%f", &base);
    
    printf("Enter height:");
    scanf("%f", &height);
    
    areaofTriangle(base, height);

    return 0;
}