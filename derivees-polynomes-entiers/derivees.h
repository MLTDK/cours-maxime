#pragma once

namespace derivees {


	//Retourne une chaîne de caractères contenant la 
	//dérivée de la fonction polynôme en entrée
	char* deriverPolynome(const char*);

		

	// Retourne un tableau de chaînes contenant
	// les monômes formant le polynôme	
	char** separerPolynome(const char*, int&);
	
	// Créé les coefficiants a et n d'un monôme à partir
	// d'une chaîne de caractères
	void recupererCoeffs(const char*, int&, int&);

	// Retourne une chaîne de caractères pour des coefficients
	// du monôme donné
	char* construireMonome(const int, const int);

	// Dérive les coefficients d'un monôme
	void deriverCoeffs(const int&, const int&, int&, int&);



}
