#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    int t=*(int*)a - *(int*)b;
    return t<0?1:t>0?-1:0;
}
int compare2(const void *a, const void *b) {
    int t=*(int*)a - *(int*)b;
    return t>0?1:t<0?-1:0;
}
int main() {
    int a[30], b[30];
    int T, n, k, tans;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tans=0;
        scanf("%d %d", &n, &k);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
        }
        for(int i=0;i<n;i++) {
            scanf("%d", &b[i]);
        }
        qsort(a, n, sizeof(a[0]), compare2);
        qsort(b, n, sizeof(b[0]), compare);
        for(int i=0;i<n;i++) {
            tans+=i<k&&a[i]<b[i]?b[i]:a[i];
        }
        printf("%d\n", tans);
    }
    return 0;
}