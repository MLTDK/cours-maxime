#include "pgcd.h"
#include "unit_tests.h"

int pgcd(const int a, const int b) {
	return 0;
}

bool test_pgcd() {
	bool res = true;

	std::cout << "------------------- DEBUT DES TESTS PGCD --------------------------" << std::endl;
	std::cout << "Test 1 :" << std::endl;
	res = tests::assert_equal<int>(pgcd(100, 100), 100) && res;
	std::cout << "-----------------------------------------------------" << std::endl;

	std::cout << "Test 2 :" << std::endl;
	res = tests::assert_equal<int>(pgcd(100, 15), 5) && res;
	std::cout << "-----------------------------------------------------" << std::endl;

	std::cout << "Test 3 :" << std::endl;
	res = tests::assert_equal<int>(pgcd(50, 1), 1) && res;
	std::cout << "-----------------------------------------------------" << std::endl;

	std::cout << "Test 4 :" << std::endl;
	res = tests::assert_equal<int>(pgcd(57, 31), 1) && res;
	std::cout << "------------------- FIN DES TESTS PGCD --------------------------" << std::endl;

	return res;
}