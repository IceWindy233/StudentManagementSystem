#ifndef _STDIO_H_
#define _STDIO_H_
#include <stdio.h>
#endif
#ifndef _STDLIB_H_
#define _STDLIB_H_
#include <stdlib.h>
#endif
void Main_Menu();
void Benke_Menu();
void Yanjiu_Menu();

void Main_Menu()
{
    setbuf(stdout,NULL);
    system("cls");
    while(1){
        int choice;
        printf("*************************** 菜单 ***************************\n");
        printf("_1_本科生成绩管理系统\n");
        printf("_2_研究生成绩管理系统\n");
        printf("_3_退出\n");
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
            case 3:
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
        printf("_1_进行基本资料数据的维护管理\n");
        printf("_2_进行成绩数据的维护管理\n");
        printf("_3_返回上级\n");
        printf("输入序号:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
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
        printf("_1_进行基本资料数据的维护管理\n");
        printf("_2_进行成绩数据的维护管理\n");
        printf("_3_返回上级\n");
        printf("输入序号:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
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