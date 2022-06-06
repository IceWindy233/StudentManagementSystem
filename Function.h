//
// Created by 86134 on 2022/4/19.
//

#ifndef _MENU_
#define _MENU_
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#endif
#include "Base.h"
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
void getPage_1();   //可分页显示本科生,(内置菜单)
void getPage_2();   //可分页显示研究生,(内置菜单)
void infoPrint_1();   //打印本科生表头
void infoPrint_2();   //打印研究生表头
void searchByClass_1(char* banji);   //按班级显示本科生数据
void searchByClass_2(char*major, int class);   //按班级和研究方向显示研究生数据
void searchByName(char* name);   //按名字显示本科生和研究生数据
void searnraiidyClassCourse_1(char* banji,char* course);   //按班级和课程查询不及格本科生,(course:课程号从零开始)
void searnraiidyClassCourse_2(int class,char *major,char* course);   //按班级和课程查询不及格研究生,(course:课程号从零开始)
void sortAllByld_1();   //按学号id从小到大排序本科生,将被删除学生放到最前面
void sortAllByld_2();   //按学号id从小到大排序研究生,将被删除学生放到最前面
void sortAll_1();   //按总成绩从高到低排序本科生,并计算校排名(不可单独使用,可用sortAllAndShow_1())
void sortAll_2();   //按总成绩从高到低排序研究生,并计算校排名(不可单独使用,可用sortAllAndShow_2())
void sortAllAndShow_1();   //按总成绩从高到低排序本科生,并显示
void sortAllAndShow_2();   //按总成绩从高到低排序研究生,并显示
UND* returnsClassHead_1(char *banji);   //返回同班级本科生链表头
GRA* returnsClassHead_2(char*major, int class);   //返回同班级研究生链表头
void sortAllByClass_1(char *banji);   //将某班本科生数据按总成绩从高到低排序并显示
void sortAllByClass_2(char*major,int class);   //将某班研究生数据按总成绩从高到低排序并显示
void countAverScore(); //统计某门课每个班的平均成绩
void countByClassScore_1(char* banji, char* course);//本科生统计某个班内某门课程不同等级学生的人数
void countByClassScore_2(char* major, char* course, int class);//研究生统计某个班内某门课程不同等级学生的人数
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
    while((fwrite(Head_1->next,sizeof(UND),1,fp1))==1){
        //stu=Head_1->next;
        //printf("%d %s %u %s %s %d %d %d %d %d %d\n",stu->num,stu->name,stu->sex,stu->major,stu->banji,stu->score[0],stu->score[1],stu->score[2],stu->score[3],stu->score[4],stu->score[5]);
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


void gradesCompute_2(GRA* stu){
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


int numberPeople_1(UND* Head_1){
    int i=0;
    while(Head_1->next!=NULL){
        if(Head_1->next->num!=-1){
            i++;
            Head_1=Head_1->next;
        }
    }
    return i;
}


int numberPeople_2(GRA* Head_2){
    int i=0;
    while(Head_2->next!=NULL){
        if(Head_2->next->num!=-1){
            i++;
            Head_2=Head_2->next;
        }
    }
    return i;
}


void displayData_1(UND stu) {
    if(stu.num!=-1){
        switch (stu.sex) {
            case male:
                printf("%-4d %-4s   男   %-3s  %-9s  %-4d  %-5d  %-4d  %-3d    %-5d    %-3d\n", stu.num, stu.name, stu.major,
                       stu.banji, stu.score[0],
                       stu.score[1], stu.score[2], stu.score[3], stu.score[4], stu.score[5]);
                break;
            case female:
                printf("%-4d %-4s   女   %-3s  %-9s  %-5d  %-4d  %-4d  %-3d    %-5d    %-3d\n", stu.num, stu.name, stu.major,
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
                printf("%-4d  %-4s  男   %-3s  %-3d  %-12s  %-5s  %-7d  %-7d  %-4d   %-6d   %-3d\n", stu.num, stu.name, stu.major,
                       stu.Class,
                       stu.reserch, stu.tname, stu.score[0], stu.score[1], stu.score[2], stu.classrank, stu.allrank);
                break;
            case female:
                printf("%-4d  %-4s  女   %-3s  %-3d  %-12s  %-5s  %-7d  %-7d  %-4d   %-6d   %-3d\n", stu.num, stu.name, stu.major,
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
    printf("********************学生数据查询********************\n");
    if ('0' <= num_Name[0] && num_Name[0] <= '9'){    //判断num_Name是否是学号
        for(i=0;i<strlen(num_Name);i++){     //得到int类型的学号
            j=num_Name[i]-'0';
            num1=10*num1+j;
        }
        while ( Head_1->next!= NULL){
            if (Head_1->next->num == num1){
                printf("已查找到学号为%d的学生信息!\n\n", num1);
                displayData_1(*Head_1->next);
                printf("\n");
                k=1;
                break;
            }
            Head_1=Head_1->next;
        }
        if(k==0){
            while ( Head_2->next!= NULL){
                if (Head_2->next->num == num1){
                    printf("已查找到学号为%d的学生信息!\n\n", num1);
                    displayData_2(*Head_2->next);
                    printf("\n");
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
                printf("已查找到姓名为%s的学生信息!\n\n", num_Name);
                displayData_1(*Head_1->next);
                printf("\n");
                k=1;
                h++;
            }
            Head_1=Head_1->next;
        }
        while (Head_2->next!= NULL){
            if (strcmp(num_Name, Head_2->next->name) == 0){
                printf("已查找到姓名为%s的学生信息!\n\n", num_Name);
                displayData_2(*Head_2->next);
                printf("\n");
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
    printf("********************学生成绩管理系统********************\n");
    printf("请输入需修改学生的学号（输入0返回）:");
    scanf("%d",&num1);
    if(num1 == 0){
        system("cls");
        return;
    }
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
            printf("请输入需修改的数据的编号(-1-姓名 -2-性别 -3-专业 -4-班级 -0-退出):");
            scanf("%d",&i);
            switch(i){
                case 1:
                    printf("输入修改数据(姓名):");
                    scanf("%s",Head_1->next->name);
                    break;
                case 2:
                    printf("输入修改数据(性别 -0-男 -1-女):");
                    scanf("%u",&Head_1->next->sex);
                    break;
                case 3:
                    printf("输入修改数据(专业):");
                    scanf("%s",Head_1->next->major);
                    break;
                case 4:
                    printf("输入修改数据(班级 xxx班):");
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
                printf("请输入需修改的数据的编号(-1-姓名 -2-性别 -3-专业 -4-班级 -5-研究方向 -6-导师名字 -0-退出):");
                scanf("%d",&i);
                switch(i) {
                    case 1:
                        printf("输入修改数据(姓名):");
                        scanf("%s",Head_2->next->name);
                        break;
                    case 2:
                        printf("输入修改数据(性别 -0-男 -1-女):");
                        scanf("%u",&Head_2->next->sex);
                        break;
                    case 3:
                        printf("输入修改数据(专业):");
                        scanf("%s",Head_2->next->major);
                        break;
                    case 4:
                        printf("输入修改数据(班级 为纯数字):");
                        scanf("%d",&Head_2->next->Class);
                        break;
                    case 5:
                        printf("输入修改数据(研究方向):");
                        scanf("%s",Head_2->next->reserch);
                        break;
                    case 6:
                        printf("输入修改数据(导师名字):");
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
    printf("修改已完成！\n");
    system("pause");
    system("cls");
}


void modifyScore(){
    UND* Head_1=Head1;
    UND* Head__1=Head1;
    GRA* Head_2=Head2;
    GRA* Head__2=Head2;
    int num1=0;
    int k=0;
    int i=0;
    printf("********************学生成绩管理系统********************\n");
    printf("请输入需修改学生的学号（输入0返回）:");
    scanf("%d",&num1);
    if(num1 == 0){
        system("cls");
        return;
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
    while ( Head__1->next!= NULL){
        if (Head__1->next->num == num1){
            printf("请输入需修改的数据的编号(-1-高数成绩 -2-c语言成绩 -3-英语成绩 -4-高数成绩和c语言成绩和英语成绩 -0-退出):");
            scanf("%d",&i);
            switch(i){
                case 1:
                    printf("输入修改数据(高数成绩):");
                    scanf("%d",&Head__1->next->score[0]);
                    break;
                case 2:
                    printf("输入修改数据(c语言成绩):");
                    scanf("%d",&Head__1->next->score[1]);
                    break;
                case 3:
                    printf("输入修改数据(英语成绩):");
                    scanf("%d",&Head__1->next->score[2]);
                    break;
                case 4:
                    printf("输入修改数据(英语成绩):");
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
                printf("请输入需修改的数据的编号(-1-综合成绩 -2-论文成绩 -3-综合成绩和论文成绩 -0-退出):");
                scanf("%d",&i);
                switch(i) {
                    case 1:
                        printf("输入修改数据(综合成绩):");
                        scanf("%d",&Head__2->next->score[0]);
                        break;
                    case 2:
                        printf("输入修改数据(论文成绩):");
                        scanf("%d",&Head__2->next->score[1]);
                        break;
                    case 3:
                        printf("输入修改数据(综合成绩和论文成绩):");
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
    printf("修改已完成！\n");
    system("pause");
    system("cls");
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
            if(Head->next!=NULL&&Head->next->num!=0){
                displayData_1(*Head->next);
            }
            Head = Head->next;
        }
    }
}
void getstu_2(GRA* Head){
    while ( Head->next!= NULL){
        if(Head->next->num!=-1){
            if(Head->next!=NULL&&Head->next->num!=0){
                displayData_2(*Head->next);
            }
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
    sortAllByld_1(); //按照学号排序
    int totalstu = 0;   //人数
    char choice[2];
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
    while (1){
        system("cls");
        printf("********************************本科生成绩管理系统*********************************\n");
        infoPrint_1();
        printften_1(page);
        printf("-------------------------------当前为第%d页,共%d页--------------------------------\n",page,allpage);
        printf("首页请按“a”键 上一页请按“w”键 下一页请按“s”键 尾页请按“d”键 退出请按“0”键：");
        scanf("%c",&choice[0]);
        scanf("%c",&choice[1]);
        switch (choice[1]){
            case 'a':
                if(page == 1){
                    printf("已经是首页!\n");
                    system("pause");
                }else {
                    page = 1;
                }
                break;
            case 'w':
                if(page == 1){
                    printf("已经是首页!\n");
                    system("pause");
                }else if(page > 1){
                    page--;
                }
                break;
            case 's':
                if(page == allpage){
                    printf("已经是尾页!\n");
                    system("pause");
                }else if(page < allpage){
                    page++;
                }
                break;
            case 'd':
                if (page == allpage){
                    printf("已经是尾页!\n");
                    system("pause");
                }else{
                    page = allpage;
                }
                break;
            case '0':
                system("cls");
                return;
            default:
                printf("输入错误，请重新输入！\n");
                system("pause");
                system("cls");
                break;
        }
    }
}

void getPage_2(){
    sortAllByld_2(); //按照学号排序
    int totalstu = 0;   //人数
    char choice[2];
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
    while (1){
        system("cls");
        printf("********************************研究生成绩管理系统*********************************\n");
        infoPrint_2();
        printften_2(page);
        printf("-------------------------------当前为第%d页,共%d页--------------------------------\n",page,allpage);
        printf("首页请按“a”键 上一页请按“w”键 下一页请按“s”键 尾页请按“d”键 退出请按“0”键：");
        scanf("%c",&choice[0]);
        scanf("%c",&choice[1]);
        switch (choice[1]){
            case 'a':
                if(page == 1){
                    printf("已经是首页!\n");
                    system("pause");
                }else {
                    page = 1;
                }
                break;
            case 'w':
                if(page == 1){
                    printf("已经是首页!\n");
                    system("pause");
                }else if(page > 1){
                    page--;
                }
                break;
            case 's':
                if(page == allpage){
                    printf("已经是尾页!\n");
                    system("pause");
                }else if(page < allpage){
                    page++;
                }
                break;
            case 'd':
                if (page == allpage){
                    printf("已经是尾页!\n");
                    system("pause");
                }else{
                    page = allpage;
                }
                break;
            case '0':
                system("cls");
                return;
            default:
                printf("输入错误，请重新输入！\n");
                system("pause");
                system("cls");
                break;
        }
    }
}


void infoPrint_1(){
    printf("\n学号  姓名 性别  专业  班级      高数  C语言  英语 总成绩  班级排名 校级排名\n");
}


void infoPrint_2(){
    printf("\n学号  姓名 性别  专业  班级 研究方向    导师名字 综合成绩 论文成绩 总成绩 班级排名 校级排名\n");
}


void searchByClass_1(char* banji){
    UND*Head_1=Head1;
    int k=0;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            displayData_1(*Head_1->next);
            k=1;
        }
        Head_1=Head_1->next;
    }
    if(k==0)printf("无此班级\n");
}


void searchByClass_2(char*major, int class){
    GRA *Head_2=Head2;
    int k=0;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& strcmp(Head_2->next->major, major) == 0){
            displayData_2(*Head_2->next);
            k=1;
        }
        Head_2=Head_2->next;
    }
    if(k==0)printf("无此班级\n");
}


void searchByName(char* name){
    UND*Head_1=Head1;
    GRA*Head_2=Head2;
    int k=0;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->name,name) == 0){
            displayData_1(*Head_1->next);
            k=1;
        }
        Head_1=Head_1->next;
    }
    while(Head_2->next!=NULL){
        if(strcmp(Head_2->next->name,name) == 0){
            displayData_2(*Head_2->next);
            k=1;
        }
        Head_2=Head_2->next;
    }
    if(k==0)printf("没有名字为%s的学生\n",name);
}


void searnraiidyClassCourse_1(char* banji,char* course){
    UND *Head_1 = Head1;
    int k = 0, i;
    char gaoshu[10] = "高数";
    char c[10] = "C语言";
    char yingyu[10] = "英语";
    if(strcmp(course,gaoshu) == 0){
        i = 0;
    }else if(strcmp(course,c) == 0){
        i = 1;
    }else if(strcmp(course,yingyu) == 0){
        i = 2;
    }else{
        printf("输入错误，请重新输入！\n");
        printf("输入任意键继续\n");
        system("pause");
        system("cls");
        return;
    }
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]<60){
                displayData_1(*Head_1->next);
                k=1;
            }
        }
        Head_1=Head_1->next;
    }
    if(k==0)printf("该班级中的该课程无学生不及格\n");
    printf("查询完毕\n");
    system("pause");
    system("cls");
}


void searnraiidyClassCourse_2(int class,char*major,char* course){
    GRA *Head_2=Head2;
    int k=0, i = -1;
    char zonghe[20] = "综合成绩";
    char lunwen[20] = "论文成绩";
    if(strcmp(course,zonghe) == 0){
        i = 0;
    }else if(strcmp(course,lunwen) == 0){
        i = 1;
    }
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]<60){
                displayData_2(*Head_2->next);
                k=1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k==0)printf("该班级中的该课程无学生不及格\n");
    printf("查询完毕\n");
    system("pause");
    system("cls");
}


void sortAllByld_1(){
    UND *Head_1=Head1;
    int count=numberPeople_1(Head_1),i=0,j=0,k=count;
    for(;i<count-1;i++){
        for(;j<k-1;j++){
            if(Head_1->next->num>Head_1->next->next->num) {
                UND*cur=Head_1->next;
                int temp[12];
                for (int l = 0; l < 12; ++l) {
                    temp[i]=cur->score[l];
                }
                for (int l = 0; l < 12; ++l) {
                    cur->score[l]=cur->next->score[l];
                }
                for (int l = 0; l < 12; ++l) {
                    cur->next->score[l]=temp[l];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;

                char temp2[15];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);

                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;

                char temp4[30];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);

                char temp5[10];
                strcpy(temp5,cur->banji);
                strcpy(cur->banji,cur->next->banji);
                strcpy(cur->next->banji,temp5);
                Head_1=Head_1->next;
            }
        }
        k--;
    }
}


void sortAllByld_2(){
    GRA *Head_2=Head2;
    int count=numberPeople_2(Head_2),i=0,j=0,k=count;
    for(;i<count-1;i++){
        for(;j<k-1;j++){
            if(Head_2->next->num>Head_2->next->next->num) {
                GRA *cur=Head_2->next;

                int temp[3];
                for (int l = 0; l < 3; ++l) {
                    temp[l]=cur->score[l];
                }
                for (int l = 0; l < 3; ++l) {
                    cur->score[l]=cur->next->score[l];
                }
                for (int l = 0; l < 3; ++l) {
                    cur->next->score[l]=temp[l];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;
                char temp2[10];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);
                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;
                char temp4[20];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);
                int temp5=cur->Class;
                cur->Class=cur->next->Class;
                cur->next->Class=temp5;
                char temp6[20];
                strcpy(temp6,cur->reserch);
                strcpy(cur->reserch,cur->next->reserch);
                strcpy(cur->next->reserch,temp6);
                char temp7[10];
                strcpy(temp7,cur->tname);
                strcpy(cur->tname,cur->next->tname);
                strcpy(cur->next->tname,temp7);
                int temp8=cur->classrank;
                cur->classrank=cur->next->classrank;
                cur->next->classrank=temp8;
                int temp9=cur->allrank;
                cur->allrank=cur->next->allrank;
                cur->next->allrank=temp9;

                Head_2=Head_2->next;
            }
        }
        k--;
    }
}



void sortAll_1(){
    UND *cur,*tail;
    UND *Head_1=Head1;
    UND *Head_2=Head_1;
    infoPrint_1();
    cur=Head_2;
    tail=NULL;
    while(cur!=tail){
        while(cur->next!=tail){
            if(cur->score[3]<cur->next->score[3]){
                int temp[12];
                for (int i = 0; i < 12; ++i) {
                    temp[i]=cur->score[i];
                }
                for (int i = 0; i < 12; ++i) {
                    cur->score[i]=cur->next->score[i];
                }
                for (int i = 0; i < 12; ++i) {
                    cur->next->score[i]=temp[i];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;

                char temp2[15];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);

                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;

                char temp4[30];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);

                char temp5[10];
                strcpy(temp5,cur->banji);
                strcpy(cur->banji,cur->next->banji);
                strcpy(cur->next->banji,temp5);
            }
            cur=cur->next;
        }
        tail=cur;
        cur=Head_2;
    }
    //----------------计算排名----------------
    int ranking=1;  //排名
    int const1=1;   //计数器
    Head_1->next->score[5]=ranking;
    while(Head_1->next->next!=NULL){
        if(Head_1->next->score[3]!=Head_1->next->next->score[3]){
            Head_1->next->next->score[5]=Head_1->next->score[5]+const1;
            const1=1;
        }else{
            const1++;
            Head_1->next->next->score[5]=Head_1->next->score[5];
        }
        Head_1=Head_1->next;
    }
}


void sortAll_2(){
    GRA *cur,*tail;
    GRA *Head_2=Head2;
    GRA *Head_3=Head_2;
    infoPrint_2();
    cur=Head_3;
    tail=NULL;
    while(cur!=tail){
        while(cur->next!=tail){
            if(cur->score[2]<cur->next->score[2]){
                int temp[3];
                for (int i = 0; i < 3; ++i) {
                    temp[i]=cur->score[i];
                }
                for (int i = 0; i < 3; ++i) {
                    cur->score[i]=cur->next->score[i];
                }
                for (int i = 0; i < 3; ++i) {
                    cur->next->score[i]=temp[i];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;
                char temp2[10];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);
                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;
                char temp4[20];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);
                int temp5=cur->Class;
                cur->Class=cur->next->Class;
                cur->next->Class=temp5;
                char temp6[20];
                strcpy(temp6,cur->reserch);
                strcpy(cur->reserch,cur->next->reserch);
                strcpy(cur->next->reserch,temp6);
                char temp7[10];
                strcpy(temp7,cur->tname);
                strcpy(cur->tname,cur->next->tname);
                strcpy(cur->next->tname,temp7);
                int temp8=cur->classrank;
                cur->classrank=cur->next->classrank;
                cur->next->classrank=temp8;
                int temp9=cur->allrank;
                cur->allrank=cur->next->allrank;
                cur->next->allrank=temp9;
            }
            cur=cur->next;
        }
        tail=cur;
        cur=Head_3;
    }
    //----------------计算排名----------------
    int ranking=1;  //排名
    int const1=1;   //计数器
    Head_2->next->allrank=ranking;
    while(Head_2->next->next!=NULL){
        if(Head_2->next->score[2]!=Head_2->next->next->score[2]){
            Head_2->next->next->allrank=Head_2->next->allrank+const1;
            const1=1;
        }else{
            const1++;
            Head_2->next->next->allrank=Head_2->next->allrank;
        }
        Head_2=Head_2->next;
    }
}


