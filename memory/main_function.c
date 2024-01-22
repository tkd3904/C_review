// main함수의 인자

#include <stdio.h>

int main(int argc, char **argv){
    printf("받은 인자의 개수 : %d\n", argc); //main함수가 받은 인자수
    printf("이 프로그램의 경로 : %d\n", argv[0]);

    return 0;
}
//**argv는 배열을 가르키고 있고 *argv는 포인터 배열에서 각 원소를 가르키고 있음 