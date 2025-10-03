#include <stdio.h>

int main() {
    int T;
    printf("Nhap bo test:"); 
    scanf("%d", &T);

    const int A = 145; 
    const int B = 180; 
    const int C = 900; 

    while (T--) {
        int N, M, K;
        printf("Nhap N M K:");
        scanf("%d %d %d", &N, &M, &K);

        if (N <= A && (N + M) <= B && (N + M + K) <= C)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
