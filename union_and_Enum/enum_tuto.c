#include <stdio.h>

enum { RED, BLUE, WHITE, BLACK }; // RED = 3,로 했을때는 열거형 시작이 3번부터 시작
int main(){
    int palette = 2;
    switch (palette){
    case RED:
        printf("palette : RED\n");
        break;
    case BLUE:
        printf("palette : BLUE\n");
        break;
    case WHITE:
        printf("palette : White\n");
        break;
    case BLACK:
        printf("palette : BLACK\n");
        break;
    }
}