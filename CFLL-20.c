/* CALEB FELIPE LABRE LIMA - RA: 0027720 */

#include <stdio.h>

int main() {
int ano;
printf("Digite o ano: ");
scanf("%d",&ano);
if((ano%4==0 && ano%100!=0) || ano%400==0)
 printf("Ano bissexto");
else
 printf("Nao e bissexto");
return 0;
}
