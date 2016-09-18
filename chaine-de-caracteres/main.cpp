#include <iostream>
#include "outils_chaine.h"
using namespace std;

namespace tests {
	
	// Fonction qui compare deux valeurs:
	// La premi�re valeur est celle calcul�e par la fonction � tester
	// La seconde est la valeur esp�r�e	
	template<typename T>
	void assert(const T& val, const T& expected_val) {
		cout << "Received : " << val << " Expected : " << expected_val;
		if (val == expected_val) cout << "  (OK)" << endl;
		else cout << "  (Test failed)" << endl;

		return;
	}
}

int main(void)
{

	//Tests:
	char* mot_palindrome = "level";
	char* mot_non_palindrome = "salut";
	
	tests::assert<bool>(outils_chaine::estPalindrome(mot_palindrome), true);
	tests::assert<bool>(outils_chaine::estPalindrome(mot_non_palindrome), false);
	tests::assert<int>(outils_chaine::tailleChaine(mot_palindrome), 5);
	tests::assert<int>(outils_chaine::nombreVoyelles("�les F�ro�"), 5);
	tests::assert<bool>(outils_chaine::contientCaractere("Je ne contiens pas la lettre Z minuscule",'z'), false);


	

	//Ce code est ajout� pour que le programme ne se termine pas abruptement	
	cout << "Press any key to exit" << endl;
	getchar();


	return 0;
}