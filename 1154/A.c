#include <stdio.h>

int main() {
    int a[4]={0, }, maxi, max;
    for(int i=0;i<4;i++) {
        scanf("%d", &a[i]);
        if(!i||max<a[i]) {
            max=a[i];
            maxi=i;
        }
    }
    for(int i=0;i<4;i++) {
        if(maxi-i) printf("%d ", max-a[i]);
    }
}