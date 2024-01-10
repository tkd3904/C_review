//위 10 개의 원소들 중 최대값 구하는 함수를 이용하여, 10 개의 원소를 입력 받고 그 원소를 큰 순으로 출력하는 함수를 만들어보세요. (난이도 : 中)
#include <stdio.h>

int Change_VAL(int *p1, int *p2);
int Max_number(int *parr);
int main(){
    int arr[10] = { 0 };

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    Max_number(&arr[0]);
    for(int i = 0; i < 10; i++){
        printf("%d, ", arr[i]);
    }

    return 0;
}
int Change_VAL(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return 0;
}
int Max_number(int *parr){
    int max;
    
    for(int i = 0; i < 10; i++){
        for(int j = 1; j < 10; j++){
            max = parr[i]; 
            if(parr[j] > max){
                Change_VAL(&parr[i], &parr[j]);
            }
            else{
                
            }
        }
    }
}

