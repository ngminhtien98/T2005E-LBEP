//
//  main.c
//  Giai PT bac 2 tim x
//
//  Created by Nguyễn Minh Tiến on 6/3/20.
//  Copyright © 2020 Nguyễn Minh Tiến. All rights reserved.

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Giải phương trình bậc 2 tìm x có dạng: ax2 + bx + c = 0 \n");
    printf("Hãy nhập giá trị cho số a: ");
    scanf("%d", &a);
    printf("Hãy nhập giá trị cho số b: ");
    scanf("%d", &b);
    printf("Hãy nhập giá trị cho số c: ");
    scanf("%d", &c);
    
    if(a!=0){
        float D = (b*b)-(4*a*c);
        if(D<0){
            printf("Phương trình vô nghiệm. \n");
        } else {
            if(D>0){
                float x1=(-b+sqrt(D))/(2*a);
                float x2=(-b-sqrt(D))/(2*a);
                printf("Phương trình có nghiệm kép là %f và %f \n", x1, x2);
            } else {
                float x3=(-b)/(2*a);
                printf("Phương trình có nghiệm kép là %f. \n", x3);
            }
        }
    } else {
        if(b==0){
            if(c==0){
            printf("Phương trình có vô số nghiệm. \n");
            } else {
                printf("Phương trình vô nghiệm. \n");
            }
        } else {
            float x = (-c)/b;
            printf("Phương trình có 1 nghiệm là: %f. \n", x);
        }
    }
}
