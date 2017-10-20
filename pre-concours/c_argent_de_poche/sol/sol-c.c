#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
    return (a<b)?a:b;
}

int max(int a, int b) {
    return (a>b)?a:b;
}

int main() {
    int n = 0;
    float l[100010];

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%f", &l[i]);

    float mini = 30.f, maxi = -1.f, mean = 0.f;
    for (int i = 0; i < n; ++i) {
        mini = min(mini, l[i]);
        maxi = max(maxi, l[i]);
        mean += l[i];
    }
    mean = mean / (1.f * n);

    printf("min=%f max=%f mean=%f n=%d\n", mini, maxi, mean, n);
    printf("%.2f\n", (20.f-(maxi-mini))*mean*mean*0.01f);

    return 0;
}

