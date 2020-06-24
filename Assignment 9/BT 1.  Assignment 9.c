//
//  main.c
//  Assignment 9
//
//  Created by Nguyễn Minh Tiến on 6/24/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
// 1. Nhập vào 1 chuỗi, viết hàm tìm ký tự trong chuỗi

#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char chr;
    printf("Hãy nhập chuỗi: ");
    scanf("%s", str);
    getchar();
    printf("Hãy nhập ký tự bạn muốn tìm: ");
    scanf("%c",&chr);

    if(strchr(str,chr) != NULL)
        printf("Có ký tự %c trong chuỗi vừa nhập.\n",chr);
    else
        printf("Không có ký tự %c trong chuỗi vừa nhập.\n",chr);

    return 0;
}
