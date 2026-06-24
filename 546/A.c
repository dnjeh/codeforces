#include <stdio.h>
int main() {
    int k, n, w, ans=0;
    scanf("%d %d %d", &k, &n, &w);
    printf("%d", w*(w+1)/2*k-n<0?0:w*(w+1)/2*k-n);
}