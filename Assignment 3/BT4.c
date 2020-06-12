//
//  BT4.c
//  Assignment 4
//
//  Created by Nguyễn Minh Tiến on 6/9/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
// Kiểm tra xem 1 số có phải số nguyên tố hay không

//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int n;
//    printf("Hãy nhập một số nguyên: ");
//    scanf("%d", &n);
//    if(n>=2){
//        int so_uoc = 0, i=2;
//        if(i<sqrt(n)) {
//            if(n%i==0) {
//                so_uoc++;
//                i++;
//            }
//        }
//        if(so_uoc == 0){
//            printf("%d là số nguyên tố.\n", n);
//        } else {
//            printf("%d không phải số nguyên tố.\n", n);
//        }
//    } else {
//        printf("%d không phải số nguyên tố.\n", n);
//    }
//    return(0);
//}

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Hãy nhập một số nguyên: ");
    scanf("%d", &n);
    if(n<2){
        printf("%d không phải số nguyên tố\n", n);
    } else if(n==2){
        printf("%d là số nguyên tố\n", n);
    } else {
        int count = 0;
        for(int i=2;i<=n/2;i++) {
            if(n%i==0){
            count++;
    }
    if(count>0){
        printf("%d không phải số nguyên tố\n", n);
    } else {
        printf("%d là số nguyên tố\n", n);
        }
    }
    return(0);
}
}
