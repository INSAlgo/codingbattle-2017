def mean(l):
    return sum(l)/len(l)

note = int(input())
mini, maxi = map(int, input().split())
moy = float(input())
n = int(input())
notes = list(map(int, input().split())) + [note]

erreur = False
if note > maxi or note < mini or mini > maxi:
    erreur = True
elif abs(mean(notes) - moy) > 0.02:
    erreur = True
elif mini not in notes or maxi not in notes:
    erreur = True

if erreur:
    print('Jack ! Viens ici !')
else:
    print('RAS')

