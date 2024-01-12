#include <stdio.h>
struct Test{
    int c;
    int *pointer;
};
int main(){
    struct Test t;
    struct Test *pt = &t;
    int i = 0;

    t.pointer = &i; //t의 포인터는 i를 가르킨다
    *t.pointer = 3; //t의 포인터가 가르키는 변수의 값을 3으로 만든다

    printf("i = %d\n", i);
    //->가 *보다 우선순위가 높으므로 먼저 해석 pointer가 가르키는 변수의 값을 4로 바꾼다
    *pt->pointer = 4;

    printf("i : %d\n", i);
    return 0;   
}