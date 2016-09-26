#include "derivees.h"
#include "outils_chaine.h"
namespace derivees {
	
	char* deriverPolynome(const char* fonction) {
		// TO-DO
		return nullptr;
	}
	char** separerPolynome(const char *chaine, int &nombre_monomes)
	{
		//Calculer le nombre de monômes
		int taille = outils_chaine::tailleChaine(chaine);
		nombre_monomes = 0;
		for (int i = 1; i < taille; ++i) { // Attention! On commence à i = 1
			if (chaine[i] == '+' || chaine[i] == '-') nombre_monomes++;
		}
		nombre_monomes++;

		char** resultat = new char*[nombre_monomes];

		//Separer la chaîne en monômes
		int previous_position = 0;
		int indice_signe = 0;
		int monome_courrant = 0;
		for (int i = 1; i < taille; ++i) {
			if (chaine[i] == '+' || chaine[i] == '-') {
				indice_signe = i;
				resultat[monome_courrant] = outils_chaine::copier(chaine, previous_position, indice_signe);
				previous_position = indice_signe;
				monome_courrant++;
			}
		}

		resultat[monome_courrant] = outils_chaine::copier(chaine, previous_position, taille);

		return resultat;

	}

	void recupererCoeffs(const char *, int &, int &)
	{
		// TO-DO
	}

	char * construireMonome(const int, const int)
	{
		// TO-DO
		return nullptr;
	}

	void deriverCoeffs(const int & a_entree, const int & n_entree, int &a_derive, int &n_derive)
	{
		if (n_entree == 0) {
			n_derive = 0;
			a_derive = 0;			
		}
		else {
			a_derive = a_entree*n_entree;
			n_derive = n_derive - 1;
		}

	}
}