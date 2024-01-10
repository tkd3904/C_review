#include <stdio.h>
/*문제1. 숫자를 입력 받아 해당 숫자를 가리키는 포인터를 만들어 해당 숫자의 값과 포인터의 값을 출력하고, 두 주소도 출력하여 같은 값이 나오는지 확인해보세요.
출처: https://prosto.tistory.com/253 [Prosto:티스토리]*/

int main(void){
    int num;
    int *numP = &num;
    printf("숫자입력 : ");
    scanf("%d", &num);

    printf("num : %d\n", num);
    printf("*numP : %d\n\n", *numP);

    printf("&num : %d\n", &num);
    printf("numP : %d\n", numP);

    return 0;
}