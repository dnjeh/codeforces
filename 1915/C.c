#include <stdio.h>
#include <math.h>
int main() {
    long long int sum=0;
    int T, n, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        sum=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            sum+=t;
        }
        if(llround(sqrt(sum))*llround(sqrt(sum))==sum) printf("YES\n");
        else printf("NO\n");
    }
}