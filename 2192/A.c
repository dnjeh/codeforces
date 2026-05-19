#include <stdio.h>
int main() {
    char t[110];
    int T, tcnt, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tcnt=0;
        scanf(" %d %s", &n, t);
        for(int i=0;i<n;i++) {
            if(!i||t[i]!=t[i-1]) tcnt++;
        }
        printf("%d\n", tcnt==n||t[0]==t[n-1]?tcnt:tcnt+1);
    }
}