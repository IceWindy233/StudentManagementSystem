#ifndef _MENU_
#define _MENU_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#endif
#include "Function.h"
//一二级菜单
void Main_Menu();
void MenuPrint();
void Benke_Menu();
void Yanjiu_Menu();
//基本数据管理菜单
void baseDataMenuPrint();//避免重复菜单打印代码
void deleteDate_Menu();//删除基本数据
void searchData_Menu();//查询基本数据
void Benke_baseDataManage_Menu();//本科生基本数据管理菜单
void Benke_addData_Menu();//本科生信息数据录入
void Yanjiu_baseDataManage_Menu();//研究生基本数据管理菜单
void Yanjiu_addData_Menu();//研究生信息数据录入
//成绩管理菜单
void scoreMenuPrint();//避免重复菜单打印代码
void deleteScore_Menu();//删除成绩
void Benke_scoreManage_Menu();//本科生成绩管理菜单
void Yanjiu_scoreManage_Menu();//研究生成绩管理菜单
//成绩排序菜单
void sortMenuPrint();//避免重复菜单打印代码
void Benke_sort_Menu();//本科成绩排序菜单
void Benke_sort_ByClass_Menu();//本科成绩按班级排序菜单
void Yanjiu_sort_Menu();//研究生成绩排序菜单
void Yanjiu_sort_ByClass_Menu();//研究生成绩按班级排序菜单
//数据统计菜单
void statisticsMenuPrint();//避免重复菜单打印代码
void Benke_statistic_Menu();//本科生数据统计菜单
void Benke_countByClass_Menu();//本科生按班级统计菜单
void Yanjiu_statistic_Menu();//研究生数据统计菜单
void Yanjiu_countByClass_Menu();//研究生按班级统计菜单
//查询菜单
void searchMenuPrint();//避免重复菜单打印代码
void Benke_search_Menu();//本科生查询菜单
void Benke_search_class_Menu();//查询某个班级的全部学生信息
void Benke_search_name_Menu();//查询某个学生信息
void Benke_search_fail_Menu();//查询某班某科目不及格学生信息
void Yanjiu_search_Menu();//研究生查询菜单
void Yanjiu_search_class_Menu();//查询某个班级的全部学生信息
void Yanjiu_search_name_Menu();//查询某个学生信息
void Yanjiu_search_fail_Menu();//查询某班某科目不及格学生信息

void Main_Menu(){
    while(1){
        system("cls");
        char choice[10];
        printf("*************************** 菜单 ***************************\n");
        printf("_1_本科生成绩管理系统\n");
        printf("_2_研究生成绩管理系统\n");
        printf("_0_退出\n");
        printf("选择系统:");
        scanf("%s",choice);
        if(isdigit(choice[0])){
            switch(choice[0]){
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
        char choice[10];
        printf("********************本科生成绩管理系统********************\n");
        MenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
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
                    return;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
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
        char choice[10];
        printf("********************研究生成绩管理系统********************\n");
        MenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
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
                    return;
                default:
                    printf("输入错误，请重新输入\n");
                    system("pause");
                    system("cls");
            }
        } else {
            printf("输入错误，请重新输入\n");
            system("pause");
            system("cls");
        }
    }
}

void baseDataMenuPrint(){
    printf("_1_增加学生资料\n");
    printf("_2_删除学生资料\n");
    printf("_3_修改学生基本资料\n");
    printf("_4_查询学生资料\n");
    printf("_0_返回上级\n");
    printf("输入序号：");
}

