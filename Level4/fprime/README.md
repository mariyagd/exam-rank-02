```
Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
```
### Qu'est ce que la décomposition en facteurs premiers ? (Définition)
En mathématiques, la décomposition en produit de facteurs premiers (aussi connue comme la factorisation entière en nombres premiers) consiste à écrire un entier strictement positif sous forme d'un produit de nombres premiers.

Cette factorisation est unique et **existe pour tous les nombres** et a de nombreuses applications notamment en cryptographie.

### Comment décomposer un nombre en produit de facteurs de nombres premiers ?
Pour trouver la décomposition en produit de facteurs premiers d'un nombre N il n'existe pas de formule mathématique. Pour y parvenir, il existe des algorithmes dont le plus basique tente de diviser le nombre N par l'ensemble des facteurs premiers p qui sont inférieurs à N. Si p est un diviseur de N alors recommencer en prenant un nouveau N = N /p tant qu'il reste des diviseurs premier envisageables.

Le problème avec les méthodes (ou algorithmes) de décompositions en nombres premiers est qu'elles sont très longues lorsque les nombres sont très grands. Dès que les facteurs ont plusieurs dizaines de chiffres et ne sont pas triviaux, plusieurs minutes voire heures voire jours de calculs peuvent être nécessaires, même pour les plus puissants ordinateurs.
