#include <stdio.h>


float calculate_triangle_area(float l, float h) {
    return (l * h) / 2;
}

int main() {
    float l, h, area;

    
    printf("Enter the length of the base of the triangle: ");
    scanf("%f", &l);

    printf("Enter the height of the triangle: ");
    scanf("%f", &h);

    
    area = calculate_triangle_area(l, h);

    
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}

