#include <stdio.h>
int main() {
    int T, a, b, c;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("%s\n", a<b&&b<c?"STAIR":(a<b&&b>c?"PEAK":"NONE"));
    }
    return 0;
}