#include <iostream>
#include <string>
#include "outils_chaine.h"
#include "derivees.h"
using namespace std;

namespace tests {
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
	tests::assert<int>(outils_chaine::nombreVoyelles("Îles Féroë"), 5);
	tests::assert<bool>(outils_chaine::contientCaractere("Je ne contiens pas la lettre Z minuscule",'z'), false);
	tests::assert<int>(outils_chaine::convertirEnEntier("-00532"), -532);

	//Ce code est ajouté pour que le programme ne se termine pas abruptement	
	cout << "Press any key to exit" << endl;
	getchar();


	return 0;
}