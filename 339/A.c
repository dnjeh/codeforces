#include <stdio.h>
int main() {
    char t[110];
    int a[3]={0, };
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(t[i]=='1') a[0]++;
        else if(t[i]=='2') a[1]++;
        else if(t[i]=='3') a[2]++;
    }
    for(;a[0];) {
        printf("1");
        a[0]--;
        if(a[0]||a[1]||a[2]) printf("+");
    }
    for(;a[1];) {
        printf("2");
        a[1]--;
        if(a[1]||a[2]) printf("+");
    }
    for(;a[2];) {
        printf("3");
        a[2]--;
        if(a[2]) printf("+");
    }
}