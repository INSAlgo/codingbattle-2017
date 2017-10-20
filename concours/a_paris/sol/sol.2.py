def median(l):
    if len(l) % 2 == 1:
        return sorted(l)[len(l) // 2]
    else:
        s = sorted(l)
        return (s[len(l) // 2 - 1] + s[len(l) // 2]) / 2

p = int(raw_input())
n = raw_input()
l = list(map(int, raw_input().split()))

if median(l) < p:
    print 'Parie !'
else:
    print 'Jockey suivant !'

