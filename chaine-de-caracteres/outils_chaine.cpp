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

	int nombreOccurences(const char *chaine, const char c)
	{
		int nombre_occurences = 0;
		int taille_chaine = tailleChaine(chaine);
		for (int i = 0; i < taille_chaine; i++) {
			if (chaine[i] == c) nombre_occurences++;
		}

		return nombre_occurences;
	}

	char* copier(const char* source) {
		int taille = tailleChaine(source);
		char* dest = new char(taille + 1);
		for (int i = 0; i <= taille;i++) {
			dest[i] = source[i];
		}

		return dest;
	}

	char * copier(const char* source, const unsigned int pos)
	{
		int taille = tailleChaine(source);
		if (pos <= taille) taille = pos;
		char* dest = new char(taille + 1);
		for (int i = 0; i < taille;i++) {
			dest[i] = source[i];
		}
		dest[taille] = '\0';

		return dest;

	}

	char * copier(const char *source, const unsigned int debut, const unsigned int fin)
	{
		int taille = tailleChaine(source);
		int idx_from, idx_to;
		if (debut > fin) {
			idx_from = fin;
			idx_to = debut;
		}
		else {
			idx_from = debut;
			idx_to = fin;
		}

		if (idx_to >= taille) { idx_to = taille; }
		if (idx_from >= taille) { idx_from = taille; }

		int taille_dest = (idx_to - idx_from) + 1; // +1 Pour le '\0'

		char* dest = new char(taille_dest);
		for (int i = idx_from; i <= idx_to;i++) {
			dest[i - idx_from] = source[i];
		}

		dest[taille_dest - 1] = '\0';

		return dest;
	}

	char** separerChaine(const char* chaine, const char c) {
		int nombre_occurences = 0;
		int taille_chaine = tailleChaine(chaine);
		for (int i = 0; i < taille_chaine; i++) {
			if (chaine[i] == c) nombre_occurences++;
		}

		// Si le caractère n'est pas dans la chaîne on renvoie la chaîne entière
		if (nombre_occurences == 0) {
			char** ret = new char*[1];
			ret[0] = copier(chaine);
			return ret;
		}
		else {
			char** ret = new char*[nombre_occurences + 1];
			int nombre_ajouts = 0;
			int previous_pos = 0;

			for (int i = 0; i < taille_chaine; i++) {
				if (chaine[i] == c) {
					ret[nombre_ajouts] = copier(chaine, previous_pos, i);
					nombre_ajouts++;
					previous_pos = i + 1;
				}
				ret[nombre_ajouts] = copier(chaine, previous_pos, taille_chaine);
			}

			return ret;
		}

	}

	int convertirEnEntier(const char* chaine) {
		int taille = tailleChaine(chaine);

		int resultat = 0;
		int puissance = 1;
		for (int i = taille - 1; i >= 0; i--) {
			if (chaine[i] >= '0' && chaine[i] <= '9') {
				resultat += puissance*(chaine[i] - '0');
				puissance *= 10;
			}
			else if (chaine[i] == '-') {
				resultat *= (-1);
			}
		}

		return resultat;
	}

}
