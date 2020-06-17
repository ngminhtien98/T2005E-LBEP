//
//  Tìm SNT trong mảng.c
//  Lab S7
//
//  Created by Nguyễn Minh Tiến on 6/17/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
//  Tìm các số nguyên tố trong mảng n số nguyên dương

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool SNT(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

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
        printf("Nhập phần tử thứ %d: ", i);
        scanf("%d", &ary[i]);
    }

    printf("Các số nguyên tố trong mảng là: ");
    for (int i=0; i<n; i++) {
        if(SNT(ary[i])) {
            printf("%d ", ary[i]);

        }
    }

    printf("\n");

    return(0);
}

