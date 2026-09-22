#include <stdio.h>
int main() {
    int T, x, a;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d", &x, &a);
        if(x%a) printf("%d\n%d\n", 1, x);
        else {
            printf("2\n");
            for(int i=1;i<x;i++) {
                if(i%a&&(x-i)%a) {
                    printf("%d %d\n", i, x-i);
                    break;
                }
            }
        }
    }
    return 0;
}