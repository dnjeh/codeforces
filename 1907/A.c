#include <stdio.h>
int main() {
    char a;
    int T, b;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf(" %c%d", &a, &b);
        for(int i=0;i<8;i++) {
            if(b!=i+1) printf("%c%d\n", a, i+1);
            if(a!=i+'a') printf("%c%d\n", i + 'a', b);
        }
    }
}