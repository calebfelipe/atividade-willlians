/* CALEB FELIPE LABRE LIMA - RA: 0027720 */

#include <stdio.h>
int main() {
int n, primo=1; printf("Numero: "); scanf("%d",&n); for(int i=2;i<n;i++) if(n%i==0) primo=0; if(primo) printf("Primo"); else printf("Nao primo");
return 0;
}
