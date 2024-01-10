/*문제3. 숫자1, 숫자2 두 개의 숫자를 입력 받아 포인터 두 개의 인자를 받는 함수로 두 숫자를 바꾼 후 출력해주는 프로그램을 만드세요.
출처: https://prosto.tistory.com/253 [Prosto:티스토리]*/

#include <stdio.h>
void Changenum(int *p1,int *p2){
    int temp = *p1;
    printf("temp = %d *p1 = %d *p2 = %d\n", temp, *p1, *p2);
    *p1 = *p2;
    printf("temp = %d *p1 = %d *p2 = %d\n", temp, *p1, *p2);
    *p2 = temp; 
    printf("temp = %d *p1 = %d *p2 = %d\n", temp, *p1, *p2);
} 
int main(){
    int num1, num2;

    
    printf("put Num1,Num2 : ");
    scanf("%d,%d", &num1, &num2);

    printf("Before change Num1 : %d, Num2 : %d\n", num1, num2);
    Changenum(&num1, &num2);
    printf("After change Num1 : %d, Num2 : %d\n", num1, num2);

    return 0;
}