void sortAllAndShow_1(){
    sortAll_1();
    getstu_1(Head1);
    sortAllByld_1();
    printf("查询完毕！按任意键返回主菜单！\n");
    system("pause");
    system("cls");
}


void sortAllAndShow_2(){
    sortAll_2();
    getstu_2(Head2);
    sortAllByld_2();
    printf("查询完毕！按任意键返回主菜单！\n");
    system("pause");
    system("cls");
}


UND* returnsClassHead_1(char *banji){
    UND* Head_1=Head1;
    UND* Head_2=(UND*) malloc(sizeof (UND));
    UND* Head_3=Head_2;   //防止Head_2丢失
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji)==0){
         Head_2->next=(UND*) malloc(sizeof (UND));
         *Head_2->next=*Head_1->next;
         Head_2->next->next=NULL;
         Head_2=Head_2->next;
        }
        Head_1=Head_1->next;
    }
    Head_2->next=NULL;
    return Head_3;
}


GRA* returnsClassHead_2(char*major, int class){
    GRA* Head_1=Head2;
    GRA* Head_2=(GRA *) malloc(sizeof (GRA));
    GRA* Head_3=Head_2;   //防止Head_2丢失
    while(Head_1->next!=NULL){
        if(Head_1->next->Class==class){
            if(strcmp(Head_1->next->major,major)==0) {
                Head_2->next = (GRA *) malloc(sizeof(GRA));
                *Head_2->next = *Head_1->next;
                Head_2->next->next = NULL;
                Head_2 = Head_2->next;
            }
        }
        Head_1=Head_1->next;
    }
    Head_2->next=NULL;
    return Head_3;
}


