//
//  PAT_B1009.cpp
//  C语言PAT
//
//  Created by suke on 2017/12/14.
//  Copyright © 2017年 suke. All rights reserved.
//  PAT_B1009

#include <stdio.h>

int main(){
    int num = 0;
    char a[80][80];
    while(scanf("%s",a[num])!=EOF){
        num++;
        }
    while(num>0){
        printf("%s",a[num-1]);
        if (num!=1) {
            printf(" ");
        }
        num--;
    }
              
    return 0 ;
    }
