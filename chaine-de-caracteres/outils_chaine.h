#pragma once

namespace outils_chaine {

	// Retourne la taille d'une chaîne style C (finissant par '\0')
	int tailleChaine(const char*);

	// Retourne 1 si la chaîne est un palindrome, 0 le cas contraire
	bool estPalindrome(const char*);

	// Retourne 1 si la chaîne contient un caractère donné, 0 le cas contraire
	bool contientCaractere(const char*, const char);

	// Retourne le nombre de voyelles d'une chapine de caractère
	int nombreVoyelles(const char*);	
}
