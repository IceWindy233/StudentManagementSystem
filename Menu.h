#ifndef _STDIO_H_
#define _STDIO_H_
#include <stdio.h>
#endif
void Main_Menu();
void Benke_Menu();
void Yanjiu_Menu();

void Main_Menu()
{
    setbuf(stdout,NULL);
    while(1){
        int choice;
        printf("*************************** �˵� ***************************\n");
        printf("_1_�������ɼ�����ϵͳ\n");
        printf("_2_�о����ɼ�����ϵͳ\n");
        printf("_3_�˳�\n");
        printf("ѡ��ϵͳ:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                Benke_Menu();
                system("cls");
                break;
            case 2:
                Yanjiu_Menu();
                system("cls");
                break;
            case 3:
                exit(0);
            default:
                printf("�����������������\n");
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
        printf("_1_���л����������ݵ�ά������\n");
        printf("_2_���гɼ����ݵ�ά������\n");
        printf("_3_�����ϼ�\n");
        printf("�������:");
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
                printf("�����������������\n");
                system("pause");
                system("cls");
                break;
        }
    }
}

void Yanjiu_Menu(){
    while(1){
        int choice;
        printf("_1_���л����������ݵ�ά������\n");
        printf("_2_���гɼ����ݵ�ά������\n");
        printf("_3_�����ϼ�\n");
        printf("�������:");
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
                printf("�����������������\n");
                system("pause");
                system("cls");
                break;
        }
    }
}