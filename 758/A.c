#include <stdio.h>
int main() {
    int n, max=0, sum=0, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t>max) max=t;
        sum+=t;
    }
    printf("%d", (n*max)-sum);
}