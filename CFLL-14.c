/* CALEB FELIPE LABRE LIMA - RA: 0027720 */

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Digite os lados: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c)
        printf("Triangulo Equilatero");
    else if(a==b || a==c || b==c)
        printf("Triangulo Isosceles");
    else
        printf("Triangulo Escaleno");
    return 0;
}
