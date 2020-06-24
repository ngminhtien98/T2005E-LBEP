//
//  BT 3 - Assignment 9.c
//  Assignment 9
//
//  Created by Nguyễn Minh Tiến on 6/24/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
//  
//
#include <stdio.h>
#include <string.h>

void sxMangChuoi(char ary[][50], int n){
    for(int i = 0; i < n-1; i++){
         for(int j = 0; j < n-i-1; j++){
             if(strcmp(ary[i], ary[j] > 0)){
                 char temp[50];
                 strcpy(temp, ary[j]);
                 strcpy(ary[j], ary[j+1]);
                 strcpy(ary[j+1], temp);
             }
         }
     }
}
int main() {
    int n;
    printf("Nhập số mảng: ");
    scanf("%d", &n);
    char ary[n][50];
    for(int i = 0; i < n; i++){
        printf("Nhập chuỗi thứ %d: ", i);
        scanf("%s", ary[i]);
    }
    sxMangChuoi(ary, n);
    printf("Mảng sau khi sắp xếp: ");
    for(int i = 0; i < n; i++){
        printf("%s\n", ary[i]);
    }
    return(0);
}