void sortAllByClass_1(char *banji){
    UND *Head_1 = returnsClassHead_1(banji), *Head___3 = Head_1;
    UND *cur, *tail;
    cur=Head_1;
    tail=NULL;
    while(cur!=tail){
        while(cur->next!=tail){
            if(cur->score[3]<cur->next->score[3]){
                int temp[12];
                for (int i = 0; i < 12; ++i) {
                    temp[i]=cur->score[i];
                }
                for (int i = 0; i < 12; ++i) {
                    cur->score[i]=cur->next->score[i];
                }
                for (int i = 0; i < 12; ++i) {
                    cur->next->score[i]=temp[i];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;

                char temp2[15];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);

                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;

                char temp4[30];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);

                char temp5[10];
                strcpy(temp5,cur->banji);
                strcpy(cur->banji,cur->next->banji);
                strcpy(cur->next->banji,temp5);
            }
            cur=cur->next;
        }
        tail=cur;
        cur=Head_1;
    }
    getstu_1(Head___3);
    //----------------计算排名----------------
//    int ranking=1;  //排名
//    int const1=1;   //计数器
//    cur->next->score[5]=ranking;
//    while(cur->next->next!=NULL){
//        if(cur->next->score[3]!=cur->next->next->score[3]){
//            cur->next->next->score[5]=cur->next->score[5]+const1;
//            const1=1;
//        }else{
//            const1++;
//            cur->next->next->score[5]=cur->next->score[5];
//        }
//        cur=cur->next;
//    }
//    while(cur->next!=NULL){
//        while(Head_1->next->next!=NULL){
//           if(Head_1->next->num==cur->next->num){
//               Head_1->next->score[5]=cur->next->score[5];
//               break;
//           }
//           Head_1=Head_1->next;
//        }
//        cur=cur->next;
//    }
}


