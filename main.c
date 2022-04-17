#include <stdio.h>
#include "menu_1.c"
#include "menu_2.c"

typedef struct undergraduate{   //本科生基本资料数据（学号、姓名、性别、专业、班级）
    int sun;
    char name[4];
    char gender[4];
    char specialized[10];
    char class[12];
    struct undergraduate*next;
}UND;

typedef struct graduate{   //研究生基本资料数据（学号、姓名、性别、专业、班级、研究方向、导师）
    int sun;
    char name[4];
    char gender[4];
    char specialized[10];
    char class[10];
    char direction[10];
    char mentor[4];
    struct graduate*next;
}GRA;

int main(){
    int xuhao;
    printf("*************************** 菜单 ***************************\n");
    printf("_1_本科生成绩管理系统\n");
    printf("_2_研究生成绩管理系统\n");
    printf("选择系统(输入序号 1 或 2 )");
    scanf("%d",&xuhao);
    if(xuhao==1||xuhao==2){
        menu1(1);
    }
    else
    {
        while (xuhao!=1&&xuhao!=2)
        {   printf("序号错误");
            printf("重新选择系统(输入序号 1 或 2 )");
            scanf("%d",&xuhao);
        }
    }
    return 0;
}
