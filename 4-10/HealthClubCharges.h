#pragma once

class HealthClubCharges {



public:

	void displayMenu();
	void calcHCM();


private:


	// Constants for membership rates
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

	int choice;           // Menu choice
	int months;           // Number of months
	double charges;       // Monthly charges






};