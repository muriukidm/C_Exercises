//This code will take input from a user by using scanf

#include <stdio.h>
int main(void){
    int height, weight, width, length, volume;

    printf("Enter the height of the box: ");
    scanf("%d", &height);
    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166 ;

    printf("volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (Kilograms): %d\n", weight);

    return 0 ;
}