#include <stdio.h>

typedef struct{
    int h;
    int m;
}hm;

void hmConvert(hm *Horasmin,int mnts){
    int min = (mnts % 60);
    int horas = (mnts / 60);
    Horasmin->h = horas;
    Horasmin->m = min;
}
int main(){
    hm HorasMin;
    int mnts;
    printf("Digite os minutos:\n");
    scanf("%d",&mnts);
    hmConvert(&HorasMin, mnts);
    printf("Covertido: %d horas, %d minutos\n",HorasMin.h,HorasMin.m);
}
