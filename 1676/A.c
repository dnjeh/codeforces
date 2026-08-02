#include <stdio.h>
int main() {
    int Tol, t, T, tt, tT, Tt, TT;
    scanf("%d", &Tol);
    for(int _T=0;_T<Tol;_T++) {
        scanf("%01d%01d%01d%01d%01d%01d", &t, &T, &tt, &tT, &Tt, &TT);
        printf("%s\n", t+T+tt==tT+Tt+TT?"YES":"NO");
    }
}