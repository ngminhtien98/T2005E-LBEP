//
//  Tính trung bình cộng các số lẻ trong mảng n số.c
//  Demo 15062020
//
//  Created by Nguyễn Minh Tiến on 6/15/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
//
//
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
    
    int sum = 0, count = 0;
    
    for (int i=0; i<n; i++) {
        if(ary[i]%2 !=0){
            sum = sum + ary[i];
            count++;
        }
    }
    
    if(sum ==0) {
        printf("Không có phần tử số lẻ nào được nhập vào.\n");
    } else {
        printf("Trung bình cộng các số lẻ được nhập là: %.2f \n", (float)sum/count);
    }
}
