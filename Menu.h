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
void deleteDate_Menu();//ɾ����������
void searchData_Menu();//��ѯ��������
void Benke_baseDataManage_Menu();//�������������ݹ���˵�
void Benke_addData_Menu();//��������Ϣ����¼��
void Yanjiu_baseDataManage_Menu();//�о����������ݹ���˵�
void Yanjiu_addData_Menu();//�о�����Ϣ����¼��
//�ɼ�����˵�
void scoreMenuPrint();
void deleteScore_Menu();//ɾ���ɼ�
void Benke_scoreManage_Menu();
void Yanjiu_scoreManage_Menu();
//�ɼ�����˵�
void sortMenuPrint();//�����ظ��˵���ӡ����
void Benke_sort_Menu();//���Ƴɼ�����˵�
void Benke_sort_ByClass_Menu();//���Ƴɼ����༶����˵�
void Yanjiu_sort_Menu();//�о����ɼ�����˵�
void Yanjiu_sort_ByClass_Menu();//�о����ɼ����༶����˵�
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
//        k=scanf_2();
//        addNode_2(k);
//    }
//    sortAll_1();
//    getPage_1();

//
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
        system("cls");
        char choice[10];
        printf("*************************** �˵� ***************************\n");
        printf("_1_�������ɼ�����ϵͳ\n");
        printf("_2_�о����ɼ�����ϵͳ\n");
        printf("_0_�˳�\n");
        printf("ѡ��ϵͳ:");
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
        char choice[10];
        printf("********************�������ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
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
        char choice[10];
        printf("********************�о����ɼ�����ϵͳ********************\n");
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
                    printf("�����������������\n");
                    system("pause");
                    system("cls");
            }
        } else {
            printf("�����������������\n");
            system("pause");
            system("cls");
        }
    }
}

void baseDataMenuPrint(){
    printf("_1_����ѧ������\n");
    printf("_2_ɾ��ѧ������\n");
    printf("_3_�޸�ѧ����������\n");
    printf("_4_��ѯѧ������\n");
    printf("_0_�����ϼ�\n");
    printf("������ţ�");
}

