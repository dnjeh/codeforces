#include <stdio.h>
int main() {
    int k, l, m, n, d, ans=0;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
    for(int i=1;i<=d;i++) {
        if(!(i%k)||!(i%l)||!(i%m)||!(i%n)) ans++;
    }
    printf("%d", ans);
}