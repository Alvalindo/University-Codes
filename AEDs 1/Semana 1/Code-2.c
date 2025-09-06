#include <stdio.h>

void Reorganiza(int *a, int *b, int *c){
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main(){
    int x = 1, y = 2, z = 3;
    printf("Antes: %d %d %d\n",x,y,z);
    Reorganiza(&x,&y,&z);
    printf("Depois: %d %d %d\n",x,y,z);
}
