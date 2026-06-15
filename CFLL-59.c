/* CALEB FELIPE LABRE LIMA - RA: 0027720 */

#include <stdio.h>

int main() {
char d; scanf(" %c",&d); switch(d){ case 'N': printf("Seguir para o Norte"); break; case 'S': printf("Seguir para o Sul"); break; case 'L': printf("Virar a Leste"); break; case 'O': printf("Virar a Oeste"); break; default: printf("Comando invalido"); }
return 0;
}
