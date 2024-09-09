#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function declarations
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(void) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to calculate the distance between two points
double calculateDistance() {
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

// Function to calculate the perimeter (assuming points form a circle's diameter)
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = PI * distance;  // Circumference = π * diameter
    
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return perimeter;
}

// Function to calculate the area (assuming points form a circle's diameter)
double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * pow(radius, 2);  // Area = π * r²
    
    printf("The area of the city encompassed by your request is %.2f\n", area);
    return area;
}

// Function to calculate the width (the horizontal distance between the points)
double calculateWidth() {
    double x1, x2, width;
    
    printf("Enter the x-coordinate of Point #1: ");
    x1 = askForUserInput();
    printf("Enter the x-coordinate of Point #2: ");
    x2 = askForUserInput();
    
    width = fabs(x2 - x1);  // Absolute value to ensure it's positive
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    return width;
}

// Function to calculate the height (the vertical distance between the points)
double calculateHeight() {
    double y1, y2, height;
    
    printf("Enter the y-coordinate of Point #1: ");
    y1 = askForUserInput();
    printf("Enter the y-coordinate of Point #2: ");
    y2 = askForUserInput();
    
    height = fabs(y2 - y1);  // Absolute value to ensure it's positive
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    return height;
}

// Function to get user input
double askForUserInput() {
    double value;
    scanf("%lf", &value);  // Read a double value from user
    return value;
}
