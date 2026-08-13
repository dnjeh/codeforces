#include <stdio.h>
int main() {
    int T, n, a, b, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        scanf("%d %d %d", &a, &b, &t);
        if(a!=b) {
            if(a==t) printf("2\n");
            else {
                a=b;
                printf("1\n");
            }
        }
        else if(a!=t) printf("3\n");
        for(int i=3;i<n;i++) {
            scanf("%d", &t);
            if(t!=a) {
                printf("%d\n", i+1);
            }
        }
    }
}