#include <stdio.h>

typedef struct {
    char name[32];
    int age;
}Student;

int main(int argc, char* argv[]){

    Student stu;

    scanf("%s", stu.name);
    scanf("%d",&stu.age);

    printf("%s\n", stu.name);
    printf("%d\n", stu.age);

    return 0;
}