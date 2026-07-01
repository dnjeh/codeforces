#include <stdio.h>
int main() {
    int n, t, tt, max=0, now=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        now-=t;
        now+=tt;
        if(now>max) max=now;
    }
    printf("%d", max);
}