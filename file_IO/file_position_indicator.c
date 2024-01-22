#include <stdio.h>

int main(){
    FILE *fp = fopen("a.txt","r");
    char c;

    if(fp == NULL){
        printf("file opne error\n");
        return 0;
    }

    while((c = fgetc(fp)) != EOF){
        printf("%c",c);
    }
}