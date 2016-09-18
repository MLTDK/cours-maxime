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

	// Retourne le nombre d'occurences d'un caract�re donn�:
	int nombreOccurences(const char*, const char);

	//Copie une cha�ne vers une autre
	char* copier(const char*);

	//Copie une cha�ne jusqu'� un indice donn�
	char* copier(const char*, const unsigned int);

	//Copie une cha�ne � partir et jusqu'� un indice donn�e
	char* copier(const char*, const unsigned int, const unsigned int);
	
	//Retoure un tableau de cha�nes de caract�res 
	//correspondant � la s�paration de la chaine
	//selon un caract�re donn�
	char** separerChaine(const char*, const char);
}
