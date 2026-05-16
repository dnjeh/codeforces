#include <stdio.h>
int main() {
    int T, n, t, f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        f=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(t==67) f=1;
        }
        printf("%s\n", f?"Yes":"No");
    }
}