#include <stdio.h>
union A{
    int i;
    char j;
};
int main(){
    union A a;
    a.i = 0x12345678;
    printf("%x",a.i);
    return 0;
}