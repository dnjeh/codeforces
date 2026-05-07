#include <stdio.h>
int main() {
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(int i=n;i>=1;i--) printf("%d%c", i, i>1?' ':'\n');
    }
}