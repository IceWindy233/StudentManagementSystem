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
#include<math.h>
#endif
#include "Base.h"
//-------ȫ�ֱ�������

UND* Head1;   //����������ͷָ��
GRA* Head2;   //�о�������ͷָ��
FILE* fp1=NULL;    //�������ļ�ָ��
FILE* fp2=NULL;    //�о����ļ�ָ��

//-------


//-------���������ͺ�������˵��

void readFromFile();   //�����ļ��е�ȫ��ѧ�����ݵ�ѧ������(������ѧ������������)

//-------


//-------��������

void readFromFile(){
    Head1=(UND*)malloc(sizeof(UND));
    Head2=(GRA*)malloc(sizeof(UND));
    UND*Head_1=Head1;   //Head_1��Head_2�ݴ�ͷָ��,��ֹͷָ�붪ʧ
    GRA*Head_2=Head2;
    UND graduate1;    //graduate1��graduate2�ݴ�ѧ������
    GRA graduate2;
    if((fp1=fopen("D:\\c\\StudentManagementSystem\\������.dat","wb+"))==NULL){
        printf("�ļ���ʧ��!");
        exit(0);
    }
    if((fp2=fopen("D:\\c\\StudentManagementSystem\\�о���.dat","wb+"))==NULL){
        printf("�ļ���ʧ��!");
        exit(0);
    }
    while(fread(&graduate1,sizeof(UND),1,fp1)==1){
        Head_1->next=&graduate1;
        Head_1->next=Head_1;
    }
    while(fread(&graduate2,sizeof(GRA),1,fp2)==1){
        Head_2->next=&graduate2;
        Head_2->next=Head_2;
    }
}


