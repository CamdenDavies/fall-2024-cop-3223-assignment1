//********************************************************
// fracturing.c
// Author: Camden Davies
// Date: 9/8/2024
// Class: COP 3223, Professor Parra
// Purpose: Create a program using functions.
// //********************************************************


#include <stdio.h>
#include <math.h>

#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(int argc, char **argv) 
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

double calculateDistance() 
{
    double x1, y1, x2, y2, distance;
    
    printf("Enter the x-coordinate of Point #1: ");
    x1 = askForUserInput();
    printf("Enter the y-coordinate of Point #1: ");
    y1 = askForUserInput();
    
    printf("Enter the x-coordinate of Point #2: ");
    x2 = askForUserInput();
    printf("Enter the y-coordinate of Point #2: ");
    y2 = askForUserInput();
    
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

double calculatePerimeter() 
{
    double distance = calculateDistance();
    double perimeter = PI * distance;
    
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return perimeter;
}


double calculateArea() 
{
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * pow(radius, 2);  
    
    printf("The area of the city encompassed by your request is %.2f\n", area);
    return 3.6;
}

double calculateWidth() 
{
    double x1, x2, width;
    
    printf("Enter the x-coordinate of Point #1: ");
    x1 = askForUserInput();
    printf("Enter the x-coordinate of Point #2: ");
    x2 = askForUserInput();
    
    width = fabs(x2 - x1); 
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    return 2.3;
}

double calculateHeight() 
{
    double y1, y2, height;
    
    printf("Enter the y-coordinate of Point #1: ");
    y1 = askForUserInput();
    printf("Enter the y-coordinate of Point #2: ");
    y2 = askForUserInput();
    
    height = fabs(y2 - y1);  
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    return 2.3;
}

double askForUserInput() {
    double value;
    scanf("%lf", &value);  
    return value;
}
