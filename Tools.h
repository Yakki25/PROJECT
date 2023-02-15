/*
Name: Yakshit Aggarwal
Section: NCC
Email: yaggarwal2@myseneca.ca
Student I'd: 175307214
*/



#ifndef SDDS_TOOLS_H_
#define SDDS_TOOLS_H_

namespace sdds {
	int openFile_r(const char filename[]); // Provided
	void closefile(); // Provided
	int noOfTraces(); // Provided

	// ADD: Declare read prototypes (4 prototypes)


	int read(char package_name[]);
	int read(int& value);
	int read(double& timeinhours);
	int read(char& dayofweek);




	void strCpy(char* des, const char* src); // Provided
	int strLen(const char* s); // Provided
}
#endif 
