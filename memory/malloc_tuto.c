#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int SizeOfArray;
    int *arr;

    printf("만들고 싶은 배열의 원소의 수 : ");
    scanf("%d", &SizeOfArray);
    
    arr = (int *)malloc(sizeof(int) * SizeOfArray);
    // int arr[sizeOfArray]와 동일한 작업을 한 크기의 배열 생성

    free(arr); // 할당받은 메모리 해제

    return 0;    
}