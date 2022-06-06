//
// Created by 86134 on 2022/4/19.
//

#ifndef _MENU_
#define _MENU_
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#endif
#include "Base.h"
//-------ȫ�ֱ�������

UND* Head1={NULL};   //����������ͷָ��(��Ҫ�޸�,�� UND* Head_1=Head1 ����ʽ����)
GRA* Head2={NULL};   //�о�������ͷָ��(��Ҫ�޸�,�� UND* Head_2=Head2 ����ʽ����)
FILE* fp1=NULL;   //�������ļ�ָ��(������β����rewind(fp1),ʹfp1�ص��ļ���ͷ)
FILE* fp2=NULL;   //�о����ļ�ָ��(������β����rewind(fp2),ʹfp2�ص��ļ���ͷ)

//-------


//-------���������ͺ�������˵��

void readFromFile();   //����ʼ�����ļ��е�ȫ��ѧ�����ݵ�ѧ������(������ѧ������������),---�ų���ʼ��һ��(���ڶ������ǰ)---
void sayeToFile();   //���������ѧ�������е�ȫ��ѧ�����ݱ��浽�ļ����˳�����,---���˳�����ǰһ��---
UND* scanf_1();   //�Ӽ��̻�ȡһ�����������ݺ�,���ؽڵ��ַ(�Դ���ʼ��)
GRA* scanf_2();   //�Ӽ��̻�ȡһ���о������ݺ�,���ؽڵ��ַ(�Դ���ʼ��)
void gradesCompute_1(UND* stu);   //����һ���������ܳɼ�
void gradesCompute_2(GRA* stu);   //����һ���о����ܳɼ�
void addNode_1(UND* stu);   //��һ���������ڵ���ӵ�����β,���Զ�����ѧ��,(ʵ��: ѧ���ڵ�ָ��)
void addNode_2(GRA* stu);   //��һ���о����ڵ���ӵ�����β,���Զ�����ѧ��,(ʵ��: ѧ���ڵ�ָ��)
int  numberPeople_1(UND* Head_1);   //���㱾��������,(ʵ��: ����������ͷָ��)
int  numberPeople_2(GRA* Head_2);   //�����о�������,(ʵ��: �о�������ͷָ��)
void displayData_1(UND stu);   //��ʾ����������,(ʵ��: ѧ���ڵ�)
void displayData_2(GRA stu);   //��ʾ�о�������,(ʵ��: ѧ���ڵ�)
void searchstu(char* num_Name);   //ͨ�����ֻ�ѧ�Ų�ѯ,(���ҵ������)ĳλѧ������Ϣ,(ʵ��: �����ַ������׵�ַ)
void modifyStudent();   //����ѧ���޸�һλѧ���Ļ�����������,(ѡ�����ò˵�)
void modifyScore();   //����ѧ���޸�һλѧ���Ļ����ɼ�����,(ѡ�����ò˵�)
void deleteStudentByild(int num1);   //����ѧ��ɾ��һλѧ���Ļ����ɼ�����
void getstu_1(UND* Head);   //��ʾ��HeadΪͷָ��������ȫ��������
void getstu_2(GRA* Head);   //��ʾ��HeadΪͷָ��������ȫ���о���
void printften_1(int i);   //��ʾ��iҳ�ı�����,(ʵ��: ҳ��)
void printften_2(int i);   //��ʾ��iҳ���о���,(ʵ��: ҳ��)
void getPage_1();   //�ɷ�ҳ��ʾ������,(���ò˵�)
void getPage_2();   //�ɷ�ҳ��ʾ�о���,(���ò˵�)
void infoPrint_1();   //��ӡ��������ͷ
void infoPrint_2();   //��ӡ�о�����ͷ
void searchByClass_1(char* banji);   //���༶��ʾ����������
void searchByClass_2(char*major, int class);   //���༶���о�������ʾ�о�������
void searchByName(char* name);   //��������ʾ���������о�������
void searnraiidyClassCourse_1(char* banji,char* course);   //���༶�Ϳγ̲�ѯ�����񱾿���,(course:�γ̺Ŵ��㿪ʼ)
void searnraiidyClassCourse_2(int class,char *major,char* course);   //���༶�Ϳγ̲�ѯ�������о���,(course:�γ̺Ŵ��㿪ʼ)
void sortAllByld_1();   //��ѧ��id��С�������򱾿���,����ɾ��ѧ���ŵ���ǰ��
void sortAllByld_2();   //��ѧ��id��С���������о���,����ɾ��ѧ���ŵ���ǰ��
void sortAll_1();   //���ܳɼ��Ӹߵ������򱾿���,������У����(���ɵ���ʹ��,����sortAllAndShow_1())
void sortAll_2();   //���ܳɼ��Ӹߵ��������о���,������У����(���ɵ���ʹ��,����sortAllAndShow_2())
void sortAllAndShow_1();   //���ܳɼ��Ӹߵ������򱾿���,����ʾ
void sortAllAndShow_2();   //���ܳɼ��Ӹߵ��������о���,����ʾ
UND* returnsClassHead_1(char *banji);   //����ͬ�༶����������ͷ
GRA* returnsClassHead_2(char*major, int class);   //����ͬ�༶�о�������ͷ
void sortAllByClass_1(char *banji);   //��ĳ�౾�������ݰ��ܳɼ��Ӹߵ���������ʾ
void sortAllByClass_2(char*major,int class);   //��ĳ���о������ݰ��ܳɼ��Ӹߵ���������ʾ
void countAverScore(); //ͳ��ĳ�ſ�ÿ�����ƽ���ɼ�
void countByClassScore_1(char* banji, char* course);//������ͳ��ĳ������ĳ�ſγ̲�ͬ�ȼ�ѧ��������
void countByClassScore_2(char* major, char* course, int class);//�о���ͳ��ĳ������ĳ�ſγ̲�ͬ�ȼ�ѧ��������
//-------


//-------��������

