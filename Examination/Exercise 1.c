//
//  Exercise 1.c
//  Examination
//
//  Created by Nguyễn Minh Tiến on 6/26/20.
// Write a program to enter an array of integer number from a keyboard. Given the last even number of the array, if it has not even number, display “No EVEN number”

#include <stdio.h>

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
    
    int array[n], result = 0;
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    
    for(int i = n - 1; i >= 0; i--){
        if(array[i] % 2 == 0 && array[i] > 0) {
            result = array[i];
            break;
        }
    }
    
    if(result == 0)
        printf("\nNo EVEN number.\n");
    else
        printf("\nThe last even number of the array is: %d.\n", result);
    
    return 0;
}
