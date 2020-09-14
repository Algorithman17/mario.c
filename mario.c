#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        // Saisie de l'utilisateur
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        // Espaces vides gauche
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        
        // Hashs gauche
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        
        // Espaces vides milieu
        for (int l = n - 1; l < n; l++)
        {
            printf("  ");
        }
        // Hashs droite
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}
