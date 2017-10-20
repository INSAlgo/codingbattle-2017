# Ce code est une solution en force brute
# qui ne passe pas les tests de performance

from math import sqrt

n, l = map(int, input().split())

c = []
for a in range(1, int(sqrt(n)) + 1):
    for b in range(1, n // 2 + 1):
        if a*a + 2*b == n:
            p = str(a) + str(int(b))
            if len(p) == l:
                c.append(p)

if len(c) == 0:
    print('Zut !')
else:
    print(*sorted(c), sep='\n')

