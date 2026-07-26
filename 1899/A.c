#include <stdio.h>
int main() {
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        printf("%s\n", n%3?"First":"Second");
    }
}