void sortAllByClass_2(char*major,int class){
    GRA *Head_1 = returnsClassHead_2(major, class), *Head___3 = Head_1;
    GRA *cur, *tail;
    cur=Head_1;
    tail=NULL;
    while(cur!=tail){
        while(cur->next!=tail){
            if(cur->score[2]<cur->next->score[2]){
                int temp[3];
                for (int i = 0; i < 3; ++i) {
                    temp[i]=cur->score[i];
                }
                for (int i = 0; i < 3; ++i) {
                    cur->score[i]=cur->next->score[i];
                }
                for (int i = 0; i < 3; ++i) {
                    cur->next->score[i]=temp[i];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;
                char temp2[10];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);
                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;
                char temp4[20];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);
                int temp5=cur->Class;
                cur->Class=cur->next->Class;
                cur->next->Class=temp5;
                char temp6[20];
                strcpy(temp6,cur->reserch);
                strcpy(cur->reserch,cur->next->reserch);
                strcpy(cur->next->reserch,temp6);
                char temp7[10];
                strcpy(temp7,cur->tname);
                strcpy(cur->tname,cur->next->tname);
                strcpy(cur->next->tname,temp7);
                int temp8=cur->classrank;
                cur->classrank=cur->next->classrank;
                cur->next->classrank=temp8;
                int temp9=cur->allrank;
                cur->allrank=cur->next->allrank;
                cur->next->allrank=temp9;
            }
            cur=cur->next;
        }
        tail=cur;
        cur=Head_1;
    }
    getstu_2(Head___3);
}

