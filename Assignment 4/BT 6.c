//
//  BT 6.c
//  Assignment
//
//  Created by Nguyễn Minh Tiến on 6/12/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
// Nhập vào số tiền gửi ngân hàng, số tiền muốn thu được, giả sử lãi 8% /năm. Hỏi cần gửi bao nhiêu năm
//
//#include <stdio.h>
//
//int main() {
//    float a;
//    float b;
//    printf("Hãy nhập số tiền muốn gửi: ");
//    scanf("%f", &a);
//    if(a<=0){
//        printf("Số tiền phải lớn hơn 0, xin vui lòng nhập lại: ");
//        scanf("%f", &a);
//    }
//    printf("Hãy nhập số tiền muốn thu được: ");
//    scanf("%f", &b);
//    if(b<=0){
//        printf("Số tiền muốn thu được phải lớn hơn 0, xin vui lòng nhập lại: ");
//        scanf("%f", &b);
//    }
//
//    int count = 0;
//
//    while (b>a) {
//        b = b / 108 * 100;
//        count ++;
//    }
//    printf("Số năm cần gửi tiết kiệm: %d \n", count);
//    return(0);
//}
