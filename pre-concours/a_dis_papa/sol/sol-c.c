#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[500010];

    fgets(s, sizeof(s), stdin);
    printf("%s\n", s + 4);

    return 0;
}

