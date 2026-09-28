# Pseudo code de votre programme

1) Variables données par l'énoncé :
    - Distance entre l'objet et le robot dans les directions x et y (dx et dy)
    - Vitesse du robot sur la route et la surface rocheuse (s1 et s2)
    - La longueur du premier segment sur la route (L1)


2) Variables à déterminer lors de notre programme :
    - La longueur du segment sur la surface rocheuse (L2).
    - La longueur du segment restant sur l'axe y (Z).
    - Le temps des segments 1 et 2 (V1 et V2).


3) Déroulement du programme
- Définition et initialisation des variables connues du point 1.
- Calcul du segment Z en soustrayant L1 à dy.
- Calculer la longueur L2 à l’aide du théorème de Pythagore avec Z et dx.
- Calcul des temps effectués sur les deux segments (T1 et T2).
- Calculer le temps total T en additionnant T1 et T2.
- OUTPUT du temps total nécessaire au robot pour atteindre l’objet.

4)   OUTPUT Fin du programme 

