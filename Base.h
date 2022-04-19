#include <stdlib.h>

enum Gender{
    man = 1, woman
};

typedef struct undergraduate
{ //本科生基本资料数据（学号、姓名、性别、专业、班级）
    int sun;
    char name[4];
    enum Gender gender;
    char specialized[10];
    char class[12];
    struct undergraduate *next;
} UND;

typedef struct graduate
{ //研究生基本资料数据（学号、姓名、性别、专业、班级、研究方向、导师）
    int sun;
    char name[4];
    enum Gender gender;
    char specialized[10];
    char class[10];
    char direction[10];
    char mentor[4];
    struct graduate *next;
} GRA;
