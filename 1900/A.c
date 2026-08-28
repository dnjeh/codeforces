#include <stdio.h>
int main() {
    char t;
    int T, n, tcnt, tans;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tcnt=tans=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf(" %c", &t);
            if(t=='#'&&tcnt>=3) tans=-1;
            else if(t=='#') {
                tans+=tcnt;
                tcnt=0;
            }
            else tcnt++;
        }
        if(tcnt>=3) tans=-1;
        else tans+=tcnt;
        printf("%d\n", tans<0?2:tans);
    }
    return 0;
}