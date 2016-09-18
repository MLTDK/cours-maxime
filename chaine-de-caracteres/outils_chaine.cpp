#include "outils_chaine.h"

namespace outils_chaine {
	int tailleChaine(const char* chaine) {
		int taille = 0;
		while (chaine[taille] != '\0') {
			taille++;
		}

		return taille;
	}

	bool estPalindrome(const char* chaine)
	{
		int taille = tailleChaine(chaine);
		for (int i = 0; i < taille; i++)
		{
			if (chaine[i] != chaine[taille - 1 - i]) return false;
		}

		return true;
	}


	bool contientCaractere(const char* chaine, const char c) {
		int taille = tailleChaine(chaine);
		for (int i = 0; i < taille; i++) {
			if (chaine[i] == c) return true;
		}

		return false;
	}


	int nombreVoyelles(const char* chaine) {
		int taille = tailleChaine(chaine);
		int nombre_voyelles = 0;
		for (int i = 0; i < taille; i++) {
			if (contientCaractere("aeiouyAEIOUYàâéèêëïîôüÂÊÎÔÛ", chaine[i])) nombre_voyelles++;
		}

		return nombre_voyelles;
	}
}