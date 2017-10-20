# coding=utf-8
from math import sqrt

v = int(input())
iva = int(input())
ivb = int(input())

vus = set()
a_faire = [(iva, ivb)]
v_max = iva + ivb

while len(a_faire) > 0:
    va, vb = a_faire.pop()

    # Pas de mélange qui ne rentre pas dans le volume total
    if va + vb > v:
        continue

    # Ne parcourt pas deux fois le même noeud
    if (va, vb) in vus:
        continue
    vus.add((va, vb))

    # Regarde si le volume actuel est meilleur
    v_max = max(v_max, va + vb)
    if v_max == v:
        break

    # Ajoute les noeuds dans a_faire
    a_faire.append((int(sqrt(va)), int(sqrt(vb))))
    a_faire.append((va*va*va, vb*vb))
    a_faire.append((va*va, vb*vb*vb))

print(v_max)
