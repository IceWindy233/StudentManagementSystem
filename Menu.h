#ifndef _MENU_
#define _MENU_
#include <stdio.h>
#include <stdlib.h>
#endif
#include "Function.h"
void Main_Menu();
void Benke_Menu();
void Yanjiu_Menu();
void Main_Menu()
{
    setbuf(stdout,NULL);
    //--------------测试用--------------
    readFromFile();
    char num_Name[12];
    UND* Head_1=Head1;
    UND* a,*b,*c;
    GRA* Head_2=Head2;
    printf("-----输入----\n");
    a=scanf_1();
    b=scanf_1();
    c=scanf_1();
    scanf("%s",num_Name);
    addNode_1(a);
    addNode_1(b);
    addNode_1(c);
    addNode_1(b);
    exchangeData_1(a,b);
    printf("1------------\n");
    displayData_1(*Head_1->next);
    printf("2------------\n");
    Head_1=Head_1->next;
    displayData_1(*Head_1->next);
    printf("3------------\n");
    Head_1=Head_1->next;
    displayData_1(*Head_1->next);
    //searchstu(num_Name);
    sayeToFile();
    //--------------------------------

    system("cls");
    while(1){
        int choice;
        printf("*************************** 菜单 ***************************\n");
        printf("_1_本科生成绩管理系统\n");
        printf("_2_研究生成绩管理系统\n");
        printf("_0_退出\n");
        printf("选择系统:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                system("cls");
                Benke_Menu();
                break;
            case 2:
                system("cls");
                Yanjiu_Menu();
                break;
            case 0:
                exit(0);
            default:
                printf("输入错误，请重新输入\n");
                system("pause");
                system("cls");
                break;
        }
    }
}

void Benke_Menu()
{
    while(1){
        int choice;
        printf("********************本科生成绩管理系统********************\n");
        printf("_1_进行基本资料数据维护管理\n");
        //增加学生基本资料，删除学生基本资料，修改学生基本资料，查询基本资料
        printf("_2_进行成绩数据管理\n");
        //增加学生成绩，删除学生成绩，修改学生成绩，查询学生成绩
        printf("_3_进行成绩排序\n");
        //全校本科生按总成绩高到低排名显示，某个班级本科生按总成绩高到低排名显示
        printf("_4_数据统计\n");
        //统计并显示某门课每个班的平均成绩, 某个班中统计并显示某门课程不同等级学生的人数
        printf("_5_查询\n");
        //报表输出全部学生信息，报表输出班级全部学生信息，查询学生信息，查询某班某门科目不及格学生信息
        printf("_0_返回上级\n");
        printf("输入序号:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                break;
            case 2:
                system("cls");
                break;
            case 3:
                system("cls");
                break;
            case 4:
                system("cls");
                break;
            case 5:
                system("cls");
                break;
            case 0:
                Main_Menu();
                break;
            default:
                printf("输入错误，请重新输入\n");
                system("pause");
                system("cls");
                break;
        }
    }
}

void Yanjiu_Menu(){
    while(1){
        int choice;
        printf("********************研究生成绩管理系统********************\n");
        printf("_1_进行基本资料数据维护管理\n");
        //增加学生基本资料，删除学生基本资料，修改学生基本资料，查询基本资料
        printf("_2_进行成绩数据管理\n");
        //增加学生成绩，删除学生成绩，修改学生成绩，查询学生成绩
        printf("_3_进行成绩排序\n");
        //全校研究生按总成绩高到低排名显示，某个班级研究生按总成绩高到低排名显示
        printf("_4_数据统计\n");
        //统计并显示某门课每个班的平均成绩, 某个班中统计并显示某门课程不同等级学生的人数
        printf("_5_查询\n");
        //报表输出全部学生信息，报表输出班级全部学生信息，查询学生信息，查询某班某门科目不及格学生信息
        printf("_0_返回上级\n");
        printf("输入序号:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                break;
            case 2:
                system("cls");
                break;
            case 0:
                Main_Menu();
                break;
            default:
                printf("输入错误，请重新输入\n");
                system("pause");
                system("cls");
                break;
        }
    }
}
