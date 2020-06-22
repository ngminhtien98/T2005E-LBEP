//
//  BT2 - Assignment 8.c
//  Assignment 8
//
//  Created by Nguyễn Minh Tiến on 6/22/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
// 2. Nhập mảng n số nguyên, tìm xem chuỗi số dương mà có tổng lớn nhất là bao nhiêu

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n, *ary;
    printf("Hãy nhập số phần tử bạn muốn nhập: ");
    scanf("%d", &n);
    while(n<=0){
        printf("Số phần tử phải là một số nguyên dương, xin mời nhập lại: ");
        scanf("%d", &n);
    }
    for (int i = 0; i<n; i++) {
        printf("Nhập phần tử: ");
        scanf("%d", ary+i);
    }
    
    int sum = 0, x = 0;
    for(int i=0; i<n; i++){
        if(ary+i>0){
            sum += *(ary+i);
            x = sum;
            if(sum > x)
                x = sum;
        } else {
            sum = 0;
        }
    }
    printf("Chuỗi các số nguyên dương nhiều nhất trong mảng là %d.\n", x);
    return(0);
}
