#ifndef DERIVEE_H_INCLUDED
#define DERIVEE_H_INCLUDED

char* derivee(const char*);

// Renvoie un tableau de chaines de caract�res
// repr�sentant les mon�mes extraits d'une cha�ne de caract�res
char** separerMonomes(const char*);

// Renvoie des coefficients d'un mon�me
int* chaineEnInt(const char*);

// Renvoie 2 coefficients correspondant � une d�riv�e
int* coeffDerivee(const int*);

// Renvoie une cha�ne de caract�res � partir de 2 coefficients
char* intEnChaine(const int*);

void assembler();

bool estPresent(char*, char, int);

#endif // DERIVEE_H_INCLUDED
