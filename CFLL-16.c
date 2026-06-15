/* CALEB FELIPE LABRE LIMA - RA: 0027720 */

#include <stdio.h>

int main() {
int n;
printf("Digite um numero: ");
scanf("%d",&n);
if(n%3==0 && n%5==0)
 printf("Multiplo de 3 e 5");
else if(n%3==0)
 printf("Multiplo de 3");
else if(n%5==0)
 printf("Multiplo de 5");
else
 printf("Nao e multiplo");
return 0;
}