void countAverScore(){
    struct Class_1{
        char banji[10];
        double totalScore;   //总分
        double averScore;    //平均分
        int numStudent;   //人数
    };
    struct Class_2{
        char major[10];
        int Class;
        double totalScore;   //总分
        double averScore;    //平均分
        int numStudent;   //人数
    };
    UND *Head_1 = Head1;
    GRA *Head_2 = Head2;
    int Number1 = numberPeople_1(Head_1);
    int Number2 = numberPeople_2(Head_2);
    struct Class_1 class_1[Number1];
    struct Class_2 class_2[Number2];
    char gaoshu[] = "高数";
    char c[] = "C语言";
    char yingyu[] = "英语";
    char zonghe[] = "综合成绩";
    char lunwen[] = "论文成绩";
    char course[10];
    int i;//课程代码
    int j = 0;//CLass数组使用计数器
    printf("请输入课程查询(输入0返回上一级菜单):");
    scanf("%s", course);
    if (course[0] == '0') {
        system("cls");
        return;
    }
    if (strcmp(course, gaoshu) == 0 || strcmp(course, c) == 0 || strcmp(course, yingyu) == 0) {
        if (strcmp(course, gaoshu) == 0) {
            i = 0;
        }else if(strcmp(course, c) == 0){
            i = 1;
        }else{
            i = 2;
        }
        while(Head_1->next!=NULL){
            for ( int l = 0; l <=j ; ) {
                if (strcmp(Head_1->next->banji, class_1[l].banji) == 0) {
                    class_1[l].totalScore += Head_1->next->score[i];
                    class_1[l].numStudent++;
                    Head_1 = Head_1->next;
                    break;
                } else{
                    if(l==j){
                        strcpy(class_1[j].banji, Head_1->next->banji);
                        class_1[j].totalScore = Head_1->next->score[i];
                        class_1[j].numStudent = 1;
                        j++;
                        Head_1 = Head_1->next;
                        break;
                    } else{
                        l++;
                    }
                }
            }
        }
        for(int x = 0; x < j; x++){
            class_1[x].averScore = class_1[x].totalScore / class_1[x].numStudent;
        }
        switch (i) {
            case 0:
                printf("高数各班平均成绩如下：\n");
                for(int x = 0; x < j; x++){
                    printf("%s\t：%.2lf\n", class_1[x].banji, class_1[x].averScore);
                }
                break;
            case 1:
                printf("C语言各班平均成绩如下：\n");
                for(int x = 0; x < j; x++){
                    printf("%s\t：%.2lf\n", class_1[x].banji, class_1[x].averScore);
                }
                break;
            case 2:
                printf("英语各班平均成绩如下：\n");
                for(int x = 0; x < j; x++){
                    printf("%s\t：%.2lf\n", class_1[x].banji, class_1[x].averScore);
                }
                break;
        }
    }else if(strcmp(course, zonghe) == 0 || strcmp(course, lunwen) == 0){
        if(strcmp(course, zonghe) == 0){
            i = 0;
        }else{
            i = 1;
        }
        while(Head_2->next!=NULL){
            for ( int l = 0; l <=j ; ) {
                if (strcmp(Head_2->next->major, class_2[l].major) == 0 && Head_2->next->Class == class_2[l].Class) {
                    class_2[l].totalScore += Head_2->next->score[i];
                    class_2[l].numStudent++;
                    Head_2 = Head_2->next;
                    break;
                } else{
                    if(l==j){
                        class_2[j].Class = Head_2->next->Class;
                        strcpy(class_2[j].major, Head_2->next->major);
                        class_2[j].totalScore = Head_2->next->score[i];
                        class_2[j].numStudent = 1;
                        j++;
                        Head_2 = Head_2->next;
                        break;
                    } else{
                        l++;
                    }
                }
            }
        }
        for(int x = 0; x < j; x++){
            class_2[x].averScore = class_2[x].totalScore / class_2[x].numStudent;
        }
        switch (i) {
            case 0:
                printf("综合成绩各班平均成绩如下：\n");
                for(int x = 0; x < j; x++){
                    printf("%s专业%d班：%.2lf\n", class_2[x].major, class_2[x].Class, class_2[x].averScore);
                }
                break;
            case 1:
                printf("论文成绩各班平均成绩如下：\n");
                for(int x = 0; x < j; x++){
                    printf("%s专业%d班：%.2lf\n", class_2[x].major, class_2[x].Class, class_2[x].averScore);
                }
                break;
        }
    }else{
        printf("输入有误，请重新输入！\n");
        system("pause");
        system("cls");
        return;
    }
    printf("-----------------------------------------------------\n");
    printf("查询完毕，按任意键返回上级菜单！\n");
    system("pause");
    system("cls");
}

