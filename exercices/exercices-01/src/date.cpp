#include "date.h"

void Date::incrementerUneSeconde(){
}

bool tests_date()
{	
	bool res = true;
	Date date1 = Date();
	Date date2 = Date();

	std::cout << "============= DEBUT TESTS DATE ===================" << std::endl;
	std::cout << "Test operateur ==" << std::endl;
	res = tests::assert_equal<Date>(date1, date2) && res; 
	std::cout << "-----------------------------------------------------------" << std::endl;

	std::cout << "============= FIN TESTS DATE ===================" << std::endl;
	std::cout << "\n\n" << std::endl;
	return res;
}
