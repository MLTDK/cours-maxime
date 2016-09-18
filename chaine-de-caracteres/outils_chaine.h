#pragma once

namespace outils_chaine {

	// Retourne la taille d'une cha�ne style C (finissant par '\0')
	int tailleChaine(const char*);

	// Retourne 1 si la cha�ne est un palindrome, 0 le cas contraire
	bool estPalindrome(const char*);

	// Retourne 1 si la cha�ne contient un caract�re donn�, 0 le cas contraire
	bool contientCaractere(const char*, const char);

	// Retourne le nombre de voyelles d'une chapine de caract�re
	int nombreVoyelles(const char*);	
}
