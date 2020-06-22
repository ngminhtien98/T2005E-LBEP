//
//  main.c
//  Assignment 8
//
//  Created by Nguyễn Minh Tiến on 6/22/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
// 1. Nhập mảng n số nguyên, tìm số lượng các số dương liên tiếp nhiều nhất

//#include <stdio.h>
//#include <stdlib.h>
//
////
//int main() {
//
//    int n, *ary;
//    printf("Hãy nhập số phần tử bạn muốn nhập: ");
//    scanf("%d", &n);
//    ary = (int *)malloc(n*sizeof(int));
//    while(n<=0){
//        printf("Số phần tử phải là một số nguyên dương, xin mời nhập lại: ");
//        scanf("%d", &n);
//    }
//    for (int i = 0; i<n; i++) {
//        printf("Nhập phần tử: ");
//        scanf("%d", ary+i);
//    }
//
//    int count = 0, x = 0;
//    for(int i=0; i<n; i++){
//        if(ary+i>0){
//            count++;
//            if(count > x)
//                x = count;
//        } else {
//            count = 0;
//        }
//    }
//    printf("Chuỗi các số nguyên dương nhiều nhất trong mảng là %d.\n", x);
//    return(0);
//}
