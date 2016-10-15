#ifndef DERIVEE_H_INCLUDED
#define DERIVEE_H_INCLUDED

char* derivee(const char*);

// Renvoie un tableau de chaines de caractères
// représentant les monômes extraits d'une chaîne de caractères
char** separerMonomes(const char*);

// Renvoie des coefficients d'un monôme
int* chaineEnInt(const char*);

// Renvoie 2 coefficients correspondant à une dérivée
int* coeffDerivee(const int*);

// Renvoie une chaîne de caractères à partir de 2 coefficients
char* intEnChaine(const int*);

void assembler();

bool estPresent(char*, char, int);

#endif // DERIVEE_H_INCLUDED
