//
//  BT 2.c
//  Assignment 7
//
//  Created by Nguyễn Minh Tiến on 6/19/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
//  Giả sử có 1 mảng n số nguyên,  tưởng tượng rằng mảng số này là 1 vòng tròn. Nhập 1 giá trị là số bước nhảy. In ra mảng sau khi nhảy n bước. Ví dụ có mảng: 1 2 3 4, nếu nhập vào số 2 thì mảng biến thành 3 4 1 2.


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
    for(int i=0; i<n; i++){
        printf("Nhập phần tử thứ ary[%d]: ", i);
        scanf("%d", &ary[i]);
        }
    int x;
    printf("Hãy nhập số bước nhảy: ");
    scanf("%d", &x);
    
    printf("Dãy số cũ là: ");
      for(int i=0; i<n; i++){
          printf("%d ", ary[i]);
      }
      printf("\n");
    

    for(int i=0; i<x; i++){
        int tmp = ary[n-1];
        for(int j=n-1; j>=1; j--){
            ary[j] = ary[j-1];
            }
        ary[0] = tmp;

        }
    
    printf("Dãy số mới là: ");
    for(int i=0; i<n; i++){
        printf("%d ", ary[i]);
    }
    printf("\n");
    
    return(0);
    
    }
