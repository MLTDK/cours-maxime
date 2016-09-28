#pragma once
#include <iomanip>
#include "unit_tests.h"

struct Date {
	int jour, mois, annee, heure, minute, seconde;

	friend std::ostream& operator<<(std::ostream& os, const Date& date) {
		os << std::setw(2) << std::setfill('0') << date.jour << "/"
			<< std::setw(2) << std::setfill('0') << date.mois << "/"
			<< date.annee << " "
			<< std::setw(2) << std::setfill('0') << date.heure << "h"
			<< std::setw(2) << std::setfill('0') << date.minute << "m"
			<< std::setw(2) << std::setfill('0') << date.seconde << "s";
		return os;
	}

	friend bool operator==(const Date& lhs, const Date& rhs) {
		return (lhs.jour == rhs.jour
			&& lhs.mois == rhs.mois
			&& lhs.annee == rhs.annee
			&& lhs.minute == rhs.minute
			&& lhs.seconde == rhs.seconde);
	}

	Date() {
		heure = minute = seconde = 0;
		jour = mois = 1;
		annee = 1970;
	}	

	void incrementerUneSeconde();

};


// Tests unitaires
bool tests_date();