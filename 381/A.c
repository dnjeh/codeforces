#include <stdio.h>
int main() {
    int a[1000], l=0, r, fans=0, sans=0;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    r=n-1;
    for(int i=0;l<=r;i++) {
        if(!(i%2)) fans+=a[l]>a[r]?a[l++]:a[r--];
        else sans+=a[l]>a[r]?a[l++]:a[r--];
    }
    printf("%d %d", fans, sans);
}