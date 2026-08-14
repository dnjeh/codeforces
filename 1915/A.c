#include <stdio.h>
int main() {
    int n, a, b, c;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", a==b?c:(a==c?b:a));
    }
}