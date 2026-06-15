/* CALEB FELIPE LABRE LIMA - RA: 0027720 */

#include <stdio.h>
#include <string.h>

int main() {
char usuario[20], senha[20];
printf("Usuario: ");
scanf("%s",usuario);
printf("Senha: ");
scanf("%s",senha);
if(strcmp(usuario,"admin")==0 && strcmp(senha,"1234")==0)
 printf("Acesso permitido");
else
 printf("Acesso negado");
return 0;
}
