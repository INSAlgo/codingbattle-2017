def mean(l):
    return sum(l)/len(l)

input()
notes = list(map(float, input().split()))
a = mean(notes)
print('%.2f' % round(((20-max(notes)+min(notes))*a*a/100), 2))

