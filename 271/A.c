#include <stdio.h>
int main() {
    int n, f;
    scanf("%d", &n);
    for(int i=n+1;;i++) {
        f=0;
        int a[10]={0, };
        for(int j=i;j;j/=10) a[j%10]++;
        for(int i=0;i<10;i++) {
            if(a[i]>1) f=1;
        }
        if(!f) {
            printf("%d", i);
            return 0;
        }
    }
}