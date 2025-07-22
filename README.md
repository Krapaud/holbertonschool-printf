# holbertonschool-printf

## Description

Ce projet est une ré-implémentation simplifiée de la fonction `printf` du langage C. Il permet d'afficher des chaînes de caractères formatées à la sortie standard, en gérant plusieurs types de spécificateurs.

## Fonctions principales

- `_printf(const char *format, ...)` : Affiche une chaîne formatée selon les spécificateurs fournis.
- Prise en charge des spécificateurs courants : `%c`, `%s`, `%d`, `%i`, `%%`, etc.

## Fichiers

- `main.h` : Fichier d'en-tête principal, contient les prototypes et structures.
- `_printf.c` : Fonction principale _printf
- `spec_functions.c` : Fonctions de gestion des spécificateurs (print_char, print_string, print_integer, print_percent)
- `get_spec_functions.c` : Fonction de sélection des spécificateurs
- `README.md` : Ce fichier.
- `.gitignore` : Fichiers à ignorer par git.

## Compilation

Pour compiler le projet :

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

## Utilisation

Exemple d'utilisation dans un programme C :

```c
#include "main.h"

int main(void)
{
    _printf("Hello %s! Number: %d%%\n", "world", 42);
    return (0);
}
```

## Spécificateurs supportés

| Spécificateur | Description |
|---------------|-------------|
| `%c` | Caractère |
| `%s` | Chaîne de caractères |
| `%d` | Entier décimal |
| `%i` | Entier |
| `%%` | Caractère % littéral |

## Auteurs

- MUR Mickael - Nicolai Carabet

## Licence

Projet réalisé dans le cadre de la formation Holberton School. Utilisation personnelle et éducative uniquement.