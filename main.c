#include <stdio.h>

int main(void) {
    double area;
    double lato;
    printf("inserisci il lato: ");
    scanf("%lf",&lato);
    area=lato*lato;
    printf("l'area del quadrato con lato %.2lf e' %.2lf",lato,area);;
    return 0;
}
