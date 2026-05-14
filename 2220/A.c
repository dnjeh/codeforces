#include <stdio.h>
int main() {
    int a[101]={0, };
    int T, n, t, f;
    scanf("%d", &T);
    for(int _T=1;_T<=T;_T++) {
        f=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(!f&&a[t]==_T) {
                printf("-1");
                f=1;
            }
            a[t]=_T;
        }
        if(!f) for(int i=100;i>=1;i--) {
            if(a[i]==_T) {
                if(f) printf(" ");
                printf("%d", i);
                f=1;
            }
        }
        printf("\n");
    }
}