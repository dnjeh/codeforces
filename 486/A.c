#include <stdio.h>
int main() {
    long long int n;
    scanf("%lld", &n);
    printf("%lld", ((n-1)/2+1)*(n%2?-1:1));
}