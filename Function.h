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
#include <math.h>
#include <string.h>
#endif
#include "Base.h"
#include <conio.h>
//-------ȫ�ֱ�������

UND* Head1={NULL};   //����������ͷָ��(��Ҫ�޸�,�� UND* Head_1=Head1 ����ʽ����)
GRA* Head2={NULL};   //�о�������ͷָ��(��Ҫ�޸�,�� UND* Head_2=Head2 ����ʽ����)
FILE* fp1=NULL;   //�������ļ�ָ��(������β����rewind(fp1),ʹfp1�ص��ļ���ͷ)
FILE* fp2=NULL;   //�о����ļ�ָ��(������β����rewind(fp2),ʹfp2�ص��ļ���ͷ)

//-------


//-------���������ͺ�������˵��

void readFromFile();   //����ʼ�����ļ��е�ȫ��ѧ�����ݵ�ѧ������(������ѧ������������),---�ų���ʼ��һ��(���ڶ������ǰ)---
void sayeToFile();   //���������ѧ�������е�ȫ��ѧ�����ݱ��浽�ļ����˳�����,---���˳�����ǰһ��---
void ReturnsModifications();   //��ʾ�޸ĺ��ѧ������
void fileContent();   //��ʾ�ļ�����,��ʹ�ļ�ָ�뷵�ؿ�ͷ
UND* scanf_1();   //�Ӽ��̻�ȡһ�����������ݺ�,���ؽڵ��ַ(�Դ���ʼ��)
GRA* scanf_2();   //�Ӽ��̻�ȡһ���о������ݺ�,���ؽڵ��ַ(�Դ���ʼ��)
void gradesCompute_1(UND* stu);   //����һ���������ܳɼ�
void gradesCompute_2(GRA* stu);   //����һ���о����ܳɼ�
void addNode_1(UND* stu);   //��һ���������ڵ���ӵ�����β,���Զ�����ѧ��,(ʵ��: ѧ���ڵ�ָ��)
void addNode_2(GRA* stu);   //��һ���о����ڵ���ӵ�����β,���Զ�����ѧ��,(ʵ��: ѧ���ڵ�ָ��)
void exchangeData_1(UND* stu_1,UND* stu_2);   //��������������,(ʵ��: �轻��������ѧ���ڵ�)
void exchangeData_2(GRA* stu_1,GRA* stu_2);   //���������о���,(ʵ��: �轻��������ѧ���ڵ�)
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
void infoPrint_1();
void infoPrint_2();
void searchByClass_1(char* banji);   //���༶��ʾ����������
void searchByClass_2(int class,char*reserch);   //���༶���о�������ʾ�о�������
void searchByName(char* name);   //��������ʾ���������о�������
void searnraiidyClassCourse_1(char* banji,int course);   //���༶�Ϳγ̲�ѯ�����񱾿���,(course:�γ̺Ŵ��㿪ʼ)
void searnraiidyClassCourse_2(int class,int course);   //���༶�Ϳγ̲�ѯ�������о���,(course:�γ̺Ŵ��㿪ʼ)
void sortAllByld_1();   //��ѧ��id��С�������򱾿���,����ɾ��ѧ���ŵ���ǰ��
void sortAllByld_2();   //��ѧ��id��С���������о���,����ɾ��ѧ���ŵ���ǰ��
void SwapNodes_1(UND* stu1,UND* stu2);   //�����������ڵ�
void SwapNodes_2(GRA* stu1,GRA* stu2);   //�����о����ڵ�
void sortAll_1();   //���ܳɼ��Ӹߵ������򱾿���
void sortAll_2();   //���ܳɼ��Ӹߵ��������о���
void sortAllAndShow_1();   //���ܳɼ��Ӹߵ������򱾿���,����ʾ
void sortAllAndShow_2();   //���ܳɼ��Ӹߵ��������о���,����ʾ
UND* returnsClassHead_1(char *banji);   //����ͬ�༶����������ͷ
GRA* returnsClassHead_2(int class);   //����ͬ�༶�о�������ͷ
void sortAllByClass_1(char *banji);   //��ĳ�౾�������ݰ��ܳɼ��Ӹߵ���������ʾ
void sortAllByClass_2(int class);   //��ĳ���о������ݰ��ܳɼ��Ӹߵ���������ʾ
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
    UND ustu;
    GRA stu;
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


