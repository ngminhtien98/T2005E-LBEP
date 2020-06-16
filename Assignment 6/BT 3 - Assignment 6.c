//
//  BT 3 - Assignment 6.c
//  Assignment 6
//
//  Created by Nguyễn Minh Tiến on 6/16/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
//  Nhập mảng n số nguyên, tìm số lượng các số dương liên tiếp nhiều nhất


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
    
    int count = 0, a=0;
    int ary_2[a];
    
    for(int i=0; i<n; i++){
        if(ary[i]>0){
            count++;
        }
        ary_2[a] = count;
     
        if(ary[i]<0 || ary[i]==0) {
            count = 0;
            a++;
        }
    }
    if(count != 0) {
        a++;
        ary_2[a] = count;
    }
    
    int max = ary_2[0];
    for(int i=0; i<a; i++){
        if(ary[i] > max){
            max = ary_2[i];
        }
    }
    
    if(max == 0) {
         printf("Không có số nguyên dương nào được nhập.\n");
     } else {
         printf("Chuỗi các số nguyên dương nhiều nhất trong mảng là %d.\n", max);
     }
    
    return(0);
}
