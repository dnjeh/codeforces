#include <stdio.h>
int max(int a, int b) {
    return a>b?a:b;
}
int main() {
    int T, a, b, c, n, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d %d %d", &a, &b, &c, &n);
        t=max(max(a, b), c);
        t=(n-(t*3-a-b-c));
        if(t>=0&&!(t%3)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}