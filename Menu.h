#ifndef _MENU_
#define _MENU_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#endif
#include "Function.h"
//һ�����˵�
void Main_Menu();
void MenuPrint();
void Benke_Menu();
void Yanjiu_Menu();
//�������ݹ���˵�
void baseDataMenuPrint();
void Benke_baseDataManage_Menu();
void Yanjiu_baseDataManage_Menu();
//�ɼ�����˵�
void scoreMenuPrint();
void Benke_scoreManage_Menu();
void Yanjiu_scoreManage_Menu();
//�ɼ�����˵�
void sortMenuPrint();//�����ظ��˵���ӡ����
void Benke_sort_Menu();//���Ƴɼ�����˵�
void Yanjiu_sort_Menu();//�о����ɼ�����˵�
//����ͳ�Ʋ˵�
void statisticsMenuPrint();//�����ظ��˵���ӡ����
void Benke_statistic_Menu();//����������ͳ�Ʋ˵�
void Yanjiu_statistic_Menu();//�о�������ͳ�Ʋ˵�
//��ѯ�˵�
void searchMenuPrint();//�����ظ��˵���ӡ����
void Benke_search_Menu();//��������ѯ�˵�
void Benke_search_class_Menu();//��ѯĳ���༶��ȫ��ѧ����Ϣ
void Benke_search_name_Menu();//��ѯĳ��ѧ����Ϣ
void Benke_search_fail_Menu();//��ѯĳ��ĳ��Ŀ������ѧ����Ϣ
void Yanjiu_search_Menu();//�о�����ѯ�˵�
void Yanjiu_search_class_Menu();//��ѯĳ���༶��ȫ��ѧ����Ϣ
void Yanjiu_search_name_Menu();//��ѯĳ��ѧ����Ϣ
void Yanjiu_search_fail_Menu();//��ѯĳ��ĳ��Ŀ������ѧ����Ϣ

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
//    for(int i=0;i<20;i++){
//        a=scanf_1();
//        addNode_1(a);
//    }
//    getPage_1();
//    for(int i=0;i<20;i++){
//        k=scanf_2();
//        addNode_2(k);
//    }
//    getPage_2();
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
                    Yanjiu_search_class_Menu();
                    break;
                case '3':
                    system("cls");
                    Yanjiu_search_name_Menu();
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


void Benke_search_class_Menu(){
    while (1) {
        char choice[3];
        printf("********************�������༶�ɼ���ѯ********************\n");
        printf("������༶(����0�����ϼ�)��");
        scanf("%s", choice);
        if(choice[0] == '0'){
            system("cls");
            Benke_search_Menu();
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
        printf("********************�о����༶�ɼ���ѯ********************\n");
        printf("������רҵ(����0�����ϼ�)��");
        scanf("%s", major);
        if(major[0] == '0'){
            system("cls");
            Yanjiu_search_Menu();
        }else{
            printf("������༶(����0�����ϼ�)��");
            scanf("%d", &choice);
            if(choice == 0){
                system("cls");
                Yanjiu_search_Menu();
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
        printf("*********************�������ɼ���ѯ*********************\n");
        printf("����������(����0�����ϼ�)��");
        scanf("%s", name);
        if(name[0] == '0'){
            system("cls");
            Benke_search_Menu();
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
        printf("*********************�о����ɼ���ѯ*********************\n");
        printf("����������(����0�����ϼ�)��");
        scanf("%s", name);
        if(name[0] == '0'){
            system("cls");
            Yanjiu_search_Menu();
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
        int course;
        printf("*********************�������ɼ���ѯ*********************\n");
        printf("������༶(����0�����ϼ�)��");
        scanf("%s", banji);
        if(banji[0] == '0'){
            system("cls");
            Benke_search_Menu();
        }else{
            printf("������γ�(����0�����ϼ�)��");
            scanf("%d", &course);
            if(course == 0){
                system("cls");
                Benke_search_Menu();
            }else{
                system("cls");
                infoPrint_1();
                searnraiidyClassCourse_1(banji, course);
            }
        }
    }
}

void Yanjiu_search_fail_Menu(){

}