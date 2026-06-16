#include <stdio.h>
int abs(int t) {
    return t<0?t*-1:t;
}
int main() {
    int ans, t;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            scanf("%d", &t);
            if(t) {
                ans=abs(2-i)+abs(2-j);
            }
        }
    }
    printf("%d", ans);
}