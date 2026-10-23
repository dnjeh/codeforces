#include <stdio.h>
int main() {
    int a[100];
    int T, n, min, minc, f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
            if(!i||min>a[i]) {
                min=a[i];
                minc=0;
            }
            if(min==a[i]) minc++;
        }
        if(minc==n) {
            printf("-1\n");
            continue;
        }
        printf("%d %d\n", minc, n-minc);
        for(int i=0;i<minc;i++) {
            printf("%d%c", min, i+1<minc?' ':'\n');
        }
        f=0;
        for(int i=0;i<n;i++) {
            if(a[i]!=min) {
                if(f) printf(" ");
                printf("%d", a[i]);
                f=1;
            }
        }
        printf("\n");
    }
    return 0;
}