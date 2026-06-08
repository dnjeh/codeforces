#include <stdio.h>
int main() {
    int n, m, pre, t, rpre, f=0;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) { 
        for(int j=0;j<m;j++) {
            scanf("%01d", &t);
            if(j&&pre!=t) f=1;
            if(i&&rpre==t) f=1;
            pre=t;
        }
        rpre=t;
    }
    printf("%s", f?"NO":"YES");
}