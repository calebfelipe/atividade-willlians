/* CALEB FELIPE LABRE LIMA - RA: 0027720 */

#include <stdio.h>

int main() {
float media;
printf("Digite a media: ");
scanf("%f",&media);
if(media>=7)
 printf("Aprovado");
else if(media>=5)
 printf("Recuperacao");
else
 printf("Reprovado");
return 0;
}