void readFromFile(){
    Head1=(UND*)malloc(sizeof(UND));
    Head2=(GRA*)malloc(sizeof(GRA));
    Head1->num=0;
    Head2->num=0;
    UND*Head_1=Head1;   //Head_1��Head_2�ݴ�ͷָ��,��ֹͷָ�붪ʧ
    GRA*Head_2=Head2;
    UND* graduate1=(UND*)malloc(sizeof(UND));   //graduate1��graduate2�ݴ�ѧ������
    GRA* graduate2=(GRA*)malloc(sizeof(GRA));
    if((fp1=fopen("undergraduate.dat","rb+"))==NULL){
        printf("�ļ���ʧ��!");
        exit(1);
    }
    if((fp2=fopen("graduate.dat","rb+"))==NULL){
        printf("�ļ���ʧ��!");
        exit(1);
    }
    if(fread(graduate1,sizeof(UND),1,fp1)){
        do {
                Head_1->next = graduate1;
                Head_1 = Head_1->next;
                graduate1 = (UND *) malloc(sizeof(UND));
        } while (fread(graduate1, sizeof(UND), 1, fp1));
    }
    Head_1->next=NULL;
    if(fread(graduate2,sizeof(GRA),1,fp2)){
        do {
                Head_2->next = graduate2;
                Head_2 = Head_2->next;
                graduate2 = (GRA *) malloc(sizeof(GRA));
        } while (fread(graduate2, sizeof(GRA), 1, fp2));
    }
    Head_2->next=NULL;
}


