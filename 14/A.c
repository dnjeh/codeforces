#include <stdio.h>
int main() {
    char t[50][55];
    int n, m, mini=60, minj=60, maxi=-1, maxj=-1;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf(" %s", t[i]);
        for(int j=0;t[i][j];j++) {
            if(t[i][j]=='*') {
                if(mini>i) mini=i;
                if(minj>j) minj=j;
                if(maxi<i) maxi=i;
                if(maxj<j) maxj=j;
            }
        }
    }
    for(int i=mini;i<=maxi;i++) {
        for(int j=minj;j<=maxj;j++) {
            printf("%c", t[i][j]);
        }
        printf("\n");
    }
}