#include <stdio.h>

int main(){
    char str_a[] = "abc";
    char str_b[] = "abd";
    int cnt = 0;

    for(int i = 0; i < 3; i++){
        if(str_a[i] == str_b[i]){
            printf("%c, %c\n", str_a[i], str_b[i]);
            cnt++;
        }
    }
    if(cnt == 3){
        printf("TRUE\n");
    }
    else printf("FALSE\n");

    return 0;
}