void sayeToFile(){
    rewind(fp1);    //ʹfp1��fp2�ص��ļ���ͷ
    rewind(fp2);
    UND*Head_1=Head1;   //Head_1��Head_2�ݴ�ͷָ��,��ֹͷָ�붪ʧ
    GRA*Head_2=Head2;
    while((fwrite(Head_1->next,sizeof(UND),1,fp1))==1){
        //stu=Head_1->next;
        //printf("%d %s %u %s %s %d %d %d %d %d %d\n",stu->num,stu->name,stu->sex,stu->major,stu->banji,stu->score[0],stu->score[1],stu->score[2],stu->score[3],stu->score[4],stu->score[5]);
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
    UND*stu;
    int i;
    if ((stu= (UND *)malloc(sizeof(UND))) == NULL) {
        printf("���ܳɹ����䴢���!\n");
        exit(0);
    }
    stu->num=0;
    for (i = 0; i < 6; ++i) {
        stu->score[i]=0;
    }
    scanf("%s%u%s%s%d%d%d",stu->name,&stu->sex,stu->major,stu->banji,&stu->score[0],&stu->score[1],&stu->score[2]);
    return stu;
}


GRA* scanf_2(){
    GRA*stu;
    int i;
    if ((stu= (GRA *)malloc(sizeof(GRA))) == NULL) {
        printf("���ܳɹ����䴢���!\n");
        exit(0);
    }
    stu->num=0;
    for (i = 0; i < 3; ++i) {
        stu->score[i]=0;
    }
    stu->classrank=0;
    stu->allrank=0;
    scanf("%s%u%s%d%s%s%d%d",stu->name,&stu->sex,stu->major,&stu->Class,stu->reserch,stu->tname,&stu->score[0],&stu->score[1]);
    return stu;
}


void gradesCompute_1(UND* stu){
    stu->score[3]=stu->score[0]+stu->score[1]+stu->score[2];
}


void gradesCompute_2(GRA* stu){
    stu->score[2]=stu->score[0]+stu->score[1];
}


void addNode_1(UND* stu){
    UND*Head_1=Head1;   //Head_1�ݴ�ͷָ��,��ֹͷָ�붪ʧ
    GRA*Head_2=Head2;
    int count=0;
    int num1=0;
    int num2=0;
    if(Head_1->next==NULL&&Head_2->next==NULL){
        stu->num=1;
        count=1;
    }
    while(Head_1->next!=NULL){
        if(Head_1->next->num!=-1){
            num1=Head_1->next->num;
        }
        Head_1=Head_1->next;
    }
    while(Head_2->next!=NULL){
        if(Head_2->next->num!=-1){
            num2=Head_2->next->num;
        }
        Head_2=Head_2->next;
    }
    if(count==0){
        if(Head_1->num==-1){
            stu->num =num1>=num2?num1:num2+ 1;
        }
        if(Head_1->num<=Head_2->num) {
            stu->num = Head_2->num + 1;
        }
        else{
            stu->num = Head_1->num + 1;
        }
    }
    Head_1->next=stu;
    stu->next=NULL;
    gradesCompute_1(stu);
}

void addNode_2(GRA* stu){
    UND* Head_1=Head1;
    GRA* Head_2=Head2;   //Head_2�ݴ�ͷָ��,��ֹͷָ�붪ʧ
    int count=0;
    int num1=0;
    int num2=0;
    if(Head_1->next==NULL&&Head_2->next==NULL){
        stu->num=1;
        count=1;
    }
    while(Head_1->next!=NULL){
        if(Head_1->next->num!=-1){
            num1=Head_1->next->num;
        }
        Head_1=Head_1->next;
    }
    while(Head_2->next!=NULL){
        if(Head_2->next->num!=-1){
            num2=Head_2->next->num;
        }
        Head_2=Head_2->next;
    }
    if(count==0){
        if(Head_2->num==-1){
            stu->num =num1>=num2?num1:num2+ 1;
        }
        if(Head_1->num<=Head_2->num) {
            stu->num = Head_2->num + 1;
        }
        else{
            stu->num = Head_1->num + 1;
        }
    }
    Head_2->next=stu;
    stu->next=NULL;
    gradesCompute_2(stu);
}


int numberPeople_1(UND* Head_1){
    int i=0;
    while(Head_1->next!=NULL){
        if(Head_1->next->num!=-1){
            i++;
            Head_1=Head_1->next;
        }
    }
    return i;
}


int numberPeople_2(GRA* Head_2){
    int i=0;
    while(Head_2->next!=NULL){
        if(Head_2->next->num!=-1){
            i++;
            Head_2=Head_2->next;
        }
    }
    return i;
}


void displayData_1(UND stu) {
    if(stu.num!=-1){
        switch (stu.sex) {
            case male:
                printf("%-4d %-4s   ��   %-3s  %-9s  %-4d  %-5d  %-4d  %-3d    %-5d    %-3d\n", stu.num, stu.name, stu.major,
                       stu.banji, stu.score[0],
                       stu.score[1], stu.score[2], stu.score[3], stu.score[4], stu.score[5]);
                break;
            case female:
                printf("%-4d %-4s   Ů   %-3s  %-9s  %-5d  %-4d  %-4d  %-3d    %-5d    %-3d\n", stu.num, stu.name, stu.major,
                       stu.banji, stu.score[0],
                       stu.score[1], stu.score[2], stu.score[3], stu.score[4], stu.score[5]);
                break;
        }
    }
}

void displayData_2(GRA stu) {
    if(stu.num!=-1) {
        switch (stu.sex) {
            case male:
                printf("%-4d  %-4s  ��   %-3s  %-3d  %-12s  %-5s  %-7d  %-7d  %-4d   %-6d   %-3d\n", stu.num, stu.name, stu.major,
                       stu.Class,
                       stu.reserch, stu.tname, stu.score[0], stu.score[1], stu.score[2], stu.classrank, stu.allrank);
                break;
            case female:
                printf("%-4d  %-4s  Ů   %-3s  %-3d  %-12s  %-5s  %-7d  %-7d  %-4d   %-6d   %-3d\n", stu.num, stu.name, stu.major,
                       stu.Class,
                       stu.reserch, stu.tname, stu.score[0], stu.score[1], stu.score[2], stu.classrank, stu.allrank);
                break;
        }
    }
}



void searchstu(char* num_Name){
    UND* Head_1=Head1;
    GRA* Head_2=Head2;
    int num1=0;
    int i,j,k=0,h=0;
    printf("********************ѧ�����ݲ�ѯ********************\n");
    if ('0' <= num_Name[0] && num_Name[0] <= '9'){    //�ж�num_Name�Ƿ���ѧ��
        for(i=0;i<strlen(num_Name);i++){     //�õ�int���͵�ѧ��
            j=num_Name[i]-'0';
            num1=10*num1+j;
        }
        while ( Head_1->next!= NULL){
            if (Head_1->next->num == num1){
                printf("�Ѳ��ҵ�ѧ��Ϊ%d��ѧ����Ϣ!\n\n", num1);
                displayData_1(*Head_1->next);
                printf("\n");
                k=1;
                break;
            }
            Head_1=Head_1->next;
        }
        if(k==0){
            while ( Head_2->next!= NULL){
                if (Head_2->next->num == num1){
                    printf("�Ѳ��ҵ�ѧ��Ϊ%d��ѧ����Ϣ!\n\n", num1);
                    displayData_2(*Head_2->next);
                    printf("\n");
                    k=1;
                    break;
                }
                Head_2=Head_2->next;
            }
        }
    }
    else{
        while (Head_1->next!= NULL){
            if (strcmp(num_Name, Head_1->next->name) == 0){
                printf("�Ѳ��ҵ�����Ϊ%s��ѧ����Ϣ!\n\n", num_Name);
                displayData_1(*Head_1->next);
                printf("\n");
                k=1;
                h++;
            }
            Head_1=Head_1->next;
        }
        while (Head_2->next!= NULL){
            if (strcmp(num_Name, Head_2->next->name) == 0){
                printf("�Ѳ��ҵ�����Ϊ%s��ѧ����Ϣ!\n\n", num_Name);
                displayData_2(*Head_2->next);
                printf("\n");
                k=1;
                h++;
            }
            Head_2=Head_2->next;
        }
        if(h>1){
            printf("�����ҵ�����Ϊ%s��ѧ����Ϣ%d��\n",num_Name,h);
        }
    }
    if (k == 0){
        printf("���޴�ѧ��!\n");
    }
}


void modifyStudent(){
    UND* Head_1=Head1;
    UND* Head__1=Head1;
    GRA* Head_2=Head2;
    GRA* Head__2=Head2;
    int num1=0;
    int k=0;
    int i=0;
    printf("********************ѧ���ɼ�����ϵͳ********************\n");
    printf("���������޸�ѧ����ѧ�ţ�����0���أ�:");
    scanf("%d",&num1);
    if(num1 == 0){
        system("cls");
        return;
    }
    while ( Head__1->next!= NULL){
        if (Head__1->next->num == num1){
            printf("�Ѳ��ҵ�ѧ��Ϊ%d��ѧ����Ϣ!\n", num1);
            displayData_1(*Head__1->next);
            k=1;
            break;
        }
        Head__1=Head__1->next;
    }
    if(k==0){
        while ( Head__2->next!= NULL){
            if (Head__2->next->num == num1){
                printf("�Ѳ��ҵ�ѧ��Ϊ%d��ѧ����Ϣ!\n", num1);
                displayData_2(*Head__2->next);
                k=1;
                break;
            }
            Head__2=Head__2->next;
        }
    }
    while ( Head_1->next!= NULL){
        if (Head_1->next->num == num1){
            printf("���������޸ĵ����ݵı��(-1-���� -2-�Ա� -3-רҵ -4-�༶ -0-�˳�):");
            scanf("%d",&i);
            switch(i){
                case 1:
                    printf("�����޸�����(����):");
                    scanf("%s",Head_1->next->name);
                    break;
                case 2:
                    printf("�����޸�����(�Ա� -0-�� -1-Ů):");
                    scanf("%u",&Head_1->next->sex);
                    break;
                case 3:
                    printf("�����޸�����(רҵ):");
                    scanf("%s",Head_1->next->major);
                    break;
                case 4:
                    printf("�����޸�����(�༶ xxx��):");
                    scanf("%s",Head_1->next->banji);
                    break;
                case 0:
                default:
                    break;
            }
            k=1;
            break;
        }
        Head_1=Head_1->next;
    }
    if(k==0){
        while ( Head_2->next!= NULL){
            if (Head_2->next->num == num1){
                printf("���������޸ĵ����ݵı��(-1-���� -2-�Ա� -3-רҵ -4-�༶ -5-�о����� -6-��ʦ���� -0-�˳�):");
                scanf("%d",&i);
                switch(i) {
                    case 1:
                        printf("�����޸�����(����):");
                        scanf("%s",Head_2->next->name);
                        break;
                    case 2:
                        printf("�����޸�����(�Ա� -0-�� -1-Ů):");
                        scanf("%u",&Head_2->next->sex);
                        break;
                    case 3:
                        printf("�����޸�����(רҵ):");
                        scanf("%s",Head_2->next->major);
                        break;
                    case 4:
                        printf("�����޸�����(�༶ Ϊ������):");
                        scanf("%d",&Head_2->next->Class);
                        break;
                    case 5:
                        printf("�����޸�����(�о�����):");
                        scanf("%s",Head_2->next->reserch);
                        break;
                    case 6:
                        printf("�����޸�����(��ʦ����):");
                        scanf("%s",Head_2->next->tname);
                        break;
                    case 0:
                    default:
                        break;
                }
                k=1;
                break;
            }
            Head_2=Head_2->next;
        }
    }
    if (k == 0){
        printf("���޴�ѧ��!\n");
    }
    printf("�޸�����ɣ�\n");
    system("pause");
    system("cls");
}


void modifyScore(){
    UND* Head_1=Head1;
    UND* Head__1=Head1;
    GRA* Head_2=Head2;
    GRA* Head__2=Head2;
    int num1=0;
    int k=0;
    int i=0;
    printf("********************ѧ���ɼ�����ϵͳ********************\n");
    printf("���������޸�ѧ����ѧ�ţ�����0���أ�:");
    scanf("%d",&num1);
    if(num1 == 0){
        system("cls");
        return;
    }
    while ( Head_1->next!= NULL){
        if (Head_1->next->num == num1){
            printf("�Ѳ��ҵ�ѧ��Ϊ%d��ѧ����Ϣ!\n", num1);
            displayData_1(*Head_1->next);
            k=1;
            break;
        }
        Head_1=Head_1->next;
    }
    if(k==0){
        while ( Head_2->next!= NULL){
            if (Head_2->next->num == num1){
                printf("�Ѳ��ҵ�ѧ��Ϊ%d��ѧ����Ϣ!\n", num1);
                displayData_2(*Head_2->next);
                k=1;
                break;
            }
            Head_2=Head_2->next;
        }
    }
    while ( Head__1->next!= NULL){
        if (Head__1->next->num == num1){
            printf("���������޸ĵ����ݵı��(-1-�����ɼ� -2-c���Գɼ� -3-Ӣ��ɼ� -4-�����ɼ���c���Գɼ���Ӣ��ɼ� -0-�˳�):");
            scanf("%d",&i);
            switch(i){
                case 1:
                    printf("�����޸�����(�����ɼ�):");
                    scanf("%d",&Head__1->next->score[0]);
                    break;
                case 2:
                    printf("�����޸�����(c���Գɼ�):");
                    scanf("%d",&Head__1->next->score[1]);
                    break;
                case 3:
                    printf("�����޸�����(Ӣ��ɼ�):");
                    scanf("%d",&Head__1->next->score[2]);
                    break;
                case 4:
                    printf("�����޸�����(Ӣ��ɼ�):");
                    scanf("%d%d%d",&Head__1->next->score[0],&Head__1->next->score[1],&Head__1->next->score[2]);
                    break;
                case 0:
                default:
                    break;
            }
            k=1;
            break;
        }
        Head__1=Head__1->next;
    }
    gradesCompute_1(Head__1->next);
    if(k==0){
        while ( Head__2->next!= NULL){
            if (Head__2->next->num == num1){
                printf("���������޸ĵ����ݵı��(-1-�ۺϳɼ� -2-���ĳɼ� -3-�ۺϳɼ������ĳɼ� -0-�˳�):");
                scanf("%d",&i);
                switch(i) {
                    case 1:
                        printf("�����޸�����(�ۺϳɼ�):");
                        scanf("%d",&Head__2->next->score[0]);
                        break;
                    case 2:
                        printf("�����޸�����(���ĳɼ�):");
                        scanf("%d",&Head__2->next->score[1]);
                        break;
                    case 3:
                        printf("�����޸�����(�ۺϳɼ������ĳɼ�):");
                        scanf("%d%d",&Head__2->next->score[0],&Head__2->next->score[1]);
                        break;
                    case 0:
                    default:
                        break;
                }
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
    printf("�޸�����ɣ�\n");
    system("pause");
    system("cls");
}


void deleteStudentByild(int num1){
    UND* Head_1=Head1;
    GRA* Head_2=Head2;
    int k=0;
    while ( Head_1->next!= NULL){
        if (Head_1->next->num == num1){
            Head_1->next->num=-1;
            printf("��ɾ��ѧ��Ϊ%d��ѧ��!\n", num1);
            k=1;
            break;
        }
        Head_1=Head_1->next;
    }
    if(k==0){
        while ( Head_2->next!= NULL){
            if (Head_2->next->num == num1){
                Head_2->next->num=-1;
                printf("��ɾ��ѧ��Ϊ%d��ѧ��!\n", num1);
                k=1;
                break;
            }
            Head_2=Head_2->next;
        }
    }
    if (k == 0){
        printf("���޴�ѧ��!\n");
    }
}
void getstu_1(UND* Head){
    while ( Head->next!= NULL){
        if(Head->next->num!=-1){
            if(Head->next!=NULL&&Head->next->num!=0){
                displayData_1(*Head->next);
            }
            Head = Head->next;
        }
    }
}
void getstu_2(GRA* Head){
    while ( Head->next!= NULL){
        if(Head->next->num!=-1){
            if(Head->next!=NULL&&Head->next->num!=0){
                displayData_2(*Head->next);
            }
            Head = Head->next;
        }
    }
}


void printften_1(int i)
{
    int stunum = 0;
    int cnt = 1;
    UND * pstu;
    pstu = Head1;
    while (pstu->next!= NULL && stunum < 10)
    {
        if (cnt >= (i-1)*10+1)
        {
            displayData_1(*pstu->next);
            pstu = pstu->next;
            stunum++;
        }
        else pstu = pstu->next;
        cnt++;
    }
}


void printften_2(int i)
{
    int stunum = 0;
    int cnt = 1;
    GRA *pstu;
    pstu = Head2;
    while (pstu->next != NULL && stunum < 10)
    {
        if (cnt >= (i-1)*10+1)
        {
            displayData_2(*pstu->next);
            pstu = pstu->next;
            stunum++;
        }
        else pstu = pstu->next;
        cnt++;
    }
}


void getPage_1(){
    sortAllByld_1(); //����ѧ������
    int totalstu = 0;   //����
    char choice[2];
    int allpage;   //��ҳ��
    int page = 1;  //��ǰҳ��
    UND * cnt;
    cnt = Head1;
    while (cnt->next!= NULL)
    {
        totalstu++;
        cnt = cnt->next;
    }
    if (totalstu % 10 != 0)
    {
        allpage = totalstu / 10 + 1;
    }
    else allpage = totalstu / 10;
    while (1){
        system("cls");
        printf("********************************�������ɼ�����ϵͳ*********************************\n");
        infoPrint_1();
        printften_1(page);
        printf("-------------------------------��ǰΪ��%dҳ,��%dҳ--------------------------------\n",page,allpage);
        printf("��ҳ�밴��a���� ��һҳ�밴��w���� ��һҳ�밴��s���� βҳ�밴��d���� �˳��밴��0������");
        scanf("%c",&choice[0]);
        scanf("%c",&choice[1]);
        switch (choice[1]){
            case 'a':
                if(page == 1){
                    printf("�Ѿ�����ҳ!\n");
                    system("pause");
                }else {
                    page = 1;
                }
                break;
            case 'w':
                if(page == 1){
                    printf("�Ѿ�����ҳ!\n");
                    system("pause");
                }else if(page > 1){
                    page--;
                }
                break;
            case 's':
                if(page == allpage){
                    printf("�Ѿ���βҳ!\n");
                    system("pause");
                }else if(page < allpage){
                    page++;
                }
                break;
            case 'd':
                if (page == allpage){
                    printf("�Ѿ���βҳ!\n");
                    system("pause");
                }else{
                    page = allpage;
                }
                break;
            case '0':
                system("cls");
                return;
            default:
                printf("����������������룡\n");
                system("pause");
                system("cls");
                break;
        }
    }
}

void getPage_2(){
    sortAllByld_2(); //����ѧ������
    int totalstu = 0;   //����
    char choice[2];
    int allpage;   //��ҳ��
    int page = 1;  //��ǰҳ��
    GRA * cnt;
    cnt = Head2;
    while (cnt->next!= NULL)
    {
        totalstu++;
        cnt = cnt->next;
    }
    if (totalstu % 10 != 0)
    {
        allpage = totalstu / 10 + 1;
    }
    else allpage = totalstu / 10;
    while (1){
        system("cls");
        printf("********************************�о����ɼ�����ϵͳ*********************************\n");
        infoPrint_2();
        printften_2(page);
        printf("-------------------------------��ǰΪ��%dҳ,��%dҳ--------------------------------\n",page,allpage);
        printf("��ҳ�밴��a���� ��һҳ�밴��w���� ��һҳ�밴��s���� βҳ�밴��d���� �˳��밴��0������");
        scanf("%c",&choice[0]);
        scanf("%c",&choice[1]);
        switch (choice[1]){
            case 'a':
                if(page == 1){
                    printf("�Ѿ�����ҳ!\n");
                    system("pause");
                }else {
                    page = 1;
                }
                break;
            case 'w':
                if(page == 1){
                    printf("�Ѿ�����ҳ!\n");
                    system("pause");
                }else if(page > 1){
                    page--;
                }
                break;
            case 's':
                if(page == allpage){
                    printf("�Ѿ���βҳ!\n");
                    system("pause");
                }else if(page < allpage){
                    page++;
                }
                break;
            case 'd':
                if (page == allpage){
                    printf("�Ѿ���βҳ!\n");
                    system("pause");
                }else{
                    page = allpage;
                }
                break;
            case '0':
                system("cls");
                return;
            default:
                printf("����������������룡\n");
                system("pause");
                system("cls");
                break;
        }
    }
}


void infoPrint_1(){
    printf("\nѧ��  ���� �Ա�  רҵ  �༶      ����  C����  Ӣ�� �ܳɼ�  �༶���� У������\n");
}


void infoPrint_2(){
    printf("\nѧ��  ���� �Ա�  רҵ  �༶ �о�����    ��ʦ���� �ۺϳɼ� ���ĳɼ� �ܳɼ� �༶���� У������\n");
}


void searchByClass_1(char* banji){
    UND*Head_1=Head1;
    int k=0;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            displayData_1(*Head_1->next);
            k=1;
        }
        Head_1=Head_1->next;
    }
    if(k==0)printf("�޴˰༶\n");
}


void searchByClass_2(char*major, int class){
    GRA *Head_2=Head2;
    int k=0;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& strcmp(Head_2->next->major, major) == 0){
            displayData_2(*Head_2->next);
            k=1;
        }
        Head_2=Head_2->next;
    }
    if(k==0)printf("�޴˰༶\n");
}


