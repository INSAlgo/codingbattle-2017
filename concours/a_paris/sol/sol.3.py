import statistics

p = int(input())
n = input()
l = map(int, input().split())

if statistics.median(l) < p:
    print('Parie !')
else:
    print('Jockey suivant !')

