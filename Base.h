
enum Sex { male, female };    //性别枚举( -0-男, -1-女 )

typedef struct undergraduate
{
    int num;//学号
    char name[15];//姓名
    enum Sex sex;//性别
    char major[30];//专业
    char banji[3];//班级
    /*成绩*/
    int score[12];//高数成绩、C语言成绩、英语成绩、总成绩、班级排名、校级排名
    struct undergraduate *next;
} UND;

typedef struct graduate
{
    int num;//学号
    char name[10];//姓名
    enum Sex sex;//性别
    char major[20];//专业
    int Class;//班级
    char reserch[20];//研究方向
    char tname[10];//导师名字
    int score[3]; //综合成绩、论文成绩、总成绩
    int classrank;//班级排名
    int allrank;//校级排名
    struct graduate *next;
} GRA;


/*测试数据
 * 本科生
小明 0 网安 2班 80 90 70
小强 0 网工 1班 90 80 65
小葎 0 网安 1班 90 100 70
* 研究生
小青 1 网安 2 组合网络 蒲情 90 87
小曼 1 网安 2 量子信息安全 晓曼 80 77
小杰 0 软工 1 软件工程 肖杰 97 90
*/

/*
小明 0 网安 2班 80 90 70
小强 0 网工 1班 90 80 65
小青 1 网安 2 组合网络 蒲情 90 87
小曼 1 网安 2 量子信息安全 晓曼 80 77
*/