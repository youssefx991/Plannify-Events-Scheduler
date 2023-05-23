#pragma once
#pragma once
#include <iostream>
#include <time.h> // to access current time 
#include <string>

class Date
{
private:

	// attributes
	int year;
	int month;
	int day;
	int hour;
	int minute;


	time_t t = time(nullptr); // variable to carry (current time - 1900) in form of seconds only 
	struct tm date; // variable to carry the value of (current time - 1900) separated to years-months-days-hours-minutes-seconds


public:
	// constructors
	Date();
	Date(int, int, int);
	Date(int, int, int, int, int);

	// overloading operators
	bool operator<(const Date& rhs) const;
	bool operator>(const Date& rhs) const;

	bool operator<(const struct tm& rhs) const;
	bool operator>(const struct tm& rhs) const;

	bool operator<=(const Date& rhs) const;
	bool operator>=(const Date& rhs) const;

	bool operator==(const Date& rhs) const;

	std::string toStringDate();
	void deStringDate(std::string str);



	// getters
	int getYear() const;
	int getMonth() const;
	int getDay() const;
	int getHour() const;
	int getMinute() const;

	// setters
	void setYear(int year);
	void setMonth(int month);
	void setDay(int day);
	void setHour(int hour);
	void setMinute(int minute);






	//friend std::ostream& operator << (std::ostream& out, const Date& d); // friend functions can be used outside class, can access private, protected and public members
	//friend std::istream& operator >> (std::istream& in, Date& d);       // .............................................................................................

};

//std::fstream fms("events.txt", std::ios::out); // Open file for writing
//if (fms.good()) { // Check if file was opened successfully
//	std::cout << "successfully opened fms to write in events.txt\n";
//	for (auto userit = userList.begin(); userit != userList.end(); userit++) {
//		for (auto eventit = userit->first.events.begin(); eventit != userit->first.events.end(); eventit++) {
//			fms << eventit->toStringEvent() << std::endl; //print to the file the string of the event object
//		}
//		while (!userit->second.deleted_events.empty()) { // check if the current user's stack is not empty
//			fms << userit->second.deleted_events.top().toStringEvent() << std::endl; // print to the file the string of the event object
//			userit->second.deleted_events.pop(); // and then pop the top event
//		}
//	}
//	fms.close(); // Close the file
//}
//else {
//	std::cout << "Error opening events.txt to write to\n";
//}