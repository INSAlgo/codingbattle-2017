def somme(notes):
    mean = sum(notes)/len(notes)
    return float((20.0-(max(notes)-min(notes)))*mean*mean*0.01)

taille = input()
notes = [float(x) for x in input().split()]
print(round(somme(notes),2))

