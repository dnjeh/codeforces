#include <stdio.h>
int main() {
    int T, n, min, max, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        max=min=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(!i||max<t) max=t;
            if(!i||min>t) min=t;
        }
        printf("%d\n", max-min);
    }
    return 0;
}