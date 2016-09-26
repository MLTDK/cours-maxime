#pragma once

namespace derivees {


	//Retourne une cha�ne de caract�res contenant la 
	//d�riv�e de la fonction polyn�me en entr�e
	char* deriverPolynome(const char*);

		

	// Retourne un tableau de cha�nes contenant
	// les mon�mes formant le polyn�me	
	char** separerPolynome(const char*, int&);
	
	// Cr�� les coefficiants a et n d'un mon�me � partir
	// d'une cha�ne de caract�res
	void recupererCoeffs(const char*, int&, int&);

	// Retourne une cha�ne de caract�res pour des coefficients
	// du mon�me donn�
	char* construireMonome(const int, const int);

	// D�rive les coefficients d'un mon�me
	void deriverCoeffs(const int&, const int&, int&, int&);



}
