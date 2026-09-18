#include <stdio.h>
int main() {
    int T, h, s;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d", &h, &s);
        printf("%d\n", 1440-h*60-s);
    }
}