void countByClassScore_1(char* banji, char* course){
    UND*Head_1=Head1;
    int i , k = 0;
    char gaoshu[10] = "高数";
    char c[10] = "C语言";
    char yingyu[10] = "英语";
    if(strcmp(course,gaoshu) == 0){
        i = 0;
    }else if(strcmp(course,c) == 0){
        i = 1;
    }else if(strcmp(course,yingyu) == 0){
        i = 2;
    }else{
        printf("输入错误，请重新输入！\n");
        printf("输入任意键继续\n");
        system("pause");
        system("cls");
        return;
    }
    printf("%s班级%s成绩分布如下：\n",banji,course);
    printf("不及格：");
    infoPrint_1();
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]<60){
                displayData_1(*Head_1->next);
                k++;
            }
        }
        Head_1=Head_1->next;
    }
    if(k == 0){
        printf("无\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("及格：");
    infoPrint_1();
    Head_1=Head1;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]>=60 && Head_1->next->score[i]<70){
                displayData_1(*Head_1->next);
                k++;
            }
        }
        Head_1=Head_1->next;
    }
    if(k == 0){
        printf("无\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("中等：");
    infoPrint_1();
    Head_1=Head1;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]>=70 && Head_1->next->score[i]<80){
                displayData_1(*Head_1->next);
                k++;
            }
        }
        Head_1=Head_1->next;
    }
    if(k == 0){
        printf("无\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("良好：");
    infoPrint_1();
    Head_1=Head1;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]>=80 && Head_1->next->score[i]<90){
                displayData_1(*Head_1->next);
                k++;
            }
        }
        Head_1=Head_1->next;
    }
    if(k == 0){
        printf("无\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("优秀：");
    infoPrint_1();
    Head_1=Head1;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]>=90){
                displayData_1(*Head_1->next);
                k++;
            }
        }
        Head_1=Head_1->next;
    }
    if(k == 0){
        printf("无\n");
    }
    printf("-----------------------------------------------------\n");
    printf("查询完毕\n");
    system("pause");
    system("cls");
}

