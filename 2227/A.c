#include <stdio.h>
int main() {
    int t, a, b;
    scanf("%d", &t);
    for(int i=0;i<t;i++) {
        scanf("%d %d", &a, &b);
        printf("%s\n", a%2+b%2<=1?"YES":"NO");
    }
}