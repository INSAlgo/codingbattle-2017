# Coding Battle 2017 – Shaker

Voici les problèmes de la Coding Battle, ainsi que de la phase d'entraînement. Ceux-ci ont été imaginés et écrits par INSAlgo.

Les problèmes couverts étaient assez divers :

* **Coding Battle – Échauffement**
    - **A. « Dis “Papa” ! »**, qui consistait à afficher ce que le père de Ada lui demandait de dire.
    - **B. Rectangle**, qui consistait à dessiner un rectangle de dimensions données avec un caractère donné.
    - **C. Argent de poche**, qui consistait à calculer une formule comprenant le minimum, le maximum et la moyenne d'une liste.
    - **D. Combinaison**, qui consistait à lister toutes les solutions d'une équation à deux inconnues *a* et *b*, sachant que la concaténation de *a* et *b* doit faire une certaine taille. (Pour l'anecdote, nous avons écrit ce problème afin de tester à grande échelle le comportement de la plateforme contre les solutions qui dépassent les limites de temps, comme c'est le cas des solutions naïves testant toutes les valeurs de *a* et *b*).

* **Coding Battle**
    - **A. Paris**, qui consistait à calculer la médiane d'une liste de nombres et de la comparer avec un nombre donné en entrée.
    - **B. Bulletin**, qui consistait à vérifier la cohérence des informations sur un contrôle : min de classe, max de classe, moyenne de classe,…
    - **C. Analexes**, qui consistait à vérifier si deux textes sont des analexes, c'est-à-dire deux phrases dont l'une est une permutation de l'autre.
    - **D. Fractale**, qui consistait à dessiner une fractale donnée à un rang donné.
    - **E. Héritage**, qui consistait à dire qui est le prochain sur l'ordre de succession à la couronne britanique.
    - **F. Oktoberfest**, qui consistait à déterminer le volume maximal atteignable en appliquant successivement des opérations sur deux volumes, sachant que le volume total ne doit pas dépasser un certain seuil.

Les solutions disponibles sont celles que nous avons écrites. Il y a souvent de nombreux moyens de résoudre un problème, nos solutions ne sont donc que des propositions.

## Comment tester avec les entrées / sorties fournies

La plateforme de la Coding Battle ne sera pas relancée. Cela est dû à plusieurs raisons : nous sommes une association étudiante dont l'organisation de concours n'est pas le motif principal et cela demanderait trop de temps ; pour des raisons de coûts, une telle infrastructure a un prix ; parce que vous n'en avez pas besoin ! 😉

Pour tester vos solutions, vous pouvez utiliser la redirection de flux dans un terminal. Par exemple, sous Linux (sous Windows la syntaxe est similaire, et l'Internet foisonne de tutoriels et de posts de forum à ce propos) :

```Shell
# Python
python solution.py < ../input/input0.txt

# C++
./sol < ../input/input0.txt

# JavaScript
js sol.js < ../input/input0.txt

# etc
```

## Conseils généraux

Nous avons eu l'occasion de lire pas mal de vos soumissions, et nous avons reçu beaucoup de questions durant le concours. Voici quelques conseils en vrac, si vous désirez vous améliorer pour la prochaine édition :

* Apprenez à manipuler les entrées / sorties. En effet, tout problème de programmation compétitive ont cela en commun, et bien souvent les entrées / sorties sont les mêmes (récupérer des entiers, des listes de nombres, des chaînes de caractères,…).
* Servez-vous de la bibliothèque standard de votre langage ! En effet, les langages de programmations ne viennent jamais nus. Par exemple, Python possède dans sa bibliothèque standard une fonction `median()` dans le module *statistics*, et tous les langages possèdent des fonctions de tri sur leurs structures de données.


## License

Le contenu de ce dépôt est publié sous license GPL v3.0. Toute contribution par pull request est bien évidemment la bienvenue !

