#include <stdio.h>

void ZeraVarivael(int *a, int *b){
    *a = 0;
    *b = 0;
}

int main(){
    int x = 20, y = 40;
    printf("Antes: x = %d | y = %d\n",x,y);
    ZeraVarivael(&x, &y);
    printf("Depois: x = %d | y = %d\n",x,y);
}
