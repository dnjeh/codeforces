#include <stdio.h>
int main() {
    int T, a, b, c;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("%s\n", a+b>=10||b+c>=10||a+c>=10?"YES":"NO");
    }
}