#include <stdio.h>
int main() {
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            printf("%d%c", i+1, i+1<n?' ':'\n');
        }
    }
}