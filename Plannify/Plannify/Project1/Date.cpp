#include "Date.h"



// Default Constructor
Date::Date() {
	localtime_s(&date, &t); // function to convert current time from seconds to years-months-days-hours-minutes-seconds

	// default accepted values
	this->year = 1;
	this->month = 1;
	this->day = 1;
	this->hour = 0;
	this->minute = 0;

}

Date::Date(int year, int month, int day)
{
	localtime_s(&date, &t); // function to convert current time from seconds to years-months-days-hours-minutes-seconds
	this->year = year;
	this->month = month;
	this->day = day;
	this->hour = 0;
	this->minute = 0;
	//if (year <= 0 || month <= 0 || day <= 0) {
	//	std::cout << "ERROR - Non Positive Date - Program will exit with code 1" << std::endl;
	//	//exit(1);
	//}
}

// Overloaded Constructor
Date::Date(int year, int month, int day, int hour, int minute) {
	localtime_s(&date, &t); // function to convert current time from seconds to years-months-days-hours-minutes-seconds
	this->year = year;
	this->month = month;
	this->day = day;
	this->hour = hour;
	this->minute = minute;

	// Negativity Check - Note that only minutes and hours can be zero (24 hours format)
	if (year <= 0 || month <= 0 || day <= 0 || hour < 0 || minute < 0 || hour >= 24 || minute >= 60) {

		System::Windows::Forms::MessageBox::Show("ERROR - Non Positive Date - Program will exit with code 1");

		//std::cout << "ERROR - Non Positive Date - Program will exit with code 1" << std::endl;
		//exit(1);
	}

}

// Overloading Insertions Operator << -  os = cout
//std::ostream& operator << (std::ostream& os, const Date& d) {
//	os << d.year << '-' << d.month << '-' << d.day << "\t" << d.hour << ':' << d.minute << std::endl;
//	return os;
//}



// Overloading Extraction Operator >> - is = cin
//std::istream& operator >> (std::istream& is, Date& d)
//{
//	bool isValid = true;
//
//	do {
//		std::cout << "Enter Year: ";
//		is >> d.year;
//		if (d.year <= 0) {
//			std::cout << "ERROR - Negative Year" << std::endl;
//			isValid = false;
//			continue;
//		}
//
//		std::cout << "Enter Month: ";
//		is >> d.month;
//		if (d.month <= 0 || d.month > 60) {
//			std::cout << "ERROR - Ivalid Month" << std::endl;
//			isValid = false;
//			continue;
//		}
//
//		std::cout << "Enter Day: ";
//		is >> d.day;
//		if (d.day <= 0 || d.day > 31) {
//			std::cout << "ERROR - Ivalid Day" << std::endl;
//			isValid = false;
//			continue;
//		}
//
//		std::cout << "Enter Hour: ";
//		is >> d.hour;
//		if (d.hour < 0 || d.hour > 24) {
//			std::cout << "ERROR - Ivalid Hour" << std::endl;
//			isValid = false;
//			continue;
//		}
//
//		std::cout << "Enter Minute: ";
//		is >> d.minute;
//		if (d.minute < 0 || d.minute > 60) {
//			std::cout << "ERROR - Ivalid Minute" << std::endl;
//			isValid = false;
//			continue;
//		}
//
//		isValid = true;
//	} while (!isValid);
//
//	return is;
//}


// Overloading Smaller than Operator < - comparing two Date Objects
bool Date::operator<(const Date& rhs) const { // is this->date < rhs.date ?????
	if (this->year < rhs.year)
		return true;
	else if (this->year > rhs.year) // is this->date > rhs.date ?????
		return false;
	else {		// is this->date == rhs.date ????? if Yes -> do the same with months, if Yes-> do same with days and so on..
		if (this->month < rhs.month)
			return true;
		else if (this->month > rhs.month)
			return false;
		else { // ==
			if (this->day < rhs.day)
				return true;
			else if (this->day > rhs.day)
				return false;
			else { // ==
				if (this->hour < rhs.hour)
					return true;
				else if (this->hour > rhs.hour)
					return false;
				else { // ==
					if (this->minute < rhs.minute)
						return true;
					else if (this->minute > rhs.minute)
						return false;
					else { // ==
						return false;
					}
				}
			}
		}
	}
}

