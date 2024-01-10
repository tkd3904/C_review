#include <stdio.h>

int main(){
    char word[30] = {"long sentence"};
    char *str = word;
    
    printf("%s\n", str);
    return 0;
}