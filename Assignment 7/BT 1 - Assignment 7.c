//
//  main.c
//  Assignment 7
//
//  Created by Nguyễn Minh Tiến on 6/19/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.
//  Nhập giá trị cho mảng n số nguyên, đảm bảo là mỗi lần nhập mới 1 số thì sắp xếp luôn mảng để khi xong phần tử cuối cùng sẽ được luôn mảng có giá trị bé -> lớn.

//#include <stdio.h>
//
//int main() {
//    int n;
//    printf("Hãy nhập số phần tử bạn muốn nhập: ");
//    scanf("%d", &n);
//    while(n<=0){
//        printf("Số phần tử phải là một số nguyên dương, xin mời nhập lại: ");
//        scanf("%d", &n);
//    }
//    
//    
//    int ary[n];
//    for (int i = 0; i<n; i++) {
//        printf("Nhập phần tử thứ ary[%d]: ", i);
//        scanf("%d", &ary[i]);
//        int j = i-1;
//        int temp = ary[i];
//        while((j>=0) && (temp < ary[j])) {
//            ary[j+1] = ary[j];
//            j--;
//        }
//        ary[j+1] = temp;
//    }
//  
//    printf("Mảng được sắp xếp theo thứ tự từ bé đến gồm các phần tử: ");
//    for(int x=0; x<n; x++){
//        printf("%d ", ary[x]);
//    }
//    printf("\n");
//
//    return 0;
//}
