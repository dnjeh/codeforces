#include <stdio.h>
int main() {
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(;n/10;) {
            if(n/10%10<n%10) n=n/10;
            else n=n/10-n/10%10+n%10;
        }
        printf("%d\n", n);
    }
}