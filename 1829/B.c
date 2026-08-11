#include <stdio.h>
int main() {
    int T, n, t, tans, cnt;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tans=cnt=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(!t) {
                cnt++;
                if(tans<cnt) tans=cnt;
            }
            else cnt=0;
        }
        printf("%d\n", tans);
    }
}