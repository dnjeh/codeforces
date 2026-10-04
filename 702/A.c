#include <stdio.h>
int main() {
    int n, t, max, ncnt=0, pre;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(!i||pre<t) ncnt++;
        else ncnt=1;
        if(!i||ncnt>max) max=ncnt;
        pre=t;
    }
    printf("%d", max);
    return 0;
}