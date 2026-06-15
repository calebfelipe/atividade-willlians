/* CALEB FELIPE LABRE LIMA - RA: 0027720 */

#include <stdio.h>

int main() {
float a,b; char op; scanf("%f %c %f",&a,&op,&b); switch(op){ case '+': printf("%.2f",a+b); break; case '-': printf("%.2f",a-b); break; case '*': printf("%.2f",a*b); break; case '/': printf("%.2f",a/b); break; default: printf("Operacao invalida"); }
return 0;
}
