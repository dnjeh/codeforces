#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char t[100], tt[100];
    int T, n, m, f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        f=0;
        scanf(" %d %d %s %s", &n, &m, t, tt);
        for(int i=0;strlen(t)<=50;i++, strncat(t, t, strlen(t))) {
            if(strstr(t, tt)) {
                printf("%d\n", i);
                f=1;
                break;
            }
        }
        if(!f) printf("-1\n");
    }
    return 0;
}
