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

void readFromFile();   //����ʼ�����ļ��е�ȫ��ѧ�����ݵ�ѧ������(������ѧ������������),�ſ�ʼ�����һ��
void sayeToFile();   //���������ѧ�������е�ȫ��ѧ�����ݱ��浽�ļ����˳�����,,���˳�����ǰһ��
UND* scanf_1();   //�Ӽ��̻�ȡһ�����������ݺ�,���ؽڵ��ַ
GRA* scanf_2();   //�Ӽ��̻�ȡһ���о������ݺ�,���ؽڵ��ַ
void addNode_1(UND* stu);   //��һ���������ڵ���ӵ�����β(ʵ��: ѧ���ڵ�),���Զ�����ѧ��
void addNode_2(GRA* stu);   //��һ���о����ڵ���ӵ�����β(ʵ��: ѧ���ڵ�),���Զ�����ѧ��

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
        Head_1=Head_1->next;
    }
    Head_1->next=NULL;
    while(fread(&graduate2,sizeof(GRA),1,fp2)==1){
        Head_2->next=&graduate2;
        Head_2=Head_2->next;
    }
    Head_2->next=NULL;
}

void sayeToFile(){
    rewind(fp1);   //ʹfp1��fp2�ص��ļ���ͷ
    rewind(fp2);
    UND*Head_1=Head1;   //Head_1��Head_2�ݴ�ͷָ��,��ֹͷָ�붪ʧ
    GRA*Head_2=Head2;
    while((fwrite(Head_1->next,sizeof(UND),1,fp1))==1){
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
    UND*stu=(UND*)malloc(sizeof(UND));
    scanf("%s%u%s%s%d%d%d",stu->name,&stu->sex,stu->major,stu->banji,&stu->score[0],&stu->score[1],&stu->score[2]);
    return stu;
}

GRA* scanf_2(){
    GRA*stu=(GRA*)malloc(sizeof(GRA));
    scanf("%s%u%s%d%s%s%d%d",stu->name,&stu->sex,stu->major,&stu->Class,stu->reserch,stu->tname,&stu->score[0],&stu->score[1]);
    return stu;
}

void addNode_1(UND* stu){
    UND*Head_1=Head1;   //Head_1�ݴ�ͷָ��,��ֹͷָ�붪ʧ
    int count=0;
    if(Head_1->next==NULL){
        stu->num=1;
        count=1;
    }
    while(Head_1->next!=NULL){
        Head_1=Head_1->next;
    }
    if(count==0){
        stu->num=Head_1->num+1;
    }
    Head_1->next=stu;
    stu->next=NULL;
}

void addNode_2(GRA* stu){
    GRA *Head_2=Head2;   //Head_2�ݴ�ͷָ��,��ֹͷָ�붪ʧ
    int count=0;
    if(Head_2->next==NULL){
        stu->num=1;
        count=1;
    }
    while(Head_2->next!=NULL){
        Head_2=Head_2->next;
    }
    if(count==0){
        stu->num=Head_2->num+1;
    }
    Head_2->next=stu;
    stu->next=NULL;
}