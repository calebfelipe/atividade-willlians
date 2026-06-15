/* CALEB FELIPE LABRE LIMA - RA: 0027720 */

#include <stdio.h>
int main() {
    int ac,lc,cc,ab,lb,cb;
    int total;
    printf("Dimensoes do caminhao: ");
    scanf("%d %d %d",&ac,&lc,&cc);

    printf("Dimensoes da caixa: ");
    scanf("%d %d %d",&ab,&lb,&cb);

    total=(ac/ab)*(lc/lb)*(cc/cb);
    printf("Cabem %d caixas", total);
    return 0;
}
