#include <stdio.h>
int main() {
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        printf("Division %d\n", (n<1400)?4:(n<1600)?3:(n<1900)?2:1);
    }
}