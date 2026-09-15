#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    int t=*(int*)a - *(int*)b;
    return t>0?1:t<0?-1:0;
}
int main() {
    int T, n, a[100], f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        f=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(a[0]), compare);
        for(int i=0;!f&&i+1<n;i++) {
            if(a[i]==a[i+1]) {
                printf("NO\n");
                f=1;
            }
        }
        if(!f) printf("YES\n");
    }
}