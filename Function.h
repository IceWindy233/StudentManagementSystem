//
// Created by 86134 on 2022/4/19.
//

#ifndef _MENU_
#define _MENU_
#include <stdio.h>
#include <stdlib.h>
#endif
#ifndef _MENU1_
#define _MENU1_
#include<math.h>
#endif
#include "Base.h"
//-------全局变量定义

UND* Head1;   //本科生链表头指针
GRA* Head2;   //研究生链表头指针
FILE* fp1=NULL;    //本科生文件指针
FILE* fp2=NULL;    //研究生文件指针

//-------


//-------函数声明和函数功能说明

void readFromFile();   //加载文件中的全部学生数据到学生链表(分两类学生到两个链表)

//-------


//-------函数定义

void readFromFile(){
    Head1=(UND*)malloc(sizeof(UND));
    Head2=(GRA*)malloc(sizeof(UND));
    UND*Head_1=Head1;   //Head_1和Head_2暂存头指针,防止头指针丢失
    GRA*Head_2=Head2;
    UND graduate1;    //graduate1和graduate2暂存学生数据
    GRA graduate2;
    if((fp1=fopen("D:\\c\\StudentManagementSystem\\本科生.dat","wb+"))==NULL){
        printf("文件打开失败!");
        exit(0);
    }
    if((fp2=fopen("D:\\c\\StudentManagementSystem\\研究生.dat","wb+"))==NULL){
        printf("文件打开失败!");
        exit(0);
    }
    while(fread(&graduate1,sizeof(UND),1,fp1)==1){
        Head_1->next=&graduate1;
        Head_1->next=Head_1;
    }
    while(fread(&graduate2,sizeof(GRA),1,fp2)==1){
        Head_2->next=&graduate2;
        Head_2->next=Head_2;
    }
}


