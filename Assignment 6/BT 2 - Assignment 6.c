//
//  BT 2 - Assignment 6.c
//  Assignment 6
//
//  Created by Nguyễn Minh Tiến on 6/16/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
// Nhập mảng n số nguyên, tìm số dương nhỏ nhất


#include <stdio.h>

int main() {
    
    int n;
    printf("Hãy nhập số phần tử bạn muốn nhập: ");
    scanf("%d", &n);
    while(n<=0){
        printf("Số phần tử phải là một số nguyên dương, xin mời nhập lại: ");
        scanf("%d", &n);
    }
    

    int ary[n];
    for (int i = 0; i<n; i++) {
        printf("Nhập phần tử: ");
        scanf("%d", &ary[i]);
    }
    
    int min = ary[0];
    for(int i=0; i<n; i++){
        if(ary[i]>0){
            min = ary[i];
            break;
        }
    }
    
    for(int i=0; i<n; i++){
        if(ary[i]>0){
            if(ary[i]<min){
                min = ary[i];
            }
        }
    }
    
    if(min == 0 || min < 0) {
        printf("Không có số nguyên dương nào được nhập.\n");
    } else {
        printf("Số nguyên dương bé nhất trong mảng là %d.\n", min);
    }
    
    return(0);
}