// Overloading Bigger than Operator > - comparing two Date Objects
bool Date::operator>(const Date& rhs) const { // is this->date > rhs.date ?????
	if (this->year > rhs.year)
		return true;
	else if (this->year < rhs.year)
		return false;
	else { // ==
		if (this->month > rhs.month)
			return true;
		else if (this->month < rhs.month)
			return false;
		else { // ==
			if (this->day > rhs.day)
				return true;
			else if (this->day < rhs.day)
				return false;
			else { // ==
				if (this->hour > rhs.hour)
					return true;
				else if (this->hour < rhs.hour)
					return false;
				else { // ==
					if (this->minute > rhs.minute)
						return true;
					else if (this->minute < rhs.minute)
						return false;
					else { // ==
						return false;
					}
				}
			}
		}
	}
}

// Overloading <= Operator - comparing two Date Objects
bool Date::operator<=(const Date& rhs) const {
	return (*this < rhs) || (*this == rhs); // this points to current Event object, *this = Current Event Object 
}

// Overloading >= Operator - comparing two Date Objects
bool Date::operator>=(const Date& rhs) const {
	return (*this > rhs) || (*this == rhs);
}

// Overloading == Operator - comparing two Date Objects
bool Date::operator==(const Date& rhs) const {
	return (this->year == rhs.year && this->month == rhs.month && this->day == rhs.day && this->hour == rhs.hour && this->minute == rhs.minute);
}

// Overloading < Operator with Struct tm - comparing one Date object with one struct tm Object (Date)
bool Date::operator<(const struct tm& rhs) const {
	if (this->year < rhs.tm_year + 1900) // Should add 1900 to current year so that it is 2023
		return true;
	else if (this->year > rhs.tm_year + 1900)
		return false;
	else { // ==
		if (this->month < rhs.tm_mon + 1) // Should add 1 to current month so that it is the right current month 
			return true;
		else if (this->month > rhs.tm_mon + 1)
			return false;
		else { // ==
			if (this->day < rhs.tm_mday)
				return true;
			else if (this->day > rhs.tm_mday)
				return false;
			else { // ==
				if (this->hour < rhs.tm_hour)
					return true;
				else if (this->hour > rhs.tm_hour)
					return false;
				else { // ==
					if (this->minute < rhs.tm_min)
						return true;
					else if (this->minute > rhs.tm_min)
						return false;
					else { // ==
						return false;
					}
				}
			}
		}
	}
}

// Overloading > Operator with Struct tm - comparing one Date object with one struct tm Object (Date)
bool Date::operator>(const struct tm& rhs) const {
	if (this->year > rhs.tm_year + 1900)
		return true;
	else if (this->year < rhs.tm_year + 1900)
		return false;
	else { // ==
		if (this->month > rhs.tm_mon + 1)
			return true;
		else if (this->month < rhs.tm_mon + 1)
			return false;
		else { // ==
			if (this->day > rhs.tm_mday)
				return true;
			else if (this->day < rhs.tm_mday)
				return false;
			else { // ==
				if (this->hour > rhs.tm_hour)
					return true;
				else if (this->hour < rhs.tm_hour)
					return false;
				else { // ==
					if (this->minute > rhs.tm_min)
						return true;
					else if (this->minute < rhs.tm_min)
						return false;
					else { // ==
						return false;
					}
				}
			}
		}
	}
}


std::string Date::toStringDate() {
	return std::to_string(this->year) + "-" + std::to_string(this->month) + "-" + std::to_string(this->day) + "-" +
		std::to_string(this->hour) + "-" + std::to_string(this->minute) + "-";
}

void Date::deStringDate(std::string datestring) {
	std::string strit = "";
	int ctr = 0;
	for (int i = 0; i < datestring.length(); i++)

	{
		while (datestring[i] != '-') {
			//char c = str[i];
			strit += datestring[i];
			i++;
		}
		if (ctr == 0) {
			this->year = std::stoi(strit);
			ctr++;
			strit = "";
		}
		else if (ctr == 1) {
			this->month = std::stoi(strit);
			strit = "";
			ctr++;
		}
		else if (ctr == 2) {
			this->day = std::stoi(strit);
			strit = "";
			ctr++;
		}
		else if (ctr == 3) {
			this->hour = std::stoi(strit);
			strit = "";
			ctr++;
		}
		else if (ctr == 4 || i == (datestring.length() - 1)) {
			this->minute = std::stoi(strit);
		}

	}
}

// getters
int Date::getYear() const {
	return this->year;
}

int Date::getMonth() const {
	return this->month;
}

int Date::getDay() const {
	return this->day;
}

int Date::getHour() const {
	return this->hour;
}

int Date::getMinute() const {
	return this->minute;
}

// setters
void Date::setYear(int year) {
	this->year = year;
}

void Date::setMonth(int month) {
	this->month = month;
}

void Date::setDay(int day) {
	this->day = day;
}

void Date::setHour(int hour) {
	this->hour = hour;
}

void Date::setMinute(int minute) {
	this->minute = minute;
}