void searchByName(char* name){
    UND*Head_1=Head1;
    GRA*Head_2=Head2;
    int k=0;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->name,name) == 0){
            displayData_1(*Head_1->next);
            k=1;
        }
        Head_1=Head_1->next;
    }
    while(Head_2->next!=NULL){
        if(strcmp(Head_2->next->name,name) == 0){
            displayData_2(*Head_2->next);
            k=1;
        }
        Head_2=Head_2->next;
    }
    if(k==0)printf("û������Ϊ%s��ѧ��\n",name);
}


void searnraiidyClassCourse_1(char* banji,char* course){
    UND *Head_1 = Head1;
    int k = 0, i;
    char gaoshu[10] = "����";
    char c[10] = "C����";
    char yingyu[10] = "Ӣ��";
    if(strcmp(course,gaoshu) == 0){
        i = 0;
    }else if(strcmp(course,c) == 0){
        i = 1;
    }else if(strcmp(course,yingyu) == 0){
        i = 2;
    }else{
        printf("����������������룡\n");
        printf("�������������\n");
        system("pause");
        system("cls");
        return;
    }
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]<60){
                displayData_1(*Head_1->next);
                k=1;
            }
        }
        Head_1=Head_1->next;
    }
    if(k==0)printf("�ð༶�еĸÿγ���ѧ��������\n");
    printf("��ѯ���\n");
    system("pause");
    system("cls");
}


