#include <stdio.h>
int main() {
    int T, n, h, l, tcnt, ttcnt, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tcnt=ttcnt=0;
        scanf("%d %d %d", &n, &h, &l);
        if(h>l) {
            t=h;
            h=l;
            l=t;
        }
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(t<=h) ttcnt++;
            else if(t<=l) tcnt++;
        }
        printf("%d\n", tcnt>=ttcnt?(ttcnt):(tcnt+(ttcnt-tcnt)/2));
    }
}