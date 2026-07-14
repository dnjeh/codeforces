#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n/100+n%100/20+n%20/10+n%10/5+n%5);
}