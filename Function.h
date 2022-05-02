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
#include <conio.h>
//-------全局变量定义

UND* Head1={NULL};   //本科生链表头指针(不要修改,以 UND* Head_1=Head1 的形式调用)
GRA* Head2={NULL};   //研究生链表头指针(不要修改,以 UND* Head_2=Head2 的形式调用)
FILE* fp1=NULL;   //本科生文件指针(函数结尾建议rewind(fp1),使fp1回到文件开头)
FILE* fp2=NULL;   //研究生文件指针(函数结尾建议rewind(fp2),使fp2回到文件开头)

//-------


//-------函数声明和函数功能说明

void readFromFile();   //程序开始加载文件中的全部学生数据到学生链表(分两类学生到两个链表),---放程序开始后一行(放在定义变量前)---
void sayeToFile();   //程序结束将学生链表中的全部学生数据保存到文件并退出函数,---放退出程序前一行---
UND* scanf_1();   //从键盘获取一个本科生数据后,返回节点地址(自带初始化)
GRA* scanf_2();   //从键盘获取一个研究生数据后,返回节点地址(自带初始化)
void gradesCompute_1(UND* stu);   //计算一个本科生总成绩
void gradesCompute_2(GRA* stu);   //计算一个研究生总成绩
void addNode_1(UND* stu);   //将一个本科生节点添加到链表尾,且自动计算学号,(实参: 学生节点指针)
void addNode_2(GRA* stu);   //将一个研究生节点添加到链表尾,且自动计算学号,(实参: 学生节点指针)
void exchangeData_1(UND* stu_1,UND* stu_2);   //交换两名本科生,(实参: 需交换的两个学生节点)
void exchangeData_2(GRA* stu_1,GRA* stu_2);   //交换两名研究生,(实参: 需交换的两个学生节点)
int  numberPeople_1(UND* Head_1);   //计算本科生人数,(实参: 本科生链表头指针)
int  numberPeople_2(GRA* Head_2);   //计算研究生人数,(实参: 研究生链表头指针)
void displayData_1(UND stu);   //显示本科生数据,(实参: 学生节点)
void displayData_2(GRA stu);   //显示研究生数据,(实参: 学生节点)
void searchstu(char* num_Name);   //通过名字或学号查询,(查找到后输出)某位学生的信息,(实参: 姓名字符串的首地址)
void modifyStudent();   //根据学号修改一位学生的基本资料数据,(选项内置菜单)
void modifyScore();   //根据学号修改一位学生的基本成绩数据,(选项内置菜单)
void deleteStudentByild(int num1);   //根据学号删除一位学生的基本成绩数据
void getstu_1(UND* Head);   //显示以Head为头指针的链表的全部本科生
void getstu_2(GRA* Head);   //显示以Head为头指针的链表的全部研究生
void printften_1(int i);   //显示第i页的本科生,(实参: 页数)
void printften_2(int i);   //显示第i页的研究生,(实参: 页数)
void getPage_1();   //可分页显示本科生(内置菜单)
void getPage_2();   //可分页显示研究生(内置菜单)
//void searchClass();
//-------


//-------函数定义

void readFromFile(){
    Head1=(UND*)malloc(sizeof(UND));
    Head2=(GRA*)malloc(sizeof(GRA));
    Head1->num=0;
    Head2->num=0;
    UND*Head_1=Head1;   //Head_1和Head_2暂存头指针,防止头指针丢失
    GRA*Head_2=Head2;
    UND* graduate1=(UND*)malloc(sizeof(UND));   //graduate1和graduate2暂存学生数据
    GRA* graduate2=(GRA*)malloc(sizeof(GRA));
    if((fp1=fopen("undergraduate.dat","rb+"))==NULL){
        printf("文件打开失败!");
        exit(1);
    }
    if((fp2=fopen("graduate.dat","rb+"))==NULL){
        printf("文件打开失败!");
        exit(1);
    }
    if(fread(graduate1,sizeof(UND),1,fp1)){
        do {
                Head_1->next = graduate1;
                Head_1 = Head_1->next;
                graduate1 = (UND *) malloc(sizeof(UND));
        } while (fread(graduate1, sizeof(UND), 1, fp1));
    }
    Head_1->next=NULL;
    if(fread(graduate2,sizeof(GRA),1,fp2)){
        do {
                Head_2->next = graduate2;
                Head_2 = Head_2->next;
                graduate2 = (GRA *) malloc(sizeof(GRA));
        } while (fread(graduate2, sizeof(GRA), 1, fp2));
    }
    Head_2->next=NULL;
}


