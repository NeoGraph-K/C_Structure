#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    int count, i, sum = 0;
    int* arr;
    scanf("%d",&count);

    arr = (int*)malloc(sizeof(int)*count);
    for(i = 0; i < count; ++i){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < count; ++i){
        sum += arr[i];
    }
    printf("%d", sum);

    free(arr);

    return 0;
}