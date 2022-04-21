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
#include <math.h>
#include <string.h>
#endif
#include "Base.h"
//-------全局变量定义

UND* Head1;   //本科生链表头指针
GRA* Head2;   //研究生链表头指针
FILE* fp1=NULL;   //本科生文件指针
FILE* fp2=NULL;   //研究生文件指针

//-------


//-------函数声明和函数功能说明

void readFromFile();   //程序开始加载文件中的全部学生数据到学生链表(分两类学生到两个链表),放程序开始后一行
void sayeToFile();   //程序结束将学生链表中的全部学生数据保存到文件并退出函数,放退出程序前一行
UND* scanf_1();   //从键盘获取一个本科生数据后,返回节点地址
GRA* scanf_2();   //从键盘获取一个研究生数据后,返回节点地址
void addNode_1(UND* stu);   //将一个本科生节点添加到链表尾,(实参: 学生节点指针),且自动计算学号
void addNode_2(GRA* stu);   //将一个研究生节点添加到链表尾,(实参: 学生节点指针),且自动计算学号
void exchangeData_1(UND* stu_1,UND* stu_2);   //交换两名本科生,(实参: 需交换的两个学生节点)
void exchangeData_2(GRA* stu_1,GRA* stu_2);   //交换两名研究生,(实参: 需交换的两个学生节点)
int  numberPeople_1(UND* Head_1);   //计算本科生人数,(实参: 本科生链表头指针)
int  numberPeople_2(GRA* Head_2);   //计算研究生人数,(实参: 研究生链表头指针)
void displayData_1(UND* stu);   //显示本科生数据,(实参: 学生节点指针)
void displayData_2(GRA* stu);   //显示研究生数据,(实参: 学生节点指针)
void searchstu(char* num_Name);   //通过名字或学号查询某位学生的信息
//-------

//-------函数定义

void readFromFile(){
    Head1=(UND*)malloc(sizeof(UND));
    Head2=(GRA*)malloc(sizeof(GRA));
    UND*Head_1=Head1;   //Head_1和Head_2暂存头指针,防止头指针丢失
    GRA*Head_2=Head2;
    UND graduate1;    //graduate1和graduate2暂存学生数据
    GRA graduate2;
    if((fp1=fopen("undergraduate.dat","rb+"))==NULL){
        printf("文件打开失败!");
        exit(0);
    }
    if((fp2=fopen("graduate.dat","rb+"))==NULL){
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
    GRA*Head_2=Head2;
    int count=0;
    if(Head_1->next==NULL&&Head_2->next==NULL){
        stu->num=1;
        count=1;
    }
    while(Head_1->next!=NULL){
        Head_1=Head_1->next;
    }
    while(Head_2->next!=NULL){
        Head_2=Head_2->next;
    }
    if(count==0){
        if(Head_1->next==NULL&&Head_2->next!=NULL) {
            stu->num = Head_2->num + 1;
        }
        if(Head_1->next!=NULL&&Head_2->next==NULL){
            stu->num = Head_1->num + 1;
        }
        if(Head_1->next!=NULL&&Head_2->next!=NULL){
            if(Head_1->num>Head_2->num){
                stu->num = Head_1->num + 1;
            }
            else{
                stu->num = Head_2->num + 1;
            }
        }
    }
    Head_1->next=stu;
    stu->next=NULL;
}

void addNode_2(GRA* stu){
    UND* Head_1=Head1;
    GRA *Head_2=Head2;   //Head_2暂存头指针,防止头指针丢失
    int count=0;
    if(Head_1->next==NULL&&Head_2->next==NULL){
        stu->num=1;
        count=1;
    }
    while(Head_1->next!=NULL){
        Head_1=Head_1->next;
    }
    while(Head_2->next!=NULL){
        Head_2=Head_2->next;
    }
    if(count==0){
        if(Head_1->next==NULL&&Head_2->next!=NULL) {
            stu->num = Head_2->num + 1;
        }
        if(Head_1->next!=NULL&&Head_2->next==NULL){
            stu->num = Head_1->num + 1;
        }
        if(Head_1->next!=NULL&&Head_2->next!=NULL){
            if(Head_1->num>Head_2->num){
                stu->num = Head_1->num + 1;
            }
            else{
                stu->num = Head_2->num + 1;
            }
        }
    }
    Head_2->next=stu;
    stu->next=NULL;
}


void exchangeData_1(UND* stu_1,UND* stu_2){
    UND temp;
    temp=*stu_1;
    *stu_1=*stu_2;
    *stu_2=temp;
}


void exchangeData_2(GRA* stu_1,GRA* stu_2){
    GRA temp;
    temp=*stu_1;
    *stu_1=*stu_2;
    *stu_2=temp;
}


int numberPeople_1(UND* Head_1){
    int i=0;
    while(Head_1->next!=NULL){
        i++;
        Head_1=Head_1->next;
    }
    return i;
}


int numberPeople_2(GRA* Head_2){
    int i=0;
    while(Head_2->next!=NULL){
        i++;
        Head_2=Head_2->next;
    }
    return i;
}


void displayData_1(UND* stu){
    printf("%d %s %u %s %s %d %d %d %d %d %d\n",stu->num,stu->name,stu->sex,stu->major,stu->banji,stu->score[0],stu->score[1],stu->score[2],stu->score[3],stu->score[4],stu->score[5]);
}


void displayData_2(GRA* stu){
    printf("%d %s %u %s %d %s %s %d %d %d %d %d\n",stu->num,stu->name,stu->sex,stu->major,stu->Class,stu->reserch,stu->tname,stu->score[0],stu->score[1],stu->score[2],stu->classrank,stu->allrank);
}


void searchstu(char*num_Name){       //先链接Head1与Head2查询某位学生的信息,结束后断开Head1与Head2
    UND* Head_1=Head1;
    GRA* Head_2=Head2;
    UND* Head_3=Head1;
    UND* Head_4;
    int num1=0;
    int i,j,k=0,numberPeople=0;   //k用来检查Head_3->next==NULL时是否查到学生(k==1即查到),numberPeople为一共查了多少学生
    int a;  //a为Head1对应链表的学生个数
    a = numberPeople_1(Head1);
    while(Head_1->next!=NULL){
        Head_1=Head_1->next;
    }
    Head_4=Head_1;   //储存本科生的尾部指针
    Head_1->next=Head_2->next;
    if ('0' <= num_Name[0] && num_Name[0] <= '9'){
        for(i=0;i<strlen(num_Name);i++){
            j=num_Name[i]-'0';
            num1=10*num1+j;
        }
        while ( Head_3->next!= NULL){
            numberPeople++;
            if (Head_3->next->num == num1){
                printf("已查找到学号为%d的学生信息!\n", num1);
                if(numberPeople<=a){
                    displayData_1(Head_3->next);
                }
                else{
                    displayData_2(Head_3->next);
                }
                k=1;
                break;
            }
            Head_3=Head_3->next;
        }
    }
    else{
        while (Head_3->next!= NULL){
            numberPeople++;
            if (strcmp(num_Name, Head_3->name) == 0){
                printf("已查找到姓名为%s的学生信息!\n", num_Name);
                if(numberPeople<=a){
                    displayData_1(Head_3->next);
                }
                else{
                    displayData_2(Head_3->next);
                }
                k=1;
            }
            Head_3=Head_3->next;
        }
    }
    if (k == 0){
        printf("查无此学生!\n");
    }
}
