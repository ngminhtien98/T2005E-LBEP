//
//  main.c
//  Assignment 6
//
//  Created by Nguyễn Minh Tiến on 6/16/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
//  Nhập mảng n số nguyên, tìm số lẻ cuối cùng của mảng


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
    
    int position = 0;
    for(int i=0; i<n; i++){
        if(ary[i]%2 != 0) {
            position=i;
        }
    }
    
    if(position == 0) {
        printf("Không có số lẻ nào được nhập.\n");
    } else {
        printf("Số lẻ cuối cùng của mảng là %d.\n", ary[position]);
    }
    
    return(0);
}
