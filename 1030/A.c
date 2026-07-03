#include <stdio.h>
int main() {
    int n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t) {
            printf("HARD");
            return 0;
        }
    }
    printf("EASY");
}