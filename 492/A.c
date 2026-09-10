#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i=0, j=0;n>=0;) {
        i++;
        j+=i;
        n-=j;
    }
    printf("%d", i-1);
}