#include <stdio.h>
int main() {
    char a[55];
    int n, t;
    scanf("%d %d %s", &n, &t, a);
    for(int i=0;i<t;i++) {
        for(int i=n-1;i>0;i--) {
            if(a[i]=='G'&&a[i-1]=='B') {
                a[i]='B';
                a[i-1]='G';
                i--;
            }
        }
    }
    printf("%s", a);
}