# holbertonschool-printf

## Description

Ce projet est une ré-implémentation simplifiée de la fonction `printf` du langage C. Il permet d'afficher des chaînes de caractères formatées à la sortie standard, en gérant plusieurs types de spécificateurs.

## Fonctions principales

- `_printf(const char *format, ...)` : Affiche une chaîne formatée selon les spécificateurs fournis.
- Prise en charge des spécificateurs courants : `%c`, `%s`, `%d`, `%i`, `%%`, etc.

## Fichiers

- `main.h` : Fichier d'en-tête principal, contient les prototypes et structures.
- `*.c` : Fichiers sources de l'implémentation.
- `README.md` : Ce fichier.
- `.gitignore` : Fichiers à ignorer par git.

## Compilation

Pour compiler le projet :

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

## Utilisation

Exemple d'utilisation dans un programme C :

```c
#include "main.h"

int main(void)
{
    _printf("Hello %s! Number: %d%%\n", "world", 42);
    return (0);
}
```

## Auteurs

- MUR Mickael - Nicolai Carabet

## Licence

Projet réalisé dans le cadre de la formation Holberton School. Utilisation personnelle et éducative uniquement.