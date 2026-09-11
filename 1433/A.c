#include <stdio.h>
int fun(int t) {
    int ret=0;
    for(;t;t/=10, ret++);
    return ret; 
}
int main() {
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        printf("%d\n", (n%10-1)*10+fun(n)*fun(n*10)/2);
    }
    return 0;
}