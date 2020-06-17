////
////  BT 4 - Assignment 6.c
////  Assignment 6
////
////  Created by Nguyễn Minh Tiến on 6/16/20.
////  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
////  Nhập mảng n số nguyên, tìm xem chuỗi số dương mà có tổng lớn nhất là bao nhiêu
//
//
//#include <stdio.h>
//
//int main() {
//
//    int n;
//    printf("Hãy nhập số phần tử bạn muốn nhập: ");
//    scanf("%d", &n);
//    while(n<=0){
//        printf("Số phần tử phải là một số nguyên dương, xin mời nhập lại: ");
//        scanf("%d", &n);
//    }
//    int ary[n];
//    for (int i = 0; i<n; i++) {
//        printf("Nhập phần tử: ");
//        scanf("%d", &ary[i]);
//    }
//
//    int a=0, sum=0;
//    int ary_2[a];
//
//    for(int i=0; i<n; i++){
//        if(ary[i]>0){
//            sum+=ary[i];
//        }
//        ary_2[a] = sum;
//
//        if(ary[i]<0 || ary[i]==0) {
//            sum = 0;
//            a++;
//        }
//    }
//    if(sum != 0) {
//        a++;
//        ary_2[a] = sum;
//    }
//
//    int max = ary_2[0];
//    for(int i=0; i<a; i++){
//        if(ary[i] > max){
//            max = ary_2[i];
//        }
//    }
//
//    if(sum == 0) {
//         printf("Không có số nguyên dương nào được nhập.\n");
//     } else {
//         printf("Chuỗi các số nguyên dương nhiều nhất trong mảng là %d.\n", max);
//     }
//
//    return(0);
//}





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
    
    int sum = 0, x = 0;
    for(int i=0; i<n; i++){
        if(ary[i]>0){
            sum += ary[i];
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
