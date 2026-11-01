#include <stdio.h>
int main() {
    int a[100];
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
        }
        if(a[0]==a[n-1]) printf("NO\n");
        else {
            printf("YES\n");
            printf("%d ", a[0]);
            for(int i=n-1;i>0;i--) {
                printf("%d%c", a[i], i>1?' ':'\n');
            }
        }
    }
    return 0;
}