#include <stdio.h>
int main() {
    int T, n, odd, even, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        odd=even=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(t%2) odd++;
            else even++;
        }
        printf("%s\n", odd%2?"NO":"YES");
    }
}