void Benke_baseDataManage_Menu(){
    while(1){
        char choice[10];
        printf("********************�������ɼ�����ϵͳ********************\n");
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
        char choice[10];
        printf("********************�о����ɼ�����ϵͳ********************\n");
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
        char choice[10];
        printf("********************�������ɼ�����ϵͳ********************\n");
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
        char choice[10];
        printf("********************�о����ɼ�����ϵͳ********************\n");
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
        char choice[10];
        printf("********************�������ɼ�����ϵͳ********************\n");
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
        char choice[10];
        printf("********************�о����ɼ�����ϵͳ********************\n");
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
        char choice[10];
        printf("********************�������ɼ�����ϵͳ********************\n");
        statisticsMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    break;
                case '2':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    return;
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
        char choice[10];
        printf("********************�о����ɼ�����ϵͳ********************\n");
        statisticsMenuPrint();
        scanf("%s", choice);
        if (isdigit(choice[0])) {
            switch (choice[0]) {
                case '1':
                    system("cls");
                    break;
                case '2':
                    system("cls");
                    break;
                case '0':
                    system("cls");
                    return;
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
        char choice[10];
        printf("********************�������ɼ�����ϵͳ********************\n");
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
        char choice[10];
        printf("********************�о����ɼ�����ϵͳ********************\n");
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
        printf("********************�о����༶�ɼ���ѯ********************\n");
        printf("������רҵ(����0�����ϼ�)��");
        scanf("%s", major);
        if(major[0] == '0'){
            system("cls");
            return;
        }else{
            printf("������༶(����0�����ϼ�)��");
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
        printf("*********************�������ɼ���ѯ*********************\n");
        printf("����������(����0�����ϼ�)��");
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
        printf("*********************�о����ɼ���ѯ*********************\n");
        printf("����������(����0�����ϼ�)��");
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
        printf("*********************�������ɼ���ѯ*********************\n");
        printf("������༶(����0�����ϼ�)��");
        scanf("%s", banji);
        if(banji[0] == '0'){
            system("cls");
            return;
        }else{
            printf("������γ�(����0�����ϼ�)��");
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
        printf("*********************�о����ɼ���ѯ*********************\n");
        printf("������רҵ(����0�����ϼ�)��");
        scanf("%s", major);
        if(major[0] == '0'){
            system("cls");
            return;
        }else{
            printf("������༶(����0�����ϼ�)��");
            scanf("%d", &class);
            if(class == 0){
                system("cls");
                return;
            }else{
                printf("������γ�(����0�����ϼ�)��");
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
        printf("********************�������ɼ�����********************\n");
        printf("������༶(����0�����ϼ�)��");
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
        printf("********************�о����ɼ�����********************\n");
        printf("������רҵ(����0�����ϼ�)��");
        scanf("%s", major);
        if(major[0] == '0'){
            system("cls");
            return;
        }else{
            printf("������༶(����0�����ϼ�)��");
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
        printf("********************�������ɼ�¼��********************\n");
        printf("��������Ҫ¼��ĸ���(����0�����ϼ�)��");
        scanf("%d", &i);
        if(i == 0){
            system("cls");
            return;
        }else{
            printf("���������� �Ա�(0�����У�1����Ů) רҵ �༶ �����ɼ� C���Գɼ� Ӣ��ɼ�:\n");
            for (int j = 0; j < i; j++) {
                stu = scanf_1();
                addNode_1(stu);
            }
            printf("¼��ɹ���\n");
            printf("����������������ϼ��˵�");
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
        printf("********************�о����ɼ�¼��********************\n");
        printf("��������Ҫ¼��ĸ���(����0�����ϼ�)��");
        scanf("%d", &i);
        if(i == 0){
            system("cls");
            return;
        }else{
            printf("���������������� �Ա�(0�����У�1����Ů) רҵ �༶ �о����� �ۺϳɼ� ���ĳɼ�:\n");
            for (int j = 0; j < i; j++) {
                stu = scanf_2();
                addNode_2(stu);
            }
            printf("¼��ɹ���\n");
            printf("����������������ϼ��˵�");
            system("pause");
            system("cls");
            return;
        }
    }
}

void deleteDate_Menu(){
    while(1){
        int num;
        printf("********************ѧ������ɾ��********************\n");
        printf("��������Ҫɾ����ѧ����ѧ��(����0�����ϼ�)��");
        scanf("%d", &num);
        if(num == 0){
            system("cls");
            return;
        }else{
            printf("ע�⣺��������Ĳ�������ɾ����ѧ�����������ݣ������������\n");
            printf("���������������������0�����ϼ��˵���");
            char i;
            scanf("%s", &i);
            if(i == '0'){
                system("cls");
                return;
            }else{
                deleteStudentByild(num);
                printf("����������������ϼ��˵�");
                system("pause");
                system("cls");
                return;
            }
        }

    }
}

void deleteScore_Menu(){
    int num = 0, k = 0;
    UND* Head_1=Head1;
    UND* Head__1=Head1;
    GRA* Head_2=Head2;
    GRA* Head__2=Head2;
    while(1){
        printf("********************ѧ���ɼ�ɾ��********************\n");
        printf("��������Ҫɾ���ɼ���ѧ����ѧ��(����0�����ϼ�)��");
        scanf("%d", &num);
        if(num == 0){
            system("cls");
            return;
        }else{
            while ( Head_1->next!= NULL){
                if (Head_1->next->num == num){
                    printf("��ɾ��ѧ��Ϊ%d��ѧ�������гɼ�!\n", num);
                    k=1;
                    break;
                }
                Head_1=Head_1->next;
            }
            if(k==0){
                while ( Head_2->next!= NULL){
                    if (Head_2->next->num == num){
                        printf("��ɾ��ѧ��Ϊ%d��ѧ�������гɼ�!\n", num);
                        k=1;
                        break;
                    }
                    Head_2=Head_2->next;
                }
            }
            while ( Head__1->next!= NULL){
                if (Head__1->next->num == num){
                    Head__1->next->score[0] = 0;
                    Head__1->next->score[1] = 0;
                    Head__1->next->score[2] = 0;
                    k=1;
                    break;
                }
                Head__1=Head__1->next;
            }
            gradesCompute_1(Head__1->next);
            if(k==0){
                while ( Head__2->next!= NULL){
                    if (Head__2->next->num == num){
                        Head__2->next->score[0] = 0;
                        Head__2->next->score[1] = 0;
                        Head__2->next->score[2] = 0;
                        k=1;
                        break;
                    }
                    Head__2=Head__2->next;
                }
                gradesCompute_2(Head__2->next);
            }
            if (k == 0){
                printf("���޴�ѧ��!\n");
            }
        }
    }
}

void searchData_Menu(){
    while(1){
        char num_Name[20];
        printf("********************ѧ�����ݲ�ѯ********************\n");
        printf("��������Ҫ��ѯ��ѧ����ѧ�Ż�����(����0�����ϼ�)��");
        scanf("%s", num_Name);
        if(num_Name[0] == '0'){
            system("cls");
            return;
        }else{
            searchstu(num_Name);
            printf("��������������ز�ѯ�˵�");
            system("pause");
            system("cls");
        }
    }
}