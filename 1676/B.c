    #include <stdio.h>
    int main() {
        int T, n, tsum, min, t;
        scanf("%d", &T);
        for(int _T=0;_T<T;_T++) {
            tsum=min=0;
            scanf("%d", &n);
            for(int i=0;i<n;i++) {
                scanf("%d", &t);
                tsum+=t;
                if(!i||min>t) min=t;
            }
            printf("%d\n", tsum-min*n);
        }
    }