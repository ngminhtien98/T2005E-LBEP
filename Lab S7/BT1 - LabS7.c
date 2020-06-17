//
//  main.c
//  Lab S7
//
//  Created by Nguyễn Minh Tiến on 6/17/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
//  Tìm chữ số lớn nhất của số nguyên dương n


#include <stdio.h>

int main() {
    int n;
    printf("Hãy nhập một số nguyên dương: ");
    scanf("%d", &n);
    while (n<=0){
        printf("\nSố bạn vừa nhập không phải một số nguyên dương, xin vui lòng nhập lại: ");
        scanf("%d", &n);
    }
    
    int max = 0, temp, n1;
    n1 = n;
    while(n>0){
        temp = n%10;
        if(temp > max)
            max = temp;
        n = (n - n%10)/10;
    }
   
    if(max == 0)
        printf("Không có số nguyên dương được nhập");
    else
        printf("Chữ số lớn nhất trong số %d là %d.\n", n1, max);
    
    return 0;
}
