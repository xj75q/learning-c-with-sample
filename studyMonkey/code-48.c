//结构体

/*
主要两种：
一种是 不带typedef 的定义方式
一种是 带typedef 的定义方式
*/



//==============不带typedef 的定义方式========================


//第一种方式
struct student{
    char no[20];       //学号
    char name[20];    //姓名
    char sex[5];    //性别
    int age;          //年龄
}stu1,stu2;

//第二种方式
struct student{
    char no[20];       //学号
    char name[20];    //姓名
    char sex[5];    //性别
    int age;          //年龄
};
//定义结构体变量
struct student stu1,stu2;


//==============带typedef 的定义方式========================

typedef struct{    //这时student结构体名可以不写
    char no[20];       //学号
    char name[20];    //姓名
    char sex[5];    //性别
    int age;          //年龄
}student;
//单独定义结构体变量
student stu1,stu2;


/*
区别如下：
1> 加上typedef后，struct后的结构体变量名可以省略不写
2> 结构体大括号后的字符串是结构体的别名(比如上面的 student )，而不是结构体的变量
3> 在单独定义的变量的时候，struct 可以省略
*/

//==================结构体成员的引用========================
/*

结构体成员的引用也有两种方式，主要是以结构体变量的类型来决定的。
如果是一般的结构变量，那么可以通过“.”进行引用
如果结构变量是一个指针，那么必须通过“->”方式引用
*/

//一般结构变量引用结构体成员方式

student stu1;
//引用方式
stu1.no;
stu1.name;
stu1.sex;
stu1.age;

//指针型结构体变量引用结构体成员方式

student* stu1;
//引用方式
stu1->no;
stu1->name;
stu1->sex;
stu1->age;


/*
注意：
结构体是自定义的一种数据类型
结构体不能进行加减乘除，但是可以相互赋值
*/