void searnraiidyClassCourse_2(int class,char*major,char* course){
    GRA *Head_2=Head2;
    int k=0, i = -1;
    char zonghe[20] = "�ۺϳɼ�";
    char lunwen[20] = "���ĳɼ�";
    if(strcmp(course,zonghe) == 0){
        i = 0;
    }else if(strcmp(course,lunwen) == 0){
        i = 1;
    }
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]<60){
                displayData_2(*Head_2->next);
                k=1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k==0)printf("�ð༶�еĸÿγ���ѧ��������\n");
    printf("��ѯ���\n");
    system("pause");
    system("cls");
}


void sortAllByld_1(){
    UND *Head_1=Head1;
    int count=numberPeople_1(Head_1),i=0,j=0,k=count;
    for(;i<count-1;i++){
        for(;j<k-1;j++){
            if(Head_1->next->num>Head_1->next->next->num) {
                UND*cur=Head_1->next;
                int temp[12];
                for (int l = 0; l < 12; ++l) {
                    temp[i]=cur->score[l];
                }
                for (int l = 0; l < 12; ++l) {
                    cur->score[l]=cur->next->score[l];
                }
                for (int l = 0; l < 12; ++l) {
                    cur->next->score[l]=temp[l];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;

                char temp2[15];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);

                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;

                char temp4[30];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);

                char temp5[10];
                strcpy(temp5,cur->banji);
                strcpy(cur->banji,cur->next->banji);
                strcpy(cur->next->banji,temp5);
                Head_1=Head_1->next;
            }
        }
        k--;
    }
}


