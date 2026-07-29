#include <stdio.h>
int main() {
    int n, t, min, max, ans=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(!i) min=max=t;
        else {
            if(t<min) {
                min=t;
                ans++;
            }
            if(t>max) {
                max=t;
                ans++;
            }
        }
    }
    printf("%d", ans);
}