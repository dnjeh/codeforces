#include <stdio.h>
int main() {
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(int i=0;i<n*3;i++) {
            printf("%d%c", !(i%3)?(i/3+1):(i%3==1?(i/3*2+n+1):(i/3*2+n+2)), i+1==n*3?'\n':' ');
        }
    }
}