#include <stdio.h>

void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}
int main(){
    int arr[100] = { 0 };
    for(int i = 0; i < 100; i++){
        scanf("%d", &arr[i]);

        for(int i = 0; i < 100; i++){
            for(int j = 0; j < 100; j++){
                if(arr[i] > arr[j]) {
                    swap(&i , &j);
                }
            }
        }
    }
    return 0;
}
