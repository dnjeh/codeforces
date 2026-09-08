#include <stdio.h>
int main() {
    int T, n, t, todd, tevn, tcnt;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        todd=tevn=tcnt=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(t%2) todd++;
            else tevn++;
            tcnt+=i%2!=t%2;
        }
        printf("%d\n", todd+n%2!=tevn||tcnt%2?-1:tcnt/2);
    }
}