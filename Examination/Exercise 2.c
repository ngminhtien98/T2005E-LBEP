//
//  Exercise 2.c
//  Examination
//
//  Created by Nguyễn Minh Tiến on 6/26/20.
// Write a average () function to calculate average number of array integer number.

#include <stdio.h>

float everage(int array[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += array[i];
    }
    float result = (float)sum/n;
    
    return result;
}

int main() {
    int n;
    printf("Please insert an array of integer number.\n");
    printf("Please insert amount of array's element: ");
    scanf("%d", &n);
    while(n <= 0){
        printf("Please try again - the amount of array's element must be larger 0: ");
        scanf("%d", &n);
    }
  
    printf("\n");
  
    int array[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\n");
    float result = everage(array, n);
    printf("The everage number of the array is: %.2f.\n", result);
    printf("\n");

    return 0;
}