void sayeToFile(){
    rewind(fp1);    //使fp1和fp2回到文件开头
    rewind(fp2);
    UND*Head_1=Head1;   //Head_1和Head_2暂存头指针,防止头指针丢失
    GRA*Head_2=Head2;
    UND ustu;
    GRA stu;
    while((fwrite(Head_1->next,sizeof(UND),1,fp1))==1){
        //stu=Head_1->next;
        //printf("%d %s %u %s %s %d %d %d %d %d %d\n",stu->num,stu->name,stu->sex,stu->major,stu->banji,stu->score[0],stu->score[1],stu->score[2],stu->score[3],stu->score[4],stu->score[5]);
        Head_1=Head_1->next;
    }
    while((fwrite(Head_2->next,sizeof(GRA),1,fp2))==1){
        Head_2=Head_2->next;
    }
    //-----测试结束可删除-----
    rewind(fp1);
    printf("经本次修改后undergraduate.dat文件内容为:\n");
    fread(&ustu, sizeof(ustu), 1, fp1);
    while (!feof(fp1))
    {
        switch (ustu.sex)
        {
            case male:
                printf("%d %s 男 %s %s ", ustu.num, ustu.name, ustu.major, ustu.banji);
                printf("%d %d %d %d %d %d\n", ustu.score[0], ustu.score[1], ustu.score[2], ustu.score[3], ustu.score[4], ustu.score[5]);
                break;
            case female:
                printf("%d %s 女 %s %s ", ustu.num, ustu.name, ustu.major, ustu.banji);
                printf("%d %d %d %d %d %d\n", ustu.score[0], ustu.score[1], ustu.score[2], ustu.score[3], ustu.score[4], ustu.score[5]);
                break;
        }
        printf("------------\n");
        fread(&ustu, sizeof(UND), 1, fp1);
    }
    printf("经本次修改后graduate.dat文件内容为:\n");
    fread(&stu, sizeof(GRA), 1, fp2);
    while (!feof(fp2))
    {
        switch (stu.sex) {
            case male:
                printf("%d %s 男 %s %d %s %s %d %d %d %d %d\n", stu.num, stu.name, stu.major, stu.Class,
                       stu.reserch, stu.tname, stu.score[0], stu.score[1], stu.score[2], stu.classrank, stu.allrank);
                break;
            case female:
                printf("%d %s 女 %s %d %s %s %d %d %d %d %d\n", stu.num, stu.name, stu.major, stu.Class,
                       stu.reserch, stu.tname, stu.score[0], stu.score[1], stu.score[2], stu.classrank, stu.allrank);
                break;
        }
        printf("------------\n");
        fread(&stu, sizeof(GRA), 1, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    exit(0);
}


UND* scanf_1(){
    UND*stu;
    int i;
    if ((stu= (UND *)malloc(sizeof(UND))) == NULL) {
        printf("不能成功分配储存块!\n");
        exit(0);
    }
    stu->num=0;
    for (i = 0; i < 6; ++i) {
        stu->score[i]=0;
    }
    scanf("%s%u%s%s%d%d%d",stu->name,&stu->sex,stu->major,stu->banji,&stu->score[0],&stu->score[1],&stu->score[2]);
    return stu;
}


GRA* scanf_2(){
    GRA*stu;
    int i;
    if ((stu= (GRA *)malloc(sizeof(GRA))) == NULL) {
        printf("不能成功分配储存块!\n");
        exit(0);
    }
    stu->num=0;
    for (i = 0; i < 3; ++i) {
        stu->score[i]=0;
    }
    stu->classrank=0;
    stu->allrank=0;
    scanf("%s%u%s%d%s%s%d%d",stu->name,&stu->sex,stu->major,&stu->Class,stu->reserch,stu->tname,&stu->score[0],&stu->score[1]);
    return stu;
}


void gradesCompute_1(UND* stu){
    stu->score[3]=stu->score[0]+stu->score[1]+stu->score[2];
}


void gradesCompute_2(GRA * stu){
    stu->score[2]=stu->score[0]+stu->score[1];
}


void addNode_1(UND* stu){
    UND*Head_1=Head1;   //Head_1暂存头指针,防止头指针丢失
    GRA*Head_2=Head2;
    int count=0;
    int num1=0;
    int num2=0;
    if(Head_1->next==NULL&&Head_2->next==NULL){
        stu->num=1;
        count=1;
    }
    while(Head_1->next!=NULL){
        if(Head_1->next->num!=-1){
            num1=Head_1->next->num;
        }
        Head_1=Head_1->next;
    }
    while(Head_2->next!=NULL){
        if(Head_2->next->num!=-1){
            num2=Head_2->next->num;
        }
        Head_2=Head_2->next;
    }
    if(count==0){
        if(Head_1->num==-1){
            stu->num =num1>=num2?num1:num2+ 1;
        }
        if(Head_1->num<=Head_2->num) {
            stu->num = Head_2->num + 1;
        }
        else{
            stu->num = Head_1->num + 1;
        }
    }
    Head_1->next=stu;
    stu->next=NULL;
    gradesCompute_1(stu);
}

void addNode_2(GRA* stu){
    UND* Head_1=Head1;
    GRA* Head_2=Head2;   //Head_2暂存头指针,防止头指针丢失
    int count=0;
    int num1=0;
    int num2=0;
    if(Head_1->next==NULL&&Head_2->next==NULL){
        stu->num=1;
        count=1;
    }
    while(Head_1->next!=NULL){
        if(Head_1->next->num!=-1){
            num1=Head_1->next->num;
        }
        Head_1=Head_1->next;
    }
    while(Head_2->next!=NULL){
        if(Head_2->next->num!=-1){
            num2=Head_2->next->num;
        }
        Head_2=Head_2->next;
    }
    if(count==0){
        if(Head_2->num==-1){
            stu->num =num1>=num2?num1:num2+ 1;
        }
        if(Head_1->num<=Head_2->num) {
            stu->num = Head_2->num + 1;
        }
        else{
            stu->num = Head_1->num + 1;
        }
    }
    Head_2->next=stu;
    stu->next=NULL;
    gradesCompute_2(stu);
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


void displayData_1(UND stu) {
    if(stu.num!=-1){
        switch (stu.sex) {
            case male:
                printf("%-3d %-3s  男   %-3s  %-3s  %-3d  %-3d  %-3d %-3d    %-3d    %-3d\n", stu.num, stu.name, stu.major,
                       stu.banji, stu.score[0],
                       stu.score[1], stu.score[2], stu.score[3], stu.score[4], stu.score[5]);
                break;
            case female:
                printf("%-3d %-3s  女   %-3s  %-3s  %-3d  %-3d  %-3d %-3d    %-3d    %-3d\n", stu.num, stu.name, stu.major,
                       stu.banji, stu.score[0],
                       stu.score[1], stu.score[2], stu.score[3], stu.score[4], stu.score[5]);
                break;
        }
    }
}

void displayData_2(GRA stu) {
    if(stu.num!=-1) {
        switch (stu.sex) {
            case male:
                printf("%-3d %-3s  男   %-3s  %-3d  %-3s  %-3s  %-3d  %-3d  %-3d   %-3d   %-3d\n", stu.num, stu.name, stu.major,
                       stu.Class,
                       stu.reserch, stu.tname, stu.score[0], stu.score[1], stu.score[2], stu.classrank, stu.allrank);
                break;
            case female:
                printf("%-3d %-3s  女   %-3s  %-3d  %-3s  %-3s  %-3d  %-3d  %-3d   %-3d   %-3d\n", stu.num, stu.name, stu.major,
                       stu.Class,
                       stu.reserch, stu.tname, stu.score[0], stu.score[1], stu.score[2], stu.classrank, stu.allrank);
                break;
        }
    }
}



void searchstu(char* num_Name){
    UND* Head_1=Head1;
    GRA* Head_2=Head2;
    int num1=0;
    int i,j,k=0,h=0;
    if ('0' <= num_Name[0] && num_Name[0] <= '9'){    //判断num_Name是否是学号
        for(i=0;i<strlen(num_Name);i++){     //得到int类型的学号
            j=num_Name[i]-'0';
            num1=10*num1+j;
        }
        while ( Head_1->next!= NULL){
            if (Head_1->next->num == num1){
                printf("已查找到学号为%d的学生信息!\n", num1);
                displayData_1(*Head_1->next);
                k=1;
                break;
            }
            Head_1=Head_1->next;
        }
        if(k==0){
            while ( Head_2->next!= NULL){
                if (Head_2->next->num == num1){
                    printf("已查找到学号为%d的学生信息!\n", num1);
                    displayData_2(*Head_2->next);
                    k=1;
                    break;
                }
                Head_2=Head_2->next;
            }
        }
    }
    else{
        while (Head_1->next!= NULL){
            if (strcmp(num_Name, Head_1->next->name) == 0){
                printf("已查找到姓名为%s的学生信息!\n", num_Name);
                displayData_1(*Head_1->next);
                k=1;
                h++;
            }
            Head_1=Head_1->next;
        }
        while (Head_2->next!= NULL){
            if (strcmp(num_Name, Head_2->next->name) == 0){
                printf("已查找到姓名为%s的学生信息!\n", num_Name);
                displayData_2(*Head_2->next);
                k=1;
                h++;
            }
            Head_2=Head_2->next;
        }
        if(h>1){
            printf("共查找到姓名为%s的学生信息%d组\n",num_Name,h);
        }
    }
    if (k == 0){
        printf("查无此学生!\n");
    }
}


void modifyStudent(){
    UND* Head_1=Head1;
    UND* Head__1=Head1;
    GRA* Head_2=Head2;
    GRA* Head__2=Head2;
    int num1=0;
    int k=0;
    int i=0;
    printf("请输入需修改学生的学号:\n");
    scanf("%d",&num1);
    while ( Head__1->next!= NULL){
        if (Head__1->next->num == num1){
            printf("已查找到学号为%d的学生信息!\n", num1);
            displayData_1(*Head__1->next);
            k=1;
            break;
        }
        Head__1=Head__1->next;
    }
    if(k==0){
        while ( Head__2->next!= NULL){
            if (Head__2->next->num == num1){
                printf("已查找到学号为%d的学生信息!\n", num1);
                displayData_2(*Head__2->next);
                k=1;
                break;
            }
            Head__2=Head__2->next;
        }
    }
    while ( Head_1->next!= NULL){
        if (Head_1->next->num == num1){
            printf("请输入需修改的数据的编号(-1-姓名 -2-性别 -3-专业 -4-班级 -0-退出):\n");
            scanf("%d",&i);
            switch(i){
                case 1:
                    printf("输入修改数据(姓名):\n");
                    scanf("%s",Head_1->next->name);
                    break;
                case 2:
                    printf("输入修改数据(性别 -0-男 -1-女):\n");
                    scanf("%u",&Head_1->next->sex);
                    break;
                case 3:
                    printf("输入修改数据(专业):\n");
                    scanf("%s",Head_1->next->major);
                    break;
                case 4:
                    printf("输入修改数据(班级 xxx班):\n");
                    scanf("%s",Head_1->next->banji);
                    break;
                case 0:
                default:
                    break;
            }
            k=1;
            break;
        }
        Head_1=Head_1->next;
    }
    if(k==0){
        while ( Head_2->next!= NULL){
            if (Head_2->next->num == num1){
                printf("请输入需修改的数据的编号(-1-姓名 -2-性别 -3-专业 -4-班级 -5-研究方向 -6-导师名字 -0-退出):\n");
                scanf("%d",&i);
                switch(i) {
                    case 1:
                        printf("输入修改数据(姓名):\n");
                        scanf("%s",Head_2->next->name);
                        break;
                    case 2:
                        printf("输入修改数据(性别 -0-男 -1-女):\n");
                        scanf("%u",&Head_2->next->sex);
                        break;
                    case 3:
                        printf("输入修改数据(专业):\n");
                        scanf("%s",Head_2->next->major);
                        break;
                    case 4:
                        printf("输入修改数据(班级 为纯数字):\n");
                        scanf("%d",&Head_2->next->Class);
                        break;
                    case 5:
                        printf("输入修改数据(研究方向):\n");
                        scanf("%s",Head_2->next->reserch);
                        break;
                    case 6:
                        printf("输入修改数据(导师名字):\n");
                        scanf("%s",Head_2->next->tname);
                        break;
                    case 0:
                    default:
                        break;
                }
                k=1;
                break;
            }
            Head_2=Head_2->next;
        }
    }
    if (k == 0){
        printf("查无此学生!\n");
    }
}


void modifyScore(){
    UND* Head_1=Head1;
    UND* Head__1=Head1;
    GRA* Head_2=Head2;
    GRA* Head__2=Head2;
    int num1=0;
    int k=0;
    int i=0;
    printf("请输入需修改学生的学号:\n");
    scanf("%d",&num1);
    while ( Head_1->next!= NULL){
        if (Head_1->next->num == num1){
            printf("已查找到学号为%d的学生信息!\n", num1);
            displayData_1(*Head_1->next);
            k=1;
            break;
        }
        Head_1=Head_1->next;
    }
    if(k==0){
        while ( Head_2->next!= NULL){
            if (Head_2->next->num == num1){
                printf("已查找到学号为%d的学生信息!\n", num1);
                displayData_2(*Head_2->next);
                k=1;
                break;
            }
            Head_2=Head_2->next;
        }
    }
    while ( Head__1->next!= NULL){
        if (Head__1->next->num == num1){
            printf("请输入需修改的数据的编号(-1-高数成绩 -2-c语言成绩 -3-英语成绩 -4-高数成绩和c语言成绩和英语成绩 -0-退出):\n");
            scanf("%d",&i);
            switch(i){
                case 1:
                    printf("输入修改数据(高数成绩):\n");
                    scanf("%d",&Head__1->next->score[0]);
                    break;
                case 2:
                    printf("输入修改数据(c语言成绩):\n");
                    scanf("%d",&Head__1->next->score[1]);
                    break;
                case 3:
                    printf("输入修改数据(英语成绩):\n");
                    scanf("%d",&Head__1->next->score[2]);
                    break;
                case 4:
                    printf("输入修改数据(英语成绩):\n");
                    scanf("%d%d%d",&Head__1->next->score[0],&Head__1->next->score[1],&Head__1->next->score[2]);
                    break;
                case 0:
                default:
                    break;
            }
            k=1;
            break;
        }
        Head__1=Head__1->next;
    }
    gradesCompute_1(Head__1->next);
    if(k==0){
        while ( Head__2->next!= NULL){
            if (Head__2->next->num == num1){
                printf("请输入需修改的数据的编号(-1-综合成绩 -2-论文成绩 -3-综合成绩和论文成绩 -0-退出):\n");
                scanf("%d",&i);
                switch(i) {
                    case 1:
                        printf("输入修改数据(综合成绩):\n");
                        scanf("%d",&Head__2->next->score[0]);
                        break;
                    case 2:
                        printf("输入修改数据(论文成绩):\n");
                        scanf("%d",&Head__2->next->score[1]);
                        break;
                    case 3:
                        printf("输入修改数据(综合成绩和论文成绩):\n");
                        scanf("%d%d",&Head__2->next->score[0],&Head__2->next->score[1]);
                        break;
                    case 0:
                    default:
                        break;
                }
                k=1;
                break;
            }
            Head__2=Head__2->next;
        }
        gradesCompute_2(Head__2->next);
    }
    if (k == 0){
        printf("查无此学生!\n");
    }
}


void deleteStudentByild(int num1){
    UND* Head_1=Head1;
    GRA* Head_2=Head2;
    int k=0;
    while ( Head_1->next!= NULL){
        if (Head_1->next->num == num1){
            Head_1->next->num=-1;
            printf("已删除学号为%d的学生!\n", num1);
            k=1;
            break;
        }
        Head_1=Head_1->next;
    }
    if(k==0){
        while ( Head_2->next!= NULL){
            if (Head_2->next->num == num1){
                Head_2->next->num=-1;
                printf("已删除学号为%d的学生!\n", num1);
                k=1;
                break;
            }
            Head_2=Head_2->next;
        }
    }
    if (k == 0){
        printf("查无此学生!\n");
    }
}
void getstu_1(UND* Head){
    while ( Head->next!= NULL){
        if(Head->next->num!=-1){
            displayData_1(*Head->next);
            Head = Head->next;
        }
    }
}
void getstu_2(GRA* Head){
    while ( Head->next!= NULL){
        if(Head->next->num!=-1){
            displayData_2(*Head->next);
            Head = Head->next;
        }
    }
}


void printften_1(int i)
{
    int stunum = 0;
    int cnt = 1;
    UND * pstu;
    pstu = Head1;
    while (pstu->next!= NULL && stunum < 10)
    {
        if (cnt >= (i-1)*10+1)
        {
            displayData_1(*pstu->next);
            pstu = pstu->next;
            stunum++;
        }
        else pstu = pstu->next;
        cnt++;
    }
}


void printften_2(int i)
{
    int stunum = 0;
    int cnt = 1;
    GRA *pstu;
    pstu = Head2;
    while (pstu->next != NULL && stunum < 10)
    {
        if (cnt >= (i-1)*10+1)
        {
            displayData_2(*pstu->next);
            pstu = pstu->next;
            stunum++;
        }
        else pstu = pstu->next;
        cnt++;
    }
}


void getPage_1(){
    int totalstu = 0;   //人数
    char ch[2];
    int allpage;   //总页数
    int page = 1;  //当前页数
    UND * cnt;
    cnt = Head1;
    while (cnt->next!= NULL)
    {
        totalstu++;
        cnt = cnt->next;
    }
    if (totalstu % 10 != 0)
    {
        allpage = totalstu / 10 + 1;
    }
    else allpage = totalstu / 10;
    scanf("%c",&ch[1]);
    printf("学号 姓名 性别  专业  班级 高数 C语言 英语 总成绩 班级排名 校级排名\n");
    printften_1(page);
    printf("-------------------------------当前为第1页,共%d页--------------------------------\n", allpage);
    while (1)
    {
        printf("首页请按“a”键 上一页请按“w”键 下一页请按“s”键 尾页请按“d”键 退出请按“0”键\n");
        scanf("%c",&ch[0]);
        scanf("%c",&ch[1]);
        if (ch[0] == 48) break;
        switch (ch[0])
        {
            case 100:
            {
                page=allpage;
                printf("\n学号 姓名 性别  专业  班级 高数 C语言 英语 总成绩 班级排名 校级排名\n");
                printften_1(page);
                printf("-------------------------------当前为第%d页,共%d页--------------------------------\n",page, allpage);
                break;
            }
            case 115:
            {
                if(page==allpage)
                {
                    printf("已是尾页\n");
                    break;
                }
                page++;
                printf("\n学号 姓名 性别  专业  班级 高数 C语言 英语 总成绩 班级排名 校级排名\n");
                printften_1(page);
                printf("-------------------------------当前为第%d页,共%d页--------------------------------\n",page, allpage);
                break;
            }
            case 119:
            {
                if(page==1)printf("已是首页\n");
                else
                {
                    page--;
                    printf("\n学号 姓名 性别  专业  班级 高数 C语言 英语 总成绩 班级排名 校级排名\n");
                    printften_1(page);
                    printf("-------------------------------当前为第1页,共%d页--------------------------------\n", allpage);
                }
                break;
            }
            case 97:
            {
                if(page==1)printf("已是首页\n");
                else
                {
                    page=1;
                    printf("\n学号 姓名 性别  专业  班级 高数 C语言 英语 总成绩 班级排名 校级排名\n");
                    printften_1(page);
                    printf("-------------------------------当前为第%d页,共%d页--------------------------------\n", page,allpage);
                }
                break;
            }
            default:
                //system("cls");
                break;
        }
        //system("cls");
    }
}


void getPage_2(){
    int totalstu = 0;   //人数
    char ch[2];
    int allpage;   //总页数
    int page = 1;  //当前页数
    GRA * cnt;
    cnt = Head2;
    while (cnt->next!= NULL)
    {
        totalstu++;
        cnt = cnt->next;
    }
    if (totalstu % 10 != 0)
    {
        allpage = totalstu / 10 + 1;
    }
    else allpage = totalstu / 10;
    scanf("%c",&ch[1]);
    printf("学号 姓名 性别  专业  班级 研究方向 导师名字 综合成绩 论文成绩 总成绩 班级排名 校级排名\n");
    printften_2(page);
    printf("-------------------------------当前为第%d页,共%d页--------------------------------\n",page,allpage);
    while (1)
    {
        printf("首页请按“a”键 上一页请按“w”键 下一页请按“s”键 尾页请按“d”键 退出请按“0”键\n");
        scanf("%c",&ch[0]);
        scanf("%c",&ch[1]);
        if (ch[0] == '0') break;
        switch (ch[0])
        {
            case 'd':
            {
                page=allpage;
                printf("\n学号 姓名 性别  专业  班级 研究方向 导师名字 综合成绩 论文成绩 总成绩 班级排名 校级排名\n");;
                printften_2(page);
                printf("-------------------------------------当前为第%d页,共%d页--------------------------------------\n",page, allpage);
                break;
            }
            case 's':
            {
                if(page==allpage)
                {
                    printf("已是尾页\n");
                    break;
                }
                page++;
                printf("\n学号 姓名 性别  专业  班级 研究方向 导师名字 综合成绩 论文成绩 总成绩 班级排名 校级排名\n");
                printften_2(page);
                printf("-------------------------------------当前为第%d页,共%d页--------------------------------------\n",page, allpage);
                break;
            }
            case 'w':
            {
                if(page==1)printf("已是首页\n");
                else
                {
                    page--;
                    printf("\n学号 姓名 性别  专业  班级 研究方向 导师名字 综合成绩 论文成绩 总成绩 班级排名 校级排名\n");
                    printften_2(page);
                    printf("-------------------------------------当前为第%d页,共%d页--------------------------------------\n",page,allpage);
                }
                break;
            }
            case 'a':
            {
                if(page==1)printf("已是首页\n");
                else
                {
                    page=1;
                    printf("\n学号 姓名 性别  专业  班级 研究方向 导师名字 综合成绩 论文成绩 总成绩 班级排名 校级排名\n");
                    printften_2(page);
                    printf("-------------------------------------当前为第%d页,共%d页--------------------------------------\n", page,allpage);
                }
                break;
            }
            default:
                //system("cls");
                break;
        }
        //system("cls");
    }
}