#ifndef _MENU_
#define _MENU_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#endif
#include "Function.h"
void Main_Menu();//一级菜单
void MenuPrint();
void Benke_Menu();
void Yanjiu_Menu();//二级菜单
void baseDataMenuPrint();
void Benke_baseDataManage_Menu();
void Yanjiu_baseDataManage_Menu();//基本数据管理菜单
void scoreMenuPrint();
void Benke_scoreManage_Menu();
void Yanjiu_scoreManage_Menu();//成绩管理菜单
void sortMenuPrint();
void Benke_sort_Menu();
void Yanjiu_sort_Menu();//成绩排序菜单
void statisticsMenuPrint();
void Benke_statistic_Menu();
void Yanjiu_statistic_Menu();//数据统计菜单
void searchMenuPrint();
void Benke_search_Menu();
void Yanjiu_search_Menu();//查询菜单



void Main_Menu(){
    //--------------测试用--------------
    char num_Name[12];
    UND* Head_1=Head1;
    UND* a,*b,*c,*d;
    GRA* Head_2=Head2;
    char banji[10];
    char name[10];
    int course;

    /*printf("-----输入----\n");
    a=scanf_1();
    b=scanf_1();
    c=scanf_1();
    //d=scanf_1();
    //scanf("%s",num_Name);
    addNode_1(a);
    addNode_1(b);
    addNode_1(c);
    //addNode_1(d);
    //exchangeData_1(a,b);
    //printf("------------\n");
    //Head_1=Head_1->next;
    //displayData_1(*Head_1->next);
    //searchstu(num_Name);
    */
    /*printf("------------\n");
    while (Head_1->next!=NULL){
        displayData_1(*Head_1->next);
        printf("------------\n");
        Head_1=Head_1->next;
    }*/
    //modifyStudent();
//    printf("-----输入----\n");
//    for(int i=0;i<3;i++){
//        a=scanf_1();
//        addNode_1(a);
//    }
    //getPage_1();
    //printf("-----输入本科生班级----\n");
    /*scanf("%s",banji);
    searchByClass_1(banji);*/
    //printf("-----输入学生名字----\n");
    /*scanf("%s",name);
    searchByName(name);*/
    /*printf("-----输入班级和课程号----\n");
    scanf("%s%d",banji,&course);
    searnraiidyClassCourse_1( banji, course);*/
    //sortAllByld();
    printf("--------1-------\n");
    ReturnsModifications();
    //printf("---------------");
    //SwapNodes_1(Head_1->next,Head_1->next->next);
    sortAll_1();
    //sayeToFile();
    printf("--------2-------\n");
    ReturnsModifications();
    //exit(0);
    //--------------------------------

    system("cls");
    while(1){
        char choice;
        printf("*************************** 菜单 ***************************\n");
        printf("_1_本科生成绩管理系统\n");
        printf("_2_研究生成绩管理系统\n");
        printf("_0_退出\n");
        printf("选择系统:");
        scanf("%s",&choice);
        if(isdigit(choice)){
            switch(choice){
                case '1':
                    system("cls");
                    Benke_Menu();
                    break;
                case '2':
                    system("cls");
                    Yanjiu_Menu();
                    break;
                case '0':
                    sayeToFile();
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
            }
        }else{
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void MenuPrint(){
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
}

void Benke_Menu(){
    while(1){
        char choice;
        printf("********************本科生成绩管理系统********************\n");
        MenuPrint();
        scanf("%s", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    Benke_baseDataManage_Menu();
                    break;
                case '2':
                    system("cls");
                    Benke_scoreManage_Menu();
                    break;
                case '3':
                    system("cls");
                    Benke_sort_Menu();
                    break;
                case '4':
                    system("cls");
                    Benke_statistic_Menu();
                    break;
                case '5':
                    system("cls");
                    Benke_search_Menu();
                    break;
                case '0':
                    Main_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_Menu(){
    while(1){
        char choice;
        printf("********************研究生成绩管理系统********************\n");
        MenuPrint();
        scanf("%s", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    Yanjiu_baseDataManage_Menu();
                    break;
                case '2':
                    system("cls");
                    Yanjiu_scoreManage_Menu();
                    break;
                case '3':
                    system("cls");
                    Yanjiu_sort_Menu();
                    break;
                case '4':
                    system("cls");
                    Yanjiu_statistic_Menu();
                    break;
                case '5':
                    system("cls");
                    Yanjiu_search_Menu();
                    break;
                case '0':
                    Main_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void baseDataMenuPrint(){
    printf("_1_增加学生基本资料\n");
    printf("_2_删除学生基本资料\n");
    printf("_3_修改学生基本资料\n");
    printf("_4_查询基本资料\n");
    printf("_0_返回上级\n");
    printf("输入序号：");
}

void Benke_baseDataManage_Menu(){
    while(1){
        char choice;
        printf("********************本科生成绩管理系统********************\n");
        baseDataMenuPrint();
        scanf("%s", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    break;
                case '2':
                    system("cls");
                    break;
                case '3':
                    system("cls");
                    break;
                case '4':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    Benke_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_baseDataManage_Menu(){
    while(1){
        char choice;
        printf("********************研究生成绩管理系统********************\n");
        baseDataMenuPrint();
        scanf("%s", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    break;
                case '2':
                    system("cls");
                    break;
                case '3':
                    system("cls");
                    break;
                case '4':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    Yanjiu_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void scoreMenuPrint(){
    printf("_1_增加学生成绩\n");
    printf("_2_删除学生成绩\n");
    printf("_3_修改学生成绩\n");
    printf("_4_查询学生成绩\n");
    printf("_0_返回上级\n");
    printf("输入序号：");
}

void Benke_scoreManage_Menu(){
    while(1){
        char choice;
        printf("********************本科生成绩管理系统********************\n");
        scoreMenuPrint();
        scanf("%s", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    break;
                case '2':
                    system("cls");
                    break;
                case '3':
                    system("cls");
                    break;
                case '4':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    Benke_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_scoreManage_Menu(){
    while(1){
        char choice;
        printf("********************研究生成绩管理系统********************\n");
        scoreMenuPrint();
        scanf("%s", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    break;
                case '2':
                    system("cls");
                    break;
                case '3':
                    system("cls");
                    break;
                case '4':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    Benke_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void sortMenuPrint(){
    printf("_1_全校按总成绩高到低排名显示\n");
    printf("_2_班级按总成绩高到低排名显示\n");
    printf("_0_返回上级\n");
    printf("输入序号：");
}

void Benke_sort_Menu(){
    while(1){
        char choice;
        printf("********************本科生成绩管理系统********************\n");
        sortMenuPrint();
        scanf("%s", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    break;
                case '2':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    Benke_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_sort_Menu(){
    while(1){
        char choice;
        printf("********************研究生成绩管理系统********************\n");
        sortMenuPrint();
        scanf("%s", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    break;
                case '2':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    Benke_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void statisticsMenuPrint(){
    printf("_1_统计某门课每个班的平均成绩\n");
    printf("_2_统计某个班内某门课程不同等级学生的人数\n");
    printf("_0_返回上级\n");
    printf("输入序号：");
}

void Benke_statistic_Menu(){
    while(1){
        char choice;
        printf("********************本科生成绩管理系统********************\n");
        statisticsMenuPrint();
        scanf("%d", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    break;
                case '2':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    Benke_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_statistic_Menu(){
    while(1){
        char choice;
        printf("********************研究生成绩管理系统********************\n");
        statisticsMenuPrint();
        scanf("%s", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    break;
                case '2':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    Benke_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void searchMenuPrint(){
    printf("_1_查询全部学生信息\n");
    printf("_2_查询某个班级的全部学生信息\n");
    printf("_3_查询某个学生信息\n");
    printf("_4_查询某班某科目不及格学生信息\n");
    printf("_0_返回上级\n");
    printf("输入序号：");
}

void Benke_search_Menu(){
    while(1){
        char choice;
        printf("********************本科生成绩管理系统********************\n");
        searchMenuPrint();
        scanf("%s", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    getPage_1();
                    break;
                case '2':
                    system("cls");
                    break;
                case '3':
                    system("cls");
                    break;
                case '4':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    Benke_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_search_Menu(){
    while(1){
        char choice;
        printf("********************研究生成绩管理系统********************\n");
        searchMenuPrint();
        scanf("%s", &choice);
        if (isdigit(choice)) {
            switch (choice) {
                case '1':
                    system("cls");
                    getPage_2();
                    break;
                case '2':
                    system("cls");
                    break;
                case '3':
                    system("cls");
                    break;
                case '4':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    Benke_Menu();
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}