#pragma once

class Employee {
	private:
		char name[32];
		short age;
		unsigned int zipcode;
		unsigned int wage;
		int daysWorked;
		int hoursWorkedPerDay[7];
		
	public: 
		void Read();
		void Write();
};

