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

void readFromFile();   //程序开始加载文件中的全部学生数据到学生链表(分两类学生到两个链表),放开始程序后一行
void sayeToFile();   //程序结束将学生链表中的全部学生数据保存到文件并退出函数,,放退出程序前一行
UND* scanf_1();   //从键盘获取一个本科生数据后,返回节点地址
GRA* scanf_2();   //从键盘获取一个研究生数据后,返回节点地址
void addNode_1(UND* stu);   //将一个本科生节点添加到链表尾(实参: 学生节点),且自动计算学号
void addNode_2(GRA* stu);   //将一个研究生节点添加到链表尾(实参: 学生节点),且自动计算学号

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
        Head_1=Head_1->next;
    }
    Head_1->next=NULL;
    while(fread(&graduate2,sizeof(GRA),1,fp2)==1){
        Head_2->next=&graduate2;
        Head_2=Head_2->next;
    }
    Head_2->next=NULL;
}

void sayeToFile(){
    rewind(fp1);   //使fp1和fp2回到文件开头
    rewind(fp2);
    UND*Head_1=Head1;   //Head_1和Head_2暂存头指针,防止头指针丢失
    GRA*Head_2=Head2;
    while((fwrite(Head_1->next,sizeof(UND),1,fp1))==1){
        Head_1=Head_1->next;
    }
    while((fwrite(Head_2->next,sizeof(GRA),1,fp2))==1){
        Head_2=Head_2->next;
    }
    fclose(fp1);
    fclose(fp2);
    exit(0);
}

UND* scanf_1(){
    UND*stu=(UND*)malloc(sizeof(UND));
    scanf("%s%u%s%s%d%d%d",stu->name,&stu->sex,stu->major,stu->banji,&stu->score[0],&stu->score[1],&stu->score[2]);
    return stu;
}

GRA* scanf_2(){
    GRA*stu=(GRA*)malloc(sizeof(GRA));
    scanf("%s%u%s%d%s%s%d%d",stu->name,&stu->sex,stu->major,&stu->Class,stu->reserch,stu->tname,&stu->score[0],&stu->score[1]);
    return stu;
}

void addNode_1(UND* stu){
    UND*Head_1=Head1;   //Head_1暂存头指针,防止头指针丢失
    int count=0;
    if(Head_1->next==NULL){
        stu->num=1;
        count=1;
    }
    while(Head_1->next!=NULL){
        Head_1=Head_1->next;
    }
    if(count==0){
        stu->num=Head_1->num+1;
    }
    Head_1->next=stu;
    stu->next=NULL;
}

void addNode_2(GRA* stu){
    GRA *Head_2=Head2;   //Head_2暂存头指针,防止头指针丢失
    int count=0;
    if(Head_2->next==NULL){
        stu->num=1;
        count=1;
    }
    while(Head_2->next!=NULL){
        Head_2=Head_2->next;
    }
    if(count==0){
        stu->num=Head_2->num+1;
    }
    Head_2->next=stu;
    stu->next=NULL;
}