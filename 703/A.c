#include <stdio.h>
int main() {
    int n, a, b, ans=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &a, &b);
        ans+=(a>b)-(a<b);
    }
    printf("%s", !ans?"Friendship is magic!^^":(ans<0?"Chris":"Mishka"));
    return 0;
}