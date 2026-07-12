#include <stdio.h>
int main() {
    int n, min, max, mini, maxi, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(!i||t>max) {
            max=t;
            maxi=i;
        }
        if(!i||t<=min) {
            min=t;
            mini=i;
        }
    }
    printf("%d", maxi+(n-1-mini)-(maxi>mini?1:0));
}