#pragma once

#include <iostream>

namespace tests {
	template<typename T>
	bool assert_equal(const T& t_val, const T& t_val_expected) {
		bool is_equal = t_val == t_val_expected;
		char* res = is_equal ? "OK" : "NOK";
		std::cout << "Valeur obtenue =  <" << t_val << "> Valeur attendue = <" << t_val_expected << ">  (" << res << ")" << std::endl;

		return is_equal;
	}
}
