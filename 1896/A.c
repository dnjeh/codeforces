#include <stdio.h>
int main() {
    int a[10];
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
        }
        if(a[0]==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}