void Benke_baseDataManage_Menu(){
    while(1){
        char choice[10];
        printf("********************本科生成绩管理系统********************\n");
        baseDataMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    Benke_addData_Menu();
                    break;
                case '2':
                    system("cls");
                    deleteDate_Menu();
                    break;
                case '3':
                    system("cls");
                    modifyStudent();
                    break;
                case '4':
                    system("cls");
                    searchData_Menu();
                    break;
                case '0':
                    system("cls");
                    return;
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
        char choice[10];
        printf("********************研究生成绩管理系统********************\n");
        baseDataMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    Yanjiu_addData_Menu();
                    break;
                case '2':
                    system("cls");
                    deleteDate_Menu();
                    break;
                case '3':
                    system("cls");
                    modifyStudent();
                    break;
                case '4':
                    system("cls");
                    searchData_Menu();
                    break;
                case '0':
                    system("cls");
                    return;
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
        char choice[10];
        printf("********************本科生成绩管理系统********************\n");
        scoreMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    Benke_addData_Menu();
                    break;
                case '2':
                    system("cls");
                    deleteScore_Menu();
                    break;
                case '3':
                    system("cls");
                    modifyScore();
                    break;
                case '4':
                    system("cls");
                    searchData_Menu();
                    break;
                case '0':
                    system("cls");
                    return;
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
        char choice[10];
        printf("********************研究生成绩管理系统********************\n");
        scoreMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    Yanjiu_addData_Menu();
                    break;
                case '2':
                    system("cls");
                    deleteScore_Menu();
                    break;
                case '3':
                    system("cls");
                    modifyScore();
                    break;
                case '4':
                    system("cls");
                    searchData_Menu();
                    break;
                case '0':
                    system("cls");
                    return;
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
        char choice[10];
        printf("********************本科生成绩管理系统********************\n");
        sortMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    sortAllAndShow_1();
                    break;
                case '2':
                    system("cls");
                    Benke_sort_ByClass_Menu();
                    break;
                case '0':
                    system("cls");
                    return;
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
        char choice[10];
        printf("********************研究生成绩管理系统********************\n");
        sortMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    sortAllAndShow_2();
                    break;
                case '2':
                    system("cls");
                    Yanjiu_sort_ByClass_Menu();
                    break;
                case '0':
                    system("cls");
                    return;
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
        char choice[10];
        printf("********************本科生成绩管理系统********************\n");
        statisticsMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    countAverScore();
                    break;
                case '2':
                    system("cls");
                    Benke_countByClass_Menu();
                    break;
                case '0':
                    system("cls");
                    return;
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
        char choice[10];
        printf("********************研究生成绩管理系统********************\n");
        statisticsMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    countAverScore();
                    break;
                case '2':
                    system("cls");
                    Yanjiu_countByClass_Menu();
                    break;
                case '0':
                    system("cls");
                    return;
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
        char choice[10];
        printf("********************本科生成绩管理系统********************\n");
        searchMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    getPage_1();
                    break;
                case '2':
                    system("cls");
                    Benke_search_class_Menu();
                    break;
                case '3':
                    system("cls");
                    Benke_search_name_Menu();
                    break;
                case '4':
                    system("cls");
                    Benke_search_fail_Menu();
                    break;
                case '0':
                    system("cls");
                    return;
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
        char choice[10];
        printf("********************研究生成绩管理系统********************\n");
        searchMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    getPage_2();
                    break;
                case '2':
                    system("cls");
                    Yanjiu_search_class_Menu();
                    break;
                case '3':
                    system("cls");
                    Yanjiu_search_name_Menu();
                    break;
                case '4':
                    system("cls");
                    Yanjiu_search_fail_Menu();
                    break;
                case '0':
                    system("cls");
                    return;
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


void Benke_search_class_Menu(){
    while (1) {
        char choice[3];
        printf("********************本科生班级成绩查询********************\n");
        printf("请输入班级(输入0返回上级)：");
        scanf("%s", choice);
        if(choice[0] == '0'){
            system("cls");
            return;
        } else {
            system("cls");
            infoPrint_1();
            searchByClass_1(choice);
        }
    }
}

void Yanjiu_search_class_Menu(){
    while (1) {
        char major[3];
        int choice;
        printf("********************研究生班级成绩查询********************\n");
        printf("请输入专业(输入0返回上级)：");
        scanf("%s", major);
        if(major[0] == '0'){
            system("cls");
            return;
        }else{
            printf("请输入班级(输入0返回上级)：");
            scanf("%d", &choice);
            if(choice == 0){
                system("cls");
                return;
            }else{
                system("cls");
                infoPrint_2();
                searchByClass_2(major, choice);
            }
        }
    }
}

void Benke_search_name_Menu(){
    while (1) {
        char name[20];
        printf("*********************本科生成绩查询*********************\n");
        printf("请输入姓名(输入0返回上级)：");
        scanf("%s", name);
        if(name[0] == '0'){
            system("cls");
            return;
        }else{
            system("cls");
            infoPrint_1();
            searchByName(name);
        }
    }
}

void Yanjiu_search_name_Menu(){
    while (1) {
        char name[20];
        printf("*********************研究生成绩查询*********************\n");
        printf("请输入姓名(输入0返回上级)：");
        scanf("%s", name);
        if(name[0] == '0'){
            system("cls");
            return;
        }else{
            system("cls");
            infoPrint_2();
            searchByName(name);
        }
    }
}

void Benke_search_fail_Menu(){
    while (1) {
        char banji[10];
        char course[10];
        printf("*********************本科生成绩查询*********************\n");
        printf("请输入班级(输入0返回上级)：");
        scanf("%s", banji);
        if(banji[0] == '0'){
            system("cls");
            return;
        }else{
            printf("请输入课程(输入0返回上级)：");
            scanf("%s", course);
            if(course[0] == '0'){
                system("cls");
                return;
            }else{
                system("cls");
                infoPrint_1();
                searnraiidyClassCourse_1(banji, course);
            }
        }
    }
}

void Yanjiu_search_fail_Menu(){
    while (1) {
        char major[3];
        char course[20];
        int class;
        printf("*********************研究生成绩查询*********************\n");
        printf("请输入专业(输入0返回上级)：");
        scanf("%s", major);
        if(major[0] == '0'){
            system("cls");
            return;
        }else{
            printf("请输入班级(输入0返回上级)：");
            scanf("%d", &class);
            if(class == 0){
                system("cls");
                return;
            }else{
                printf("请输入课程(输入0返回上级)：");
                scanf("%s", course);
                if(course[0] == '0'){
                    system("cls");
                    return;
                }else{
                    system("cls");
                    infoPrint_2();
                    searnraiidyClassCourse_2(class, major, course);
                }
            }
        }
    }
}

void Benke_sort_ByClass_Menu(){
    while (1) {
        char banji[10];
        printf("********************本科生成绩排序********************\n");
        printf("请输入班级(输入0返回上级)：");
        scanf("%s", banji);
        if(banji[0] == '0'){
            system("cls");
            return;
        }else{
            system("cls");
            infoPrint_1();
            sortAllByClass_1(banji);
        }
    }
}

void Yanjiu_sort_ByClass_Menu(){
    while(1){
        char major[20];
        int class;
        printf("********************研究生成绩排序********************\n");
        printf("请输入专业(输入0返回上级)：");
        scanf("%s", major);
        if(major[0] == '0'){
            system("cls");
            return;
        }else{
            printf("请输入班级(输入0返回上级)：");
            scanf("%d", &class);
            if(class == 0){
                system("cls");
                return;
            }else{
                system("cls");
                infoPrint_2();
                sortAllByClass_2(major, class);
            }
        }
    }
}

void Benke_addData_Menu(){
    while(1){
        UND* stu;
        int i;
        printf("********************本科生成绩录入********************\n");
        printf("请输入需要录入的个数(输入0返回上级)：");
        scanf("%d", &i);
        if(i == 0){
            system("cls");
            return;
        }else{
            printf("请输入姓名 性别(0代表男，1代表女) 专业 班级 高数成绩 C语言成绩 英语成绩:\n");
            for (int j = 0; j < i; j++) {
                stu = scanf_1();
                addNode_1(stu);
            }
            printf("录入成功！\n");
            system("pause");
            system("cls");
            return;
        }
    }
}

void Yanjiu_addData_Menu(){
    while(1){
        GRA * stu;
        int i;
        printf("********************研究生成绩录入********************\n");
        printf("请输入需要录入的个数(输入0返回上级)：");
        scanf("%d", &i);
        if(i == 0){
            system("cls");
            return;
        }else{
            printf("请输入请输入姓名 性别(0代表男，1代表女) 专业 班级 研究方向 综合成绩 论文成绩:\n");
            for (int j = 0; j < i; j++) {
                stu = scanf_2();
                addNode_2(stu);
            }
            printf("录入成功！\n");
            system("pause");
            system("cls");
            return;
        }
    }
}

void deleteDate_Menu(){
    int num=0;
    while(1){
        printf("********************学生数据删除********************\n");
        printf("请输入需要删除的学生的学号(输入0返回上级)：");
        scanf("%d", &num);
        if(num == 0){
            system("cls");
            return;
        }else{
            printf("注意：你接下来的操作将会删除该学生的所有数据，请谨慎操作！\n");
            printf("请输入1继续，输入0返回上级菜单：");
            char i[10];
            scanf("%s", i);
            if(strcmp(i, "0") == 0){
                system("cls");
                return;
            }else{
                deleteStudentByild(num);
                system("pause");
                system("cls");
                return;
            }
        }

    }
}

void deleteScore_Menu(){
    int num=0 , k = 0;
    UND* Head_1=Head1;
    GRA* Head_2=Head2;
    while(1){
        printf("********************学生成绩删除********************\n");
        printf("请输入需要删除成绩的学生的学号(输入0返回上级)：");
        scanf("%d", &num);
        if(num == 0){
            system("cls");
            return;
        }else{
            while ( Head_1->next!= NULL){
                if (Head_1->next->num == num){
                    for(int i=0;i<12;i++){
                        Head_1->next->score[i]=-1;
                    }
                    printf("已删除学号为%d的学生的所有成绩!\n", num);
                    k=1;
                    break;
                }
                Head_1=Head_1->next;
            }
            if(k==0){
                while ( Head_2->next!= NULL){
                    if (Head_2->next->num == num){
                        for(int i=0;i<3;i++){
                            Head_2->next->score[i]=-1;
                        }
                        printf("已删除学号为%d的学生的所有成绩!\n", num);
                        k=1;
                        break;
                    }
                    Head_2=Head_2->next;
                }
            }

        }
        if (k == 0){
            printf("查无此学生!\n");
            break;
        } else{
            break;
        }
    }
        system("pause");
        system("cls");
}


void searchData_Menu(){
    while(1){
        char num_Name[20];
        printf("********************学生数据查询********************\n");
        printf("请输入需要查询的学生的学号或名字(输入0返回上级)：");
        scanf("%s", num_Name);
        if(num_Name[0] == '0'){
            system("cls");
            return;
        }else{
            searchstu(num_Name);
            printf("查询已完成！\n");
            system("pause");
            system("cls");
        }
    }
}

void Benke_countByClass_Menu(){
    while(1){
        char banji[10];
        char course[10];
        printf("********************班级成绩统计********************\n");
        printf("请输入需要统计的班级(输入0返回上级)：");
        scanf("%s", banji);
        if(banji[0] == '0'){
            system("cls");
            return;
        }else{
            printf("请输入需要统计的课程(输入0返回上级)：");
            scanf("%s", course);
            if(course[0] == '0'){
                system("cls");
                return;
            }else{
                countByClassScore_1(banji, course);
            }
        }
    }
}

void Yanjiu_countByClass_Menu(){
    while (1){
        char major[10];
        char course[10];
        int class;
        printf("********************班级成绩统计********************\n");
        printf("请输入需要统计的专业(输入0返回上级)：");
        scanf("%s", major);
        if(major[0] == '0'){
            system("cls");
            return;
        }else{
            printf("请输入需要统计的班级(输入0返回上级)：");
            scanf("%d", &class);
            if(course[0] == '0'){
                system("cls");
                return;
            }else{
                printf("请输入需要统计的课程(输入0返回上级)：");
                scanf("%s", course);
                if(course[0] == '0'){
                    system("cls");
                    return;
                }else{
                    countByClassScore_2(major, course, class);
                }
            }
        }
    }
}