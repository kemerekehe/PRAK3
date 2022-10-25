#include <stdio.h>
int main () {
    int angka;
    scanf("%d", &angka);
    if (angka>=80){
        printf("A");}
    else if (angka<=79 && angka>=70){
        printf("B");}
    else if (angka<=69 && angka>=60){
        printf("C");}
    else if (angka<=59 && angka>=50){
        printf("D");}
    else{
        printf("E");}
}