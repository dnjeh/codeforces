#include <stdio.h>
int main() {
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        if(n/2%2) {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
        for(int i=0;i<n/2;i++) {
            printf("%d ", (i+1)*2);
        }
        for(int i=0;i<n/4;i++) {
            printf("%d ", i*2+1);
        }
        for(int i=n/4+1;i<n/2+1;i++) {
            printf("%d%c", i*2+1, i+1<n/2+1?' ':'\n');
        }
    }
}