void ReturnsModifications(){
    UND*Head_1=Head1;   //Head_1��Head_2�ݴ�ͷָ��,��ֹͷָ�붪ʧ
    GRA*Head_2=Head2;
    printf("�������޸ĺ�undergraduate��������Ϊ:\n");
    while(Head_1->next!=NULL){
        if(Head_1->next->num!=-1){
            displayData_1(*Head_1->next);
            Head_1=Head_1->next;
        }
    }
    printf("�������޸ĺ�graduate��������Ϊ:\n");
    while(Head_2->next!=NULL){
        if(Head_2->next->num!=-1){
            displayData_2(*Head_2->next);
            Head_2=Head_2->next;
        }
    }
}


void fileContent(){
    rewind(fp1);    //ʹfp1��fp2�ص��ļ���ͷ
    rewind(fp2);
    UND ustu;
    GRA stu;
    printf("undergraduate.dat����Ϊ:\n");
    printf("--------------------------------------------------\n");
    fread(&ustu, sizeof(ustu), 1, fp1);
    while (!feof(fp1))
    {
        displayData_1(ustu);
        printf("--------------------------------------------------\n");
        fread(&ustu, sizeof(UND), 1, fp1);
    }
    printf("graduate.dat����Ϊ:\n");
    printf("--------------------------------------------------\n");
    fread(&stu, sizeof(GRA), 1, fp2);
    while (!feof(fp2))
    {
        displayData_2(stu);
        printf("--------------------------------------------------\n");
        fread(&stu, sizeof(GRA), 1, fp2);
    }
    rewind(fp1);    //ʹfp1��fp2�ص��ļ���ͷ
    rewind(fp2);
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


void gradesCompute_2(GRA * stu){
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


void exchangeData_1(UND* stu_1,UND* stu_2){
    UND temp;
    temp=*stu_1;
    *stu_1=*stu_2;
    *stu_2=temp;
}


void exchangeData_2(GRA* stu_1,GRA* stu_2){
    GRA temp;
    temp=*stu_1;
    *stu_1=*stu_2;
    *stu_2=temp;
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
                printf("%-4d %-4s   ��  %-3s  %-3s  %-3d  %-4d  %-4d %-4d    %-3d    %-3d\n", stu.num, stu.name, stu.major,
                       stu.banji, stu.score[0],
                       stu.score[1], stu.score[2], stu.score[3], stu.score[4], stu.score[5]);
                break;
            case female:
                printf("%-4d %-4s   Ů  %-3s  %-3s  %-3d  %-4d  %-4d %-4d    %-3d    %-3d\n", stu.num, stu.name, stu.major,
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
    if ('0' <= num_Name[0] && num_Name[0] <= '9'){    //�ж�num_Name�Ƿ���ѧ��
        for(i=0;i<strlen(num_Name);i++){     //�õ�int���͵�ѧ��
            j=num_Name[i]-'0';
            num1=10*num1+j;
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
    }
    else{
        while (Head_1->next!= NULL){
            if (strcmp(num_Name, Head_1->next->name) == 0){
                printf("�Ѳ��ҵ�����Ϊ%s��ѧ����Ϣ!\n", num_Name);
                displayData_1(*Head_1->next);
                k=1;
                h++;
            }
            Head_1=Head_1->next;
        }
        while (Head_2->next!= NULL){
            if (strcmp(num_Name, Head_2->next->name) == 0){
                printf("�Ѳ��ҵ�����Ϊ%s��ѧ����Ϣ!\n", num_Name);
                displayData_2(*Head_2->next);
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
    printf("���������޸�ѧ����ѧ��:\n");
    scanf("%d",&num1);
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
            printf("���������޸ĵ����ݵı��(-1-���� -2-�Ա� -3-רҵ -4-�༶ -0-�˳�):\n");
            scanf("%d",&i);
            switch(i){
                case 1:
                    printf("�����޸�����(����):\n");
                    scanf("%s",Head_1->next->name);
                    break;
                case 2:
                    printf("�����޸�����(�Ա� -0-�� -1-Ů):\n");
                    scanf("%u",&Head_1->next->sex);
                    break;
                case 3:
                    printf("�����޸�����(רҵ):\n");
                    scanf("%s",Head_1->next->major);
                    break;
                case 4:
                    printf("�����޸�����(�༶ xxx��):\n");
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
                printf("���������޸ĵ����ݵı��(-1-���� -2-�Ա� -3-רҵ -4-�༶ -5-�о����� -6-��ʦ���� -0-�˳�):\n");
                scanf("%d",&i);
                switch(i) {
                    case 1:
                        printf("�����޸�����(����):\n");
                        scanf("%s",Head_2->next->name);
                        break;
                    case 2:
                        printf("�����޸�����(�Ա� -0-�� -1-Ů):\n");
                        scanf("%u",&Head_2->next->sex);
                        break;
                    case 3:
                        printf("�����޸�����(רҵ):\n");
                        scanf("%s",Head_2->next->major);
                        break;
                    case 4:
                        printf("�����޸�����(�༶ Ϊ������):\n");
                        scanf("%d",&Head_2->next->Class);
                        break;
                    case 5:
                        printf("�����޸�����(�о�����):\n");
                        scanf("%s",Head_2->next->reserch);
                        break;
                    case 6:
                        printf("�����޸�����(��ʦ����):\n");
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
}


void modifyScore(){
    UND* Head_1=Head1;
    UND* Head__1=Head1;
    GRA* Head_2=Head2;
    GRA* Head__2=Head2;
    int num1=0;
    int k=0;
    int i=0;
    printf("���������޸�ѧ����ѧ��:\n");
    scanf("%d",&num1);
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
            printf("���������޸ĵ����ݵı��(-1-�����ɼ� -2-c���Գɼ� -3-Ӣ��ɼ� -4-�����ɼ���c���Գɼ���Ӣ��ɼ� -0-�˳�):\n");
            scanf("%d",&i);
            switch(i){
                case 1:
                    printf("�����޸�����(�����ɼ�):\n");
                    scanf("%d",&Head__1->next->score[0]);
                    break;
                case 2:
                    printf("�����޸�����(c���Գɼ�):\n");
                    scanf("%d",&Head__1->next->score[1]);
                    break;
                case 3:
                    printf("�����޸�����(Ӣ��ɼ�):\n");
                    scanf("%d",&Head__1->next->score[2]);
                    break;
                case 4:
                    printf("�����޸�����(Ӣ��ɼ�):\n");
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
                printf("���������޸ĵ����ݵı��(-1-�ۺϳɼ� -2-���ĳɼ� -3-�ۺϳɼ������ĳɼ� -0-�˳�):\n");
                scanf("%d",&i);
                switch(i) {
                    case 1:
                        printf("�����޸�����(�ۺϳɼ�):\n");
                        scanf("%d",&Head__2->next->score[0]);
                        break;
                    case 2:
                        printf("�����޸�����(���ĳɼ�):\n");
                        scanf("%d",&Head__2->next->score[1]);
                        break;
                    case 3:
                        printf("�����޸�����(�ۺϳɼ������ĳɼ�):\n");
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
            displayData_1(*Head->next);
            Head = Head->next;
        }
    }
}
void getstu_2(GRA* Head){
    while ( Head->next!= NULL){
        if(Head->next->num!=-1){
            displayData_2(*Head->next);
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
    printf("\nѧ�� ���� �Ա�  רҵ  �༶   ���� C���� Ӣ�� �ܳɼ� �༶���� У������\n");
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


void searchByClass_2(int class,char*reserch){
    GRA *Head_2=Head2;
    int k=0;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class&&strcmp(Head_2->next->reserch,reserch)==0){
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


void searnraiidyClassCourse_1(char* banji,int course){
    UND*Head_1=Head1;
    int k=0;
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji) == 0){
            if(Head_1->next->score[course]<60){
                displayData_1(*Head_1->next);
                k=1;
            }
        }
        Head_1=Head_1->next;
    }
    if(k==0)printf("�ð༶�еĸÿγ���ѧ��������");
}


void searnraiidyClassCourse_2(int class,int course){
    GRA *Head_2=Head2;
    int k=0;
    while(Head_2->next!=NULL){
        if(Head_2->next->Class==class){
            if(Head_2->next->score[course]<60){
                displayData_2(*Head_2->next);
                k=1;
            }
        }
        Head_2=Head_2->next;
    }
    if(k==0)printf("�ð༶�еĸÿγ���ѧ��������");
}


void sortAllByld_1(){
    UND *Head_1=Head1;
    int count=numberPeople_1(Head_1),i=0,j=0,k=count;
    for(;i<count-1;i++){
        for(;j<k-1;j++){
            if(Head_1->next->num>Head_1->next->next->num) {
                SwapNodes_1(Head_1->next, Head_1->next->next);
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
                SwapNodes_2(Head_2->next, Head_2->next->next);
                Head_2=Head_2->next;
            }
        }
        k--;
    }
}


void SwapNodes_1(UND* stu1,UND* stu2){
    UND temp;
    UND*next1,*next2;
    next1=stu1->next;
    next2=stu2->next;
    temp=*stu1;
    *stu1=*stu2;
    *stu2=temp;
    stu1->next=next1;
    stu2->next=next2;
}


void SwapNodes_2(GRA* stu1,GRA* stu2){
    GRA temp;
    GRA*next1,*next2;
    next1=stu1->next;
    next2=stu2->next;
    temp=*stu1;
    *stu1=*stu2;
    *stu2=temp;
    stu1->next=next1;
    stu2->next=next2;
}


void sortAll_1(){
    UND *Head_1=Head1,*Head__1,*k;
    int count=numberPeople_1(Head_1),i=0,j;
    for(;i<count-1;i++)
    {
        k=Head_1->next;
        Head__1=Head_1;
        for (j=i+1;j<count;j++)
        {
            if(Head__1->next->score[3]<Head__1->next->next->score[3])
            {
                k=Head__1->next->next;
            }
            Head__1=Head__1->next;
        }
        if(k!=Head_1->next)
        {
            SwapNodes_1(Head_1->next,k);
        }
        Head_1=Head_1->next;
    }
}


void sortAll_2(){
    GRA *Head_2=Head2,*Head__2,*k;
    int count=numberPeople_2(Head_2),i=0,j;
    for(;i<count-1;i++)
    {
        k=Head_2->next;
        Head__2=Head_2;
        for (j=i+1;j<count;j++)
        {
            if(Head__2->next->score[2]<Head__2->next->next->score[2])
            {
                k=Head__2->next->next;
            }
            Head__2=Head__2->next;
        }
        if(k!=Head_2->next)
        {
            SwapNodes_2(Head_2->next,k);
        }
        Head_2=Head_2->next;
    }
}


void sortAllAndShow_1(){
    sortAll_1();
    UND *Head_1=Head1;
    while(Head_1->next!=NULL){
        if(Head_1->next->num!=-1){
            displayData_1(*Head_1->next);
            Head_1=Head_1->next;
        }
    }
}


void sortAllAndShow_2(){
    sortAll_2();
    GRA *Head_2=Head2;
    while(Head_2->next!=NULL){
        if(Head_2->next->num!=-1){
            displayData_2(*Head_2->next);
            Head_2=Head_2->next;
        }
    }
}


UND* returnsClassHead_1(char *banji){
    UND* Head_1=Head1;
    UND* Head_2=(UND*) malloc(sizeof (UND));
    UND* Head_3=Head_2;   //��ֹHead_2��ʧ
    while(Head_1->next!=NULL){
        if(strcmp(Head_1->next->banji,banji)==0){
         Head_2->next=(UND*) malloc(sizeof (UND));
         Head_2->next=Head_1->next;
         Head_2=Head_2->next;
        }
        Head_1=Head_1->next;
    }
    Head_2->next=NULL;
    return Head_3;
}


GRA* returnsClassHead_2(int class){
    GRA* Head_1=Head2;
    GRA* Head_2=(GRA *) malloc(sizeof (GRA));
    GRA* Head_3=Head_2;   //��ֹHead_2��ʧ
    while(Head_1->next!=NULL){
        if(Head_1->next->Class==class){
            Head_2->next=(GRA *) malloc(sizeof (GRA));
            Head_2->next=Head_1->next;
            Head_2=Head_2->next;
        }
        Head_1=Head_1->next;
    }
    Head_2->next=NULL;
    return Head_3;
}


void sortAllByClass_1(char *banji){
    UND *Head_1=returnsClassHead_1(banji),*Head__1,*Head___3=Head_1,*k;
    int count=numberPeople_1(Head_1),i=0,j;
    for(;i<count-1;i++)
    {
        k=Head_1->next;
        Head__1=Head_1;
        for (j=i+1;j<count;j++)
        {
            if(Head__1->next->score[3]<Head__1->next->next->score[3])
            {
                k=Head__1->next->next;
            }
            Head__1=Head__1->next;
        }
        if(k!=Head_1->next)
        {
            SwapNodes_1(Head_1->next,k);
        }
        Head_1=Head_1->next;
    }
    while(Head___3->next!=NULL){
        if(Head___3->next->num!=-1){
            displayData_1(*Head___3->next);
            Head___3=Head___3->next;
        }
    }
}


void sortAllByClass_2(int class){
    GRA *Head_1=returnsClassHead_2(class),*Head__1,*Head___3=Head_1,*k;
    int count=numberPeople_2(Head_1),i=0,j;
    for(;i<count-1;i++)
    {
        k=Head_1->next;
        Head__1=Head_1;
        for (j=i+1;j<count;j++)
        {
            if(Head__1->next->score[2]<Head__1->next->next->score[2])
            {
                k=Head__1->next->next;
            }
            Head__1=Head__1->next;
        }
        if(k!=Head_1->next)
        {
            SwapNodes_2(Head_1->next,k);
        }
        Head_1=Head_1->next;
    }
    while(Head___3->next!=NULL){
        if(Head___3->next->num!=-1){
            displayData_2(*Head___3->next);
            Head___3=Head___3->next;
        }
    }
}


