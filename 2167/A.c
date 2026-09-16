#include <stdio.h>
int main() {
    int T, a, b, c, d;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%s\n", a==b&&b==c&&c==d?"YES":"NO");
    }
}