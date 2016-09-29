#include "pgcd.h"
#include "unit_tests.h"

int pgcd(const int a, const int b) {
	if (a == 0 || b == 0)
        return 0;

	int r = 0, num1 = a, num2 = b;

	do {
        r = num1 % num2;
        num1 = num2;
        num2 = r;
	} while (r != 0);

	return num1;
}

bool test_pgcd() {
	bool res = true;

	std::cout << "=================== DEBUT DES TESTS PGCD ==========================" << std::endl;
	std::cout << "Test 1 :" << std::endl;
	res = tests::assert_equal<int>(pgcd(100, 100), 100) && res;
	std::cout << "-----------------------------------------------------" << std::endl;

	std::cout << "Test 2 :" << std::endl;
	res = tests::assert_equal<int>(pgcd(100, 15), 5) && res;
	std::cout << "-----------------------------------------------------" << std::endl;

	std::cout << "Test 3 :" << std::endl;
	res = tests::assert_equal<int>(pgcd(50, 1), 1) && res;
	std::cout << "-----------------------------------------------------" << std::endl;

	std::cout << "Test  4:" << std::endl;
	res = tests::assert_equal<int>(pgcd(-50,1), 1) && res;
	std::cout << "-----------------------------------------------------" << std::endl;

	std::cout << "Test 5 :" << std::endl;
	res = tests::assert_equal<int>(pgcd(0, 0), 0) && res;
	std::cout << "-----------------------------------------------------" << std::endl;

	std::cout << "Test 6 :" << std::endl;
	res = tests::assert_equal<int>(pgcd(57, 31), 1) && res;
	std::cout << "=================== FIN DES TESTS PGCD ==========================" << std::endl;
	std::cout << "\n\n" << std::endl;
	return res;
}
