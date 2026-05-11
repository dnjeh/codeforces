#include <stdio.h>
int main() {
    int T, a, b, c;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", a/(c/b+1)+(a%(c/b+1)?1:0));
    }
}