from math import sqrt

n, l = map(int, input().split())

c = []
for a in range(1, int(sqrt(n)) + 1):
    b = (n - a * a) / 2
    if  b > 0 and a*a+2*int(b) == n:
        p = str(a) + str(int(b))
        if len(p) == l:
            c.append(p)

if len(c) == 0:
    print('Zut !')
else:
    print(*sorted(c), sep='\n')

