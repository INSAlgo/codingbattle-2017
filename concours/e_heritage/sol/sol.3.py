
prev = input()
n = int(input())

rel = {}
for _ in range(n - 1):
    a, b = input().split()
    if a not in rel:
        rel[a] = [b]
    else:
        rel[a].append(b)

d = int(input())
dead = set()
for _ in range(d):
    dead.add(input())

# On part du monarque juste décédé
a_voir = [prev]
vus = []
while len(a_voir) > 0:
    current = a_voir.pop()
    
    if current in vus: continue
    vus.append(current)

    # Ajoute tous les ancetres à ceux à voir
    for key in rel.keys():
        if current in rel[key] and key not in vus:
            # Cette condition est lente, mais suffisante
            # pour les tests. Ça serait une bonne exercice
            # que d'essayer d'améliorer ses performances !
            a_voir.append(key)

    if current not in dead:
        # On a trouvé l'héritier
        print('God save', current)
        break

    if current in rel:
        for r in reversed(rel[current]):
            a_voir.append(r)


