#include <stdio.h>
int main() {
    int a[500];
    int T, n, tmax=0, tcnt=0, min, mini, minj, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tmax=tcnt=min=mini=minj=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
            if(!i||tmax<a[i]) tmax=a[i];
            if(tmax==i+1) tcnt++;
        }
        min=tcnt;
        for(int i=0;i<n-1;i++) for(int j=i+1;j<n;j++) {
            tmax=tcnt=0;
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            for(int k=0;k<n;k++) {
                if(!k||tmax<a[k]) tmax=a[k];
                if(tmax==k+1) tcnt++;
            }
            if(min>tcnt) {
                min=tcnt;
                mini=i;
                minj=j;
            }
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        for(int i=0;i<n;i++) {
            printf("%d%c", (mini+minj)&&(mini==i||minj==i)?(mini==i?a[minj]:a[mini]):a[i], i+1>=n?'\n':' ');
        }
    }
}