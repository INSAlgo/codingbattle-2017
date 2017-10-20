#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    char c;

    scanf("%d %d\n%c", &n, &m, &c);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) printf("%c", c);
        printf("\n");
    }

    return 0;
}

