#include <stdio.h>
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int a[3];
    int T, n, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        a[0]=a[1]=a[2]=0;
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            a[t]++;
        }
        printf("%d\n", a[0]+min(a[2], a[1])+(a[1]-min(a[2], a[1]))/3+(a[2]-min(a[2], a[1]))/3);
    } 
}