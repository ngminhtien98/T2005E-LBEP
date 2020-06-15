//
//  Nhập vào 1 mảng n số nguyên, sau đó nhập 1 số x. Tìm xem có x trong mảng không.c
//  Demo 15062020
//
//  Created by Nguyễn Minh Tiến on 6/15/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
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
    
    int x;
    printf("Hãy nhập số x: ");
    scanf("%d", &x);

    int ary[n];
    for (int i = 0; i<n; i++) {
        printf("Nhập phần tử: ");
        scanf("%d", &ary[i]);
    }
    
    int count = 0;
    for(int i=0; i<n; i++){
        if(ary[i] == x) {
            count++;
        }
    }
    
    if(count != 0) {
        printf("Có %d phần tử %d trong mảng số nguyên được nhập.\n", count, x);
    } else {
        printf("Không có phần tử %d nào trong mảng số nguyên được nhập.\n", x);
    }
    
    return(0);
}
