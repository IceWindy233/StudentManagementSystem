#ifndef _MENU_
#define _MENU_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#endif
#include "Function.h"
void Main_Menu();//һ���˵�
void MenuPrint();
void Benke_Menu();
void Yanjiu_Menu();//�����˵�
void baseDataMenuPrint();
void Benke_baseDataManage_Menu();
void Yanjiu_baseDataManage_Menu();//�������ݹ���˵�
void scoreMenuPrint();
void Benke_scoreManage_Menu();
void Yanjiu_scoreManage_Menu();//�ɼ�����˵�
void sortMenuPrint();
void Benke_sort_Menu();
void Yanjiu_sort_Menu();//�ɼ�����˵�
void statisticsMenuPrint();
void Benke_statistic_Menu();
void Yanjiu_statistic_Menu();//����ͳ�Ʋ˵�
void searchMenuPrint();
void Benke_search_Menu();
void Yanjiu_search_Menu();//��ѯ�˵�



void Main_Menu(){
    //--------------������--------------
    char num_Name[12];
    UND* Head_1=Head1;
    UND* a,*b,*c,*d;
    GRA* k;
    GRA* Head_2=Head2;
    char banji[10];
    char name[10];
    int course;
//    printf("-----����----\n");
//    a=scanf_1();
//    b=scanf_1();
//    c=scanf_1();
//    //d=scanf_1();
//    //scanf("%s",num_Name);
//    addNode_1(a);
//    addNode_1(b);
//    addNode_1(c);
    //addNode_1(d);
    //exchangeData_1(a,b);
    //printf("------------\n");
    //Head_1=Head_1->next;
    //displayData_1(*Head_1->next);
    //searchstu(num_Name);
    /*printf("------------\n");
    while (Head_1->next!=NULL){
        displayData_1(*Head_1->next);
        printf("------------\n");
        Head_1=Head_1->next;
    }*/
    //modifyStudent();
//    printf("-----����----\n");
    for(int i=0;i<20;i++){
        a=scanf_1();
        addNode_1(a);
    }
    getPage_1();
    //printf("-----���뱾�����༶----\n");
    /*scanf("%s",banji);
    searchByClass_1(banji);*/
    //printf("-----����ѧ������----\n");
    /*scanf("%s",name);
    searchByName(name);*/
    /*printf("-----����༶�Ϳγ̺�----\n");
    scanf("%s%d",banji,&course);
    searnraiidyClassCourse_1( banji, course);*/
    //sortAllByld();
//    printf("--------1-------\n");
//    ReturnsModifications();
//    //printf("---------------");
//    //SwapNodes_1(Head_1->next,Head_1->next->next);
//    sortAll_1();
//    //sayeToFile();
//    printf("--------2-------\n");
//    ReturnsModifications();
    //exit(0);
    //--------------------------------

    system("cls");
    while(1){
        char choice;
        printf("*************************** �˵� ***************************\n");
        printf("_1_�������ɼ�����ϵͳ\n");
        printf("_2_�о����ɼ�����ϵͳ\n");
        printf("_0_�˳�\n");
        printf("ѡ��ϵͳ:");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
            }
        }else{
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void MenuPrint(){
    printf("_1_���л�����������ά������\n");
    //����ѧ���������ϣ�ɾ��ѧ���������ϣ��޸�ѧ���������ϣ���ѯ��������
    printf("_2_���гɼ����ݹ���\n");
    //����ѧ���ɼ���ɾ��ѧ���ɼ����޸�ѧ���ɼ�����ѯѧ���ɼ�
    printf("_3_���гɼ�����\n");
    //ȫУ���������ܳɼ��ߵ���������ʾ��ĳ���༶���������ܳɼ��ߵ���������ʾ
    printf("_4_����ͳ��\n");
    //ͳ�Ʋ���ʾĳ�ſ�ÿ�����ƽ���ɼ�, ĳ������ͳ�Ʋ���ʾĳ�ſγ̲�ͬ�ȼ�ѧ��������
    printf("_5_��ѯ\n");
    //�������ȫ��ѧ����Ϣ����������༶ȫ��ѧ����Ϣ����ѯѧ����Ϣ����ѯĳ��ĳ�ſ�Ŀ������ѧ����Ϣ
    printf("_0_�����ϼ�\n");
    printf("�������:");
}

void Benke_Menu(){
    while(1){
        char choice;
        printf("********************�������ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_Menu(){
    while(1){
        char choice;
        printf("********************�о����ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void baseDataMenuPrint(){
    printf("_1_����ѧ����������\n");
    printf("_2_ɾ��ѧ����������\n");
    printf("_3_�޸�ѧ����������\n");
    printf("_4_��ѯ��������\n");
    printf("_0_�����ϼ�\n");
    printf("������ţ�");
}

void Benke_baseDataManage_Menu(){
    while(1){
        char choice;
        printf("********************�������ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_baseDataManage_Menu(){
    while(1){
        char choice;
        printf("********************�о����ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void scoreMenuPrint(){
    printf("_1_����ѧ���ɼ�\n");
    printf("_2_ɾ��ѧ���ɼ�\n");
    printf("_3_�޸�ѧ���ɼ�\n");
    printf("_4_��ѯѧ���ɼ�\n");
    printf("_0_�����ϼ�\n");
    printf("������ţ�");
}

void Benke_scoreManage_Menu(){
    while(1){
        char choice;
        printf("********************�������ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_scoreManage_Menu(){
    while(1){
        char choice;
        printf("********************�о����ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void sortMenuPrint(){
    printf("_1_ȫУ���ܳɼ��ߵ���������ʾ\n");
    printf("_2_�༶���ܳɼ��ߵ���������ʾ\n");
    printf("_0_�����ϼ�\n");
    printf("������ţ�");
}

void Benke_sort_Menu(){
    while(1){
        char choice;
        printf("********************�������ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_sort_Menu(){
    while(1){
        char choice;
        printf("********************�о����ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void statisticsMenuPrint(){
    printf("_1_ͳ��ĳ�ſ�ÿ�����ƽ���ɼ�\n");
    printf("_2_ͳ��ĳ������ĳ�ſγ̲�ͬ�ȼ�ѧ��������\n");
    printf("_0_�����ϼ�\n");
    printf("������ţ�");
}

void Benke_statistic_Menu(){
    while(1){
        char choice;
        printf("********************�������ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_statistic_Menu(){
    while(1){
        char choice;
        printf("********************�о����ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void searchMenuPrint(){
    printf("_1_��ѯȫ��ѧ����Ϣ\n");
    printf("_2_��ѯĳ���༶��ȫ��ѧ����Ϣ\n");
    printf("_3_��ѯĳ��ѧ����Ϣ\n");
    printf("_4_��ѯĳ��ĳ��Ŀ������ѧ����Ϣ\n");
    printf("_0_�����ϼ�\n");
    printf("������ţ�");
}

void Benke_search_Menu(){
    while(1){
        char choice;
        printf("********************�������ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void Yanjiu_search_Menu(){
    while(1){
        char choice;
        printf("********************�о����ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
                    break;
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}