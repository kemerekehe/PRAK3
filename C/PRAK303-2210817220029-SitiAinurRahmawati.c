#include <stdio.h>
int main () {
    int angka;
    scanf("%d", &angka);
    if (angka<0) {
        printf("Negatif");
    } else if (angka>0) {
        printf("Positif");
    } else {
        printf("Nol");
    }
}