#include "derivee.h"
#include <cstdio>
#include "outils_chaine.h"

char** separerMonomes(const char* polynome)
{
    char** monomes;
    monomes[0] = "2x2";
    for (int i = 0; i < tailleChaine(polynome); i++)
    {
        int j = 0;
        printf("%c", polynome[1]);
        while (polynome[j] != '+' && polynome[j] != '-')
        {
            monomes[i][0] = 'e';
            j++;
        }
    }
    return monomes;
}

bool estPresent(char* chaine, const char c, int longueur)
{
    for (int i = 0; i < longueur; i++)
    {
        if (chaine[i] == c)
            return true;
    }

    return false;
}
