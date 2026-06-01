#include <stdio.h>
int main() {
    int T, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &t);
        printf("%d\n", t%2?0:t/4+1);
    }
}