void countByClassScore_2(char* major, char* course, int class){
    GRA *Head_2 = Head2;
    int k = 0, i;
    char zonghe[20] = "综合成绩";
    char lunwen[20] = "论文成绩";
    if(strcmp(course,zonghe) == 0){
        i = 0;
    }else if(strcmp(course,lunwen) == 0){
        i = 1;
    } else{
        printf("输入有误，请重新输入！\n");
        system("pause");
        system("cls");
        return;
    }
    printf("%s专业%d班%s成绩分布如下：\n",major,class,course);
    printf("不及格：");
    infoPrint_2();
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]<60){
                displayData_2(*Head_2->next);
                k=1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k == 0){
        printf("无\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("及格：");
    infoPrint_2();
    Head_2=Head2;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]>=60 && Head_2->next->score[i]<70){
                displayData_2(*Head_2->next);
                k=1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k == 0){
        printf("无\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("中等：");
    infoPrint_2();
    Head_2=Head2;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]>=70 && Head_2->next->score[i]<80){
                displayData_2(*Head_2->next);
                k=1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k == 0){
        printf("无\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("良好：");
    infoPrint_2();
    Head_2=Head2;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]>=80 && Head_2->next->score[i]<90){
                displayData_2(*Head_2->next);
                k = 1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k == 0){
        printf("无\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("优秀：");
    infoPrint_2();
    Head_2=Head2;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]>=90){
                displayData_2(*Head_2->next);
                k = 1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k == 0){
        printf("无\n");
    }
    printf("-----------------------------------------------------\n");
    printf("查询完毕\n");
    system("pause");
    system("cls");
}