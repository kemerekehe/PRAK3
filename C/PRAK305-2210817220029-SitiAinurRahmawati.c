#include <stdio.h>
int main () {
    int detik, menit, jam, hari;
    scanf("%d", &detik);
    hari=detik/86400;
    jam=(detik-hari*86400)/3600;
    menit=(detik-jam*3600-hari*86400)/60;
    detik=(detik-menit*60-jam*3600-hari*86400);
    if (hari>0) {
        printf("%d hari %.2d:%.2d:%.2d", hari, jam, menit, detik);} 
    else {
    printf("%.2d:%.2d:%.2d", jam, menit, detik);}
    return 0;
}