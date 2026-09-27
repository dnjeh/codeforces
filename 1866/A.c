#include <stdio.h>
int abs(int t) {
    return t<0?t*-1:t;
}
int main() {
    int n, t, min;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(!i||min>abs(t)) min=abs(t);
    }
    printf("%d", min);
}