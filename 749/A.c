#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n/2);
    for(int i=0;i<n/2;i++) {
        printf("%d", i+1>=n/2&&n%2?3:2);
        if(i+1<n/2) printf(" ");
    }
}