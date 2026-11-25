// Règles cellules:
//
// morte -> vivante : 3 cellules vivantes autour d'elle
// vivante -> vivante : 2/3 cellules vivantes autour d'ellle
// vivante -> morte : - 0/1 cellule vivante autour d'elle
//                    - Plus de 3 cellules autour d'elle
// 0 la cellule est morte
// 1 la cellule est vivante
//
// Spécification :
// Tableau, la taille doit peut etre choisi au lancement du programme
// Le jeu, les cellules, la grille sont des classes
// il faut séparer le code fonctionnel, de la représentation graphique
// le programme s'arrete quand il n'y a plus d'évolutions
// On doit enregistrer l'état de la grille après chaque itération
// Le temps en les itérations peut etre modifier
//
// Bonus :
// création de cellule obstacle
// les extrémités de la grille sont considéré comme voisine
// Utilisation de motifs existant (glider, blinker)
// Utiliser plusieur Coeur du processeur pour que ce soit plus rapide
