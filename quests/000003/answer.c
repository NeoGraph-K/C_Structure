#include <stdio.h>

typedef struct {
    char name[32];
    int age;
}Student;

int main(int argc, char* argv[]){

    Student* students;
    int count, i;

    scanf("%d",&count);

    for(i = 0; i < count; ++i){
        scanf("%s", students[i].name);
        scanf("%d",&students[i].age);
    }
    for(i = 0; i < count; ++i){
        printf("%s\n", students[i].name);
        printf("%d\n", students[i].age);
    }

    return 0;
}