void sortAllByld_2(){
    GRA *Head_2=Head2;
    int count=numberPeople_2(Head_2),i=0,j=0,k=count;
    for(;i<count-1;i++){
        for(;j<k-1;j++){
            if(Head_2->next->num>Head_2->next->next->num) {
                GRA *cur=Head_2->next;

                int temp[3];
                for (int l = 0; l < 3; ++l) {
                    temp[l]=cur->score[l];
                }
                for (int l = 0; l < 3; ++l) {
                    cur->score[l]=cur->next->score[l];
                }
                for (int l = 0; l < 3; ++l) {
                    cur->next->score[l]=temp[l];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;
                char temp2[10];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);
                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;
                char temp4[20];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);
                int temp5=cur->Class;
                cur->Class=cur->next->Class;
                cur->next->Class=temp5;
                char temp6[20];
                strcpy(temp6,cur->reserch);
                strcpy(cur->reserch,cur->next->reserch);
                strcpy(cur->next->reserch,temp6);
                char temp7[10];
                strcpy(temp7,cur->tname);
                strcpy(cur->tname,cur->next->tname);
                strcpy(cur->next->tname,temp7);
                int temp8=cur->classrank;
                cur->classrank=cur->next->classrank;
                cur->next->classrank=temp8;
                int temp9=cur->allrank;
                cur->allrank=cur->next->allrank;
                cur->next->allrank=temp9;

                Head_2=Head_2->next;
            }
        }
        k--;
    }
}



void sortAll_1(){
    UND *cur,*tail;
    UND *Head_1=Head1;
    UND *Head_2=Head_1;
    infoPrint_1();
    cur=Head_2;
    tail=NULL;
    while(cur!=tail){
        while(cur->next!=tail){
            if(cur->score[3]<cur->next->score[3]){
                int temp[12];
                for (int i = 0; i < 12; ++i) {
                    temp[i]=cur->score[i];
                }
                for (int i = 0; i < 12; ++i) {
                    cur->score[i]=cur->next->score[i];
                }
                for (int i = 0; i < 12; ++i) {
                    cur->next->score[i]=temp[i];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;

                char temp2[15];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);

                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;

                char temp4[30];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);

                char temp5[10];
                strcpy(temp5,cur->banji);
                strcpy(cur->banji,cur->next->banji);
                strcpy(cur->next->banji,temp5);
            }
            cur=cur->next;
        }
        tail=cur;
        cur=Head_2;
    }
    //----------------��������----------------
    int ranking=1;  //����
    int const1=1;   //������
    Head_1->next->score[5]=ranking;
    while(Head_1->next->next!=NULL){
        if(Head_1->next->score[3]!=Head_1->next->next->score[3]){
            Head_1->next->next->score[5]=Head_1->next->score[5]+const1;
            const1=1;
        }else{
            const1++;
            Head_1->next->next->score[5]=Head_1->next->score[5];
        }
        Head_1=Head_1->next;
    }
}


void sortAll_2(){
    GRA *cur,*tail;
    GRA *Head_2=Head2;
    GRA *Head_3=Head_2;
    infoPrint_2();
    cur=Head_3;
    tail=NULL;
    while(cur!=tail){
        while(cur->next!=tail){
            if(cur->score[2]<cur->next->score[2]){
                int temp[3];
                for (int i = 0; i < 3; ++i) {
                    temp[i]=cur->score[i];
                }
                for (int i = 0; i < 3; ++i) {
                    cur->score[i]=cur->next->score[i];
                }
                for (int i = 0; i < 3; ++i) {
                    cur->next->score[i]=temp[i];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;
                char temp2[10];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);
                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;
                char temp4[20];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);
                int temp5=cur->Class;
                cur->Class=cur->next->Class;
                cur->next->Class=temp5;
                char temp6[20];
                strcpy(temp6,cur->reserch);
                strcpy(cur->reserch,cur->next->reserch);
                strcpy(cur->next->reserch,temp6);
                char temp7[10];
                strcpy(temp7,cur->tname);
                strcpy(cur->tname,cur->next->tname);
                strcpy(cur->next->tname,temp7);
                int temp8=cur->classrank;
                cur->classrank=cur->next->classrank;
                cur->next->classrank=temp8;
                int temp9=cur->allrank;
                cur->allrank=cur->next->allrank;
                cur->next->allrank=temp9;
            }
            cur=cur->next;
        }
        tail=cur;
        cur=Head_3;
    }
    //----------------��������----------------
    int ranking=1;  //����
    int const1=1;   //������
    Head_2->next->allrank=ranking;
    while(Head_2->next->next!=NULL){
        if(Head_2->next->score[2]!=Head_2->next->next->score[2]){
            Head_2->next->next->allrank=Head_2->next->allrank+const1;
            const1=1;
        }else{
            const1++;
            Head_2->next->next->allrank=Head_2->next->allrank;
        }
        Head_2=Head_2->next;
    }
}


void sortAllAndShow_1(){
    sortAll_1();
    getstu_1(Head1);
    sortAllByld_1();
    printf("��ѯ��ϣ���������������˵���\n");
    system("pause");
    system("cls");
}


void sortAllAndShow_2(){
    sortAll_2();
    getstu_2(Head2);
    sortAllByld_2();
    printf("��ѯ��ϣ���������������˵���\n");
    system("pause");
    system("cls");
}


UND* returnsClassHead_1(char *banji){
    UND* Head_1=Head1;
    UND* Head_2=(UND*) malloc(sizeof (UND));
    UND* Head_3=Head_2;   //��ֹHead_2��ʧ
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji)==0){
         Head_2->next=(UND*) malloc(sizeof (UND));
         *Head_2->next=*Head_1->next;
         Head_2->next->next=NULL;
         Head_2=Head_2->next;
        }
        Head_1=Head_1->next;
    }
    Head_2->next=NULL;
    return Head_3;
}


GRA* returnsClassHead_2(char*major, int class){
    GRA* Head_1=Head2;
    GRA* Head_2=(GRA *) malloc(sizeof (GRA));
    GRA* Head_3=Head_2;   //��ֹHead_2��ʧ
    while(Head_1->next!=NULL){
        if(Head_1->next->Class==class){
            if(strcmp(Head_1->next->major,major)==0) {
                Head_2->next = (GRA *) malloc(sizeof(GRA));
                *Head_2->next = *Head_1->next;
                Head_2->next->next = NULL;
                Head_2 = Head_2->next;
            }
        }
        Head_1=Head_1->next;
    }
    Head_2->next=NULL;
    return Head_3;
}


void sortAllByClass_1(char *banji){
    UND *Head_1 = returnsClassHead_1(banji), *Head___3 = Head_1;
    UND *cur, *tail;
    cur=Head_1;
    tail=NULL;
    while(cur!=tail){
        while(cur->next!=tail){
            if(cur->score[3]<cur->next->score[3]){
                int temp[12];
                for (int i = 0; i < 12; ++i) {
                    temp[i]=cur->score[i];
                }
                for (int i = 0; i < 12; ++i) {
                    cur->score[i]=cur->next->score[i];
                }
                for (int i = 0; i < 12; ++i) {
                    cur->next->score[i]=temp[i];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;

                char temp2[15];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);

                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;

                char temp4[30];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);

                char temp5[10];
                strcpy(temp5,cur->banji);
                strcpy(cur->banji,cur->next->banji);
                strcpy(cur->next->banji,temp5);
            }
            cur=cur->next;
        }
        tail=cur;
        cur=Head_1;
    }
    getstu_1(Head___3);
    //----------------��������----------------
//    int ranking=1;  //����
//    int const1=1;   //������
//    cur->next->score[5]=ranking;
//    while(cur->next->next!=NULL){
//        if(cur->next->score[3]!=cur->next->next->score[3]){
//            cur->next->next->score[5]=cur->next->score[5]+const1;
//            const1=1;
//        }else{
//            const1++;
//            cur->next->next->score[5]=cur->next->score[5];
//        }
//        cur=cur->next;
//    }
//    while(cur->next!=NULL){
//        while(Head_1->next->next!=NULL){
//           if(Head_1->next->num==cur->next->num){
//               Head_1->next->score[5]=cur->next->score[5];
//               break;
//           }
//           Head_1=Head_1->next;
//        }
//        cur=cur->next;
//    }
}


void sortAllByClass_2(char*major,int class){
    GRA *Head_1 = returnsClassHead_2(major, class), *Head___3 = Head_1;
    GRA *cur, *tail;
    cur=Head_1;
    tail=NULL;
    while(cur!=tail){
        while(cur->next!=tail){
            if(cur->score[2]<cur->next->score[2]){
                int temp[3];
                for (int i = 0; i < 3; ++i) {
                    temp[i]=cur->score[i];
                }
                for (int i = 0; i < 3; ++i) {
                    cur->score[i]=cur->next->score[i];
                }
                for (int i = 0; i < 3; ++i) {
                    cur->next->score[i]=temp[i];
                }
                int temp1=cur->num;
                cur->num=cur->next->num;
                cur->next->num=temp1;
                char temp2[10];
                strcpy(temp2,cur->name);
                strcpy(cur->name,cur->next->name);
                strcpy(cur->next->name,temp2);
                enum Sex temp3=cur->sex;
                cur->sex=cur->next->sex;
                cur->next->sex=temp3;
                char temp4[20];
                strcpy(temp4,cur->major);
                strcpy(cur->major,cur->next->major);
                strcpy(cur->next->major,temp4);
                int temp5=cur->Class;
                cur->Class=cur->next->Class;
                cur->next->Class=temp5;
                char temp6[20];
                strcpy(temp6,cur->reserch);
                strcpy(cur->reserch,cur->next->reserch);
                strcpy(cur->next->reserch,temp6);
                char temp7[10];
                strcpy(temp7,cur->tname);
                strcpy(cur->tname,cur->next->tname);
                strcpy(cur->next->tname,temp7);
                int temp8=cur->classrank;
                cur->classrank=cur->next->classrank;
                cur->next->classrank=temp8;
                int temp9=cur->allrank;
                cur->allrank=cur->next->allrank;
                cur->next->allrank=temp9;
            }
            cur=cur->next;
        }
        tail=cur;
        cur=Head_1;
    }
    getstu_2(Head___3);
}

void countAverScore(){
    struct Class_1{
        char banji[10];
        double totalScore;   //�ܷ�
        double averScore;    //ƽ����
        int numStudent;   //����
    };
    struct Class_2{
        char major[10];
        int Class;
        double totalScore;   //�ܷ�
        double averScore;    //ƽ����
        int numStudent;   //����
    };
    UND *Head_1 = Head1;
    GRA *Head_2 = Head2;
    int Number1 = numberPeople_1(Head_1);
    int Number2 = numberPeople_2(Head_2);
    struct Class_1 class_1[Number1];
    struct Class_2 class_2[Number2];
    char gaoshu[] = "����";
    char c[] = "C����";
    char yingyu[] = "Ӣ��";
    char zonghe[] = "�ۺϳɼ�";
    char lunwen[] = "���ĳɼ�";
    char course[10];
    int i;//�γ̴���
    int j = 0;//CLass����ʹ�ü�����
    printf("������γ̲�ѯ(����0������һ���˵�):");
    scanf("%s", course);
    if (course[0] == '0') {
        system("cls");
        return;
    }
    if (strcmp(course, gaoshu) == 0 || strcmp(course, c) == 0 || strcmp(course, yingyu) == 0) {
        if (strcmp(course, gaoshu) == 0) {
            i = 0;
        }else if(strcmp(course, c) == 0){
            i = 1;
        }else{
            i = 2;
        }
        while(Head_1->next!=NULL){
            for ( int l = 0; l <=j ; ) {
                if (strcmp(Head_1->next->banji, class_1[l].banji) == 0) {
                    class_1[l].totalScore += Head_1->next->score[i];
                    class_1[l].numStudent++;
                    Head_1 = Head_1->next;
                    break;
                } else{
                    if(l==j){
                        strcpy(class_1[j].banji, Head_1->next->banji);
                        class_1[j].totalScore = Head_1->next->score[i];
                        class_1[j].numStudent = 1;
                        j++;
                        Head_1 = Head_1->next;
                        break;
                    } else{
                        l++;
                    }
                }
            }
        }
        for(int x = 0; x < j; x++){
            class_1[x].averScore = class_1[x].totalScore / class_1[x].numStudent;
        }
        switch (i) {
            case 0:
                printf("��������ƽ���ɼ����£�\n");
                for(int x = 0; x < j; x++){
                    printf("%s\t��%.2lf\n", class_1[x].banji, class_1[x].averScore);
                }
                break;
            case 1:
                printf("C���Ը���ƽ���ɼ����£�\n");
                for(int x = 0; x < j; x++){
                    printf("%s\t��%.2lf\n", class_1[x].banji, class_1[x].averScore);
                }
                break;
            case 2:
                printf("Ӣ�����ƽ���ɼ����£�\n");
                for(int x = 0; x < j; x++){
                    printf("%s\t��%.2lf\n", class_1[x].banji, class_1[x].averScore);
                }
                break;
        }
    }else if(strcmp(course, zonghe) == 0 || strcmp(course, lunwen) == 0){
        if(strcmp(course, zonghe) == 0){
            i = 0;
        }else{
            i = 1;
        }
        while(Head_2->next!=NULL){
            for ( int l = 0; l <=j ; ) {
                if (strcmp(Head_2->next->major, class_2[l].major) == 0 && Head_2->next->Class == class_2[l].Class) {
                    class_2[l].totalScore += Head_2->next->score[i];
                    class_2[l].numStudent++;
                    Head_2 = Head_2->next;
                    break;
                } else{
                    if(l==j){
                        class_2[j].Class = Head_2->next->Class;
                        strcpy(class_2[j].major, Head_2->next->major);
                        class_2[j].totalScore = Head_2->next->score[i];
                        class_2[j].numStudent = 1;
                        j++;
                        Head_2 = Head_2->next;
                        break;
                    } else{
                        l++;
                    }
                }
            }
        }
        for(int x = 0; x < j; x++){
            class_2[x].averScore = class_2[x].totalScore / class_2[x].numStudent;
        }
        switch (i) {
            case 0:
                printf("�ۺϳɼ�����ƽ���ɼ����£�\n");
                for(int x = 0; x < j; x++){
                    printf("%sרҵ%d�ࣺ%.2lf\n", class_2[x].major, class_2[x].Class, class_2[x].averScore);
                }
                break;
            case 1:
                printf("���ĳɼ�����ƽ���ɼ����£�\n");
                for(int x = 0; x < j; x++){
                    printf("%sרҵ%d�ࣺ%.2lf\n", class_2[x].major, class_2[x].Class, class_2[x].averScore);
                }
                break;
        }
    }else{
        printf("�����������������룡\n");
        system("pause");
        system("cls");
        return;
    }
    printf("-----------------------------------------------------\n");
    printf("��ѯ��ϣ�������������ϼ��˵���\n");
    system("pause");
    system("cls");
}

void countByClassScore_1(char* banji, char* course){
    UND*Head_1=Head1;
    int i , k = 0;
    char gaoshu[10] = "����";
    char c[10] = "C����";
    char yingyu[10] = "Ӣ��";
    if(strcmp(course,gaoshu) == 0){
        i = 0;
    }else if(strcmp(course,c) == 0){
        i = 1;
    }else if(strcmp(course,yingyu) == 0){
        i = 2;
    }else{
        printf("����������������룡\n");
        printf("�������������\n");
        system("pause");
        system("cls");
        return;
    }
    printf("%s�༶%s�ɼ��ֲ����£�\n",banji,course);
    printf("������");
    infoPrint_1();
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]<60){
                displayData_1(*Head_1->next);
                k++;
            }
        }
        Head_1=Head_1->next;
    }
    if(k == 0){
        printf("��\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("����");
    infoPrint_1();
    Head_1=Head1;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]>=60 && Head_1->next->score[i]<70){
                displayData_1(*Head_1->next);
                k++;
            }
        }
        Head_1=Head_1->next;
    }
    if(k == 0){
        printf("��\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("�еȣ�");
    infoPrint_1();
    Head_1=Head1;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]>=70 && Head_1->next->score[i]<80){
                displayData_1(*Head_1->next);
                k++;
            }
        }
        Head_1=Head_1->next;
    }
    if(k == 0){
        printf("��\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("���ã�");
    infoPrint_1();
    Head_1=Head1;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]>=80 && Head_1->next->score[i]<90){
                displayData_1(*Head_1->next);
                k++;
            }
        }
        Head_1=Head_1->next;
    }
    if(k == 0){
        printf("��\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("���㣺");
    infoPrint_1();
    Head_1=Head1;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[i]>=90){
                displayData_1(*Head_1->next);
                k++;
            }
        }
        Head_1=Head_1->next;
    }
    if(k == 0){
        printf("��\n");
    }
    printf("-----------------------------------------------------\n");
    printf("��ѯ���\n");
    system("pause");
    system("cls");
}

void countByClassScore_2(char* major, char* course, int class){
    GRA *Head_2 = Head2;
    int k = 0, i;
    char zonghe[20] = "�ۺϳɼ�";
    char lunwen[20] = "���ĳɼ�";
    if(strcmp(course,zonghe) == 0){
        i = 0;
    }else if(strcmp(course,lunwen) == 0){
        i = 1;
    } else{
        printf("�����������������룡\n");
        system("pause");
        system("cls");
        return;
    }
    printf("%sרҵ%d��%s�ɼ��ֲ����£�\n",major,class,course);
    printf("������");
    infoPrint_2();
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]<60){
                displayData_2(*Head_2->next);
                k=1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k == 0){
        printf("��\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("����");
    infoPrint_2();
    Head_2=Head2;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]>=60 && Head_2->next->score[i]<70){
                displayData_2(*Head_2->next);
                k=1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k == 0){
        printf("��\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("�еȣ�");
    infoPrint_2();
    Head_2=Head2;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]>=70 && Head_2->next->score[i]<80){
                displayData_2(*Head_2->next);
                k=1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k == 0){
        printf("��\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("���ã�");
    infoPrint_2();
    Head_2=Head2;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]>=80 && Head_2->next->score[i]<90){
                displayData_2(*Head_2->next);
                k = 1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k == 0){
        printf("��\n");
    }else{
        k = 0;
    }
    printf("-----------------------------------------------------\n");
    printf("���㣺");
    infoPrint_2();
    Head_2=Head2;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&& !strcmp(Head_2->next->major,major)){
            if(Head_2->next->score[i]>=90){
                displayData_2(*Head_2->next);
                k = 1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k == 0){
        printf("��\n");
    }
    printf("-----------------------------------------------------\n");
    printf("��ѯ���\n");
    system("pause");
    system("cls");
}