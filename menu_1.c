//
// Created by 86134 on 2022/4/17.
//
#ifndef _STDIO_H_
#define _STDIO_H_
#include <stdio.h>
#endif
void menu1(int xuhao){
    int xuhao2;
    printf("_1_进行基本资料数据的维护管理");
    printf("_2_进行成绩数据的维护管理");
    printf("输入序号 1 或 2 ");
    scanf("%d",&xuhao2);
    if(xuhao2!=1&&xuhao2!=2){
        while (xuhao2!=1&&xuhao2!=2){
            printf("序号错误");
            printf("重新(输入序号 1 或 2 )");
            scanf("%d",&xuhao2);
        }
    }

}
