import re

def split(s):
    return map(str.lower, filter(lambda x: len(x) > 0, re.split("[^a-zA-Zéèàù-]", s)))

a=split(input())
b=split(input())

print('ANALEXES' if sorted(a) == sorted(b) else 'NON')

