#include <stdio.h>
/*문제2. 숫자를 입력 받아 해당 숫자를 제곱으로 바꿔주는 함수를 만드세요. (반환 형태가 void이고, 포인터 사용)
출처: https://prosto.tistory.com/253 [Prosto:티스토리]*/

void Power(int *p){
    *p = *p * *p;
}
int main(){
    int num;

    printf("숫자입력 : ");
    scanf("%d", &num);

    Power(&num);
    Power(&num);
    printf("제곱 : %d\n", num);

    return 0;
}
