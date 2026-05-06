#include <stdio.h>
int main() {
    int T, n, a, t, tsum;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        tsum=0;
        scanf("%d %d", &n, &a);
        for(int j=0;j<n;j++) {
            scanf("%d", &t);
            tsum+=t;
        }
        printf("%s\n", (tsum%2||!(a*n%2))?"YES":"NO");
    }
}