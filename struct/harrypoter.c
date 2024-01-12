#include <stdio.h>

char copy_str(char *dest, const char *src);
struct Books{
    char name[30];
    char auth[30];
    char publ[30];
    int borrowed;
};

int main(){
    struct Books Harry_poter;
    
    copy_str(Harry_poter.name, "Harry Potter");
    copy_str(Harry_poter.auth, "J.K. Rolling");
    copy_str(Harry_poter.publ, "Scholastic");
    Harry_poter.borrowed = 0;
    
    printf("책 이름 %s\n", Harry_poter.name);
    printf("저자 이름 %s\n", Harry_poter.auth);
    printf("출판사 이름 %s\n", Harry_poter.publ);

    return 0;
}
char copy_str(char *dest, const char *src){
    while(*src){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    return 1;
}