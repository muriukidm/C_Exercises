//Name: Shipweight.c
//Purpose: Calculate the weight of a box for a shipping company
//Author: AcidBurn

#include <stdio.h>
int main(){
    int height, width, length, weight, volume;

    height = 9;
    width = 10;
    length = 11;

    volume = height * width * length;
    weight = (volume + 165)/166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (Kilograms): %d\n", weight);
    
    return 0;
}