#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("I ");
    for(int i=0;i<n;i++) {
        if(!i) printf("hate ");
        else if(!(i%2)) printf("that I hate ");
        else printf("that I love ");
    }
    printf("it");
}