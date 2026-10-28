#include <stdio.h>
int main() {
    int T, a, b, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d", &a, &b);
        if(a>b) {
            t=a;
            a=b;
            b=t;
        }
        printf("%d\n", a*2<b?b*b:a*a*4);
    }
    return 0;
}