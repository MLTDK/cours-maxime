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

	// Retourne le nombre d'occurences d'un caractère donné:
	int nombreOccurences(const char*, const char);

	//Copie une chaîne vers une autre
	char* copier(const char*);

	//Copie une chaîne jusqu'à un indice donné
	char* copier(const char*, const unsigned int);

	//Copie une chaîne à partir et jusqu'à un indice donnée
	char* copier(const char*, const unsigned int, const unsigned int);
	
	//Retoure un tableau de chaînes de caractères 
	//correspondant à la séparation de la chaine
	//selon un caractère donné
	char** separerChaine(const char*, const char);
}
