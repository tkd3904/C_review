#include <stdio.h>

struct Human{
    int age;
    int height;
    int weight;
}; // 구조체는 선언후 ;붙여줘야함

int main(){
    struct Human Psi;

    Psi.age = 99;
    Psi.height = 185;
    Psi.weight = 80;

    printf("Psi에 대한 정보\n");
    printf("나이 : %d\n", Psi.age);
    printf("키 : %d\n", Psi.height);
    printf("몸무게 : %d\n", Psi.weight);

    return 0;
}