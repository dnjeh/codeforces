#include <stdio.h>
int main() {
    int a[1001] = {0, };
    int T, n, t, tcnt;
    scanf("%d", &T);
    for(int _T=1;_T<=T;_T++) {
        scanf("%d", &n);
        tcnt=0;
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(a[t]!=_T) {
                tcnt++;
                a[t]=_T;
            }
        }
        for(int i=tcnt;i<=1000;i++) {
            if(a[i]==_T) {
                printf("%d\n", i);
                break;
            }
        }
    }
}