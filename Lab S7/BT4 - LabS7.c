//
//  BT4 - LabS7.c
//  Lab S7
//
//  Created by Nguyễn Minh Tiến on 6/17/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
//  Cho mảng n số nguyên và 1 số x. Tìm số trong mảng có giá trị nhỏ hơn và gần x nhất ( tiệm cận dưới)


#include <stdio.h>


int main() {
    int n;
    printf("Hãy nhập số phần tử bạn muốn nhập: ");
    scanf("%d", &n);
    while(n<=0){
        printf("Số phần tử phải là một số nguyên dương, xin mời nhập lại: ");
        scanf("%d", &n);
    }
    int x;
      printf("Hãy nhập số x: ");
      scanf("%d", &x);
    
    int ary[n];
    for (int i = 0; i<n; i++) {
        printf("Nhập phần tử thứ %d: ", i);
        scanf("%d", &ary[i]);
    }
    
    int result;
    for(int i=0; i<n; i++){
        if(ary[i] <= x) {
            result = ary[i];
            break;
        }
    }
    
     for(int i=0; i<n; i++){
         if ((ary[i] > result) && (ary[i] < x) ) {
             result = ary[i];
        }
     }

    if (result) {
        printf("Số tiệm cận bé của %d trong dãy là %d.\n", x, result);

    } else {
        printf("Không có phần tử bé hơn %d được nhập.\n", x);

    }
    return(0);
}
