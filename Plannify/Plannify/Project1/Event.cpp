#include "Event.h"
#include <Windows.h>
#include <iostream>

// Default Constructor
Event::Event() {
	//this->name = "None";
	//this->place = "None";
	//this->start_date = { 2,2,2,2,2 }; // default accepted values
	//this->end_date = { 3,3,3,3,3, }; // default accepted values
	//this->reminder = { 1,1,1,1,1 }; // default accepted values
	//this->done = false;

	//// to_string() - convert INT to STRING and by adding ther\y are concatenated to represent the unique ID of each Event
	//this->id = std::to_string(start_date.year) + std::to_string(start_date.month) + std::to_string(start_date.day) + std::to_string(start_date.hour) + std::to_string(start_date.minute);

	////this->is_done(); // to mark the event if it is done or not directly after it is created
}




int Event::counter = 0;
// Overloaded Constructor
Event::Event(std::string name, std::string place, Date start_date, Date end_date, Date reminder, std::string username, bool done) {
	this->name = name;
	this->place = place;
	this->start_date = start_date;
	this->end_date = end_date;
	this->reminder = reminder;
	this->done = done;
	this->username = username;

	// to_string() - convert INT to STRING and by adding ther\y are concatenated to represent the unique ID of each Event

	std::string mon = "0";

	if (start_date.getMonth() <= 9)
		mon = "0" + std::to_string(start_date.getMonth());
	else
		mon = std::to_string(start_date.getMonth());

	std::string day = "0";

	if (start_date.getDay() <= 9)
		day = "0" + std::to_string(start_date.getDay());
	else
		day = std::to_string(start_date.getDay());

	std::string hour = "0";

	if (start_date.getHour() <= 9)
		hour = "0" + std::to_string(start_date.getHour());
	else
		hour = std::to_string(start_date.getHour());

	std::string minute = "0";

	if (start_date.getMinute() <= 9)
		minute = "0" + std::to_string(start_date.getMinute());
	else
		minute = std::to_string(start_date.getMinute());

	//this->id = std::to_string(start_date.year) + std::to_string(start_date.month)+ std::to_string(start_date.day)+ std::to_string(start_date.hour)+ std::to_string(start_date.minute);
	std::string  year = std::to_string(start_date.getYear());
	this->id = year + mon + day + hour + minute;


	///////////////////////////////////REMINDER//////////////////////////////////////


	std::string year_rem = std::to_string(reminder.getYear());

	std::string month_rem = "0";
	if (reminder.getMonth() <= 9)
		month_rem = "0" + std::to_string(reminder.getMonth());
	else
		month_rem = std::to_string(reminder.getMonth());

	std::string day_rem = "0";
	if (reminder.getDay() <= 9)
		day_rem = "0" + std::to_string(reminder.getDay());
	else
		day_rem = std::to_string(reminder.getDay());

	this->rem_id = year_rem + month_rem + day_rem + std::to_string(counter++);
	/*std::cout << reminder.month << std::endl;
	std::cout << rem_id << std::endl;*/


	//if (this->end_date < this->start_date) { // Event can't end before starting 
	//	//System::Windows::Forms::DialogResult result = 
	//	System::Windows::Forms::MessageBox::Show("ERROR - End Date < Start Date - Program will exit with code 1");

	//	//std::cout << "ERROR - End Date < Start Date - Program will exit with code 1" << std::endl;
	//	//exit(1);
	//}

	//if (this->reminder > this->start_date) { // reminder should be before Event start time or at most the sam start time 
	//	System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("ERROR - Remainder > Start Date - Program will exit with code 1");

	//	//std::cout << "ERROR - Remainder > Start Date - Program will exit with code 1" << std::endl;
	//	//exit(1);
	//}



	//this->is_done(); // to mark the event if it is done or not directly after it is created 
}

//bool Event::operator<(const Event& rhs) const
//{
//	return this->start_date < rhs.end_date;
//}
//
//bool Event::operator>(const Event& rhs) const
//{
//	return this->start_date > rhs.end_date;
//}
//
//bool Event::operator==(const Event& rhs) const
//{
//	return this->start_date == rhs.end_date;
//}
//
//bool Event::operator<=(const Event& rhs) const
//{
//	return (this->start_date < rhs.end_date)|| (this->start_date == rhs.end_date);
//}
//
//bool Event::operator>=(const Event& rhs) const
//{
//	return (this->start_date > rhs.end_date) || (this->start_date == rhs.end_date);
//
//}
// Intersection method - Events intersecect if one of them is in the range between start and end of other Event

bool Event::intersects(Event& other) {

	// 1- يبدأ قبل ويخلص في النص             true ,true
	// 2- يبدأ في النص ويخلص بعديه           true ,true
	// 3- يبدا ويخلص في النص                 true ,true
	// 4-يبدا معاه ويخلص معاه                true ,true

	// 4- يبدا ويخلص قبل     false, ture
	// 5- يبدا ويخلص بعديه   ture, false


	return start_date < other.end_date && end_date > other.start_date;

}




// Overloading Insertions Operator << - os = cout
//std::ostream& operator << (std::ostream& os, const Event& e) {
//
//	os << "Event Name: " << e.name << std::endl;
//	os << "Event Place: " << e.place << std::endl;
//	os << "Event Id: " << e.id << std::endl;
//	os << "Event start date: " << e.start_date << std::endl;
//	os << "Event end date: " << e.end_date << std::endl;
//	os << "Event remainder: " << e.reminder << std::endl;
//	os << "Event Done?: " << (e.done ? "Yes" : "No") << std::endl; // If done == 1 cout << " Yes "; else cout << " NO ";
//
//	return os;
//}

// Overloading Extraction Operator >> - is = cin
//std::istream& operator >> (std::istream& is, Event& e) {
//	bool isValid = true;
//
//	do {
//		std::cout << "Enter Event Name: ";
//		is >> e.name;
//
//		std::cout << "Enter Event Place: ";
//		is >> e.place;
//
//		std::cout << "\n---------------------------------------------------------" << std::endl;
//		std::cout << "Enter Event Start Date date\n";
//		is >> e.start_date;
//
//		std::cout << "\n---------------------------------------------------------" << std::endl;
//		do {
//			std::cout << "Enter Event End Date data\n";
//			is >> e.end_date;
//
//			if (e.end_date < e.start_date) {
//				std::cout << "ERROR - End Date < Start Date" << std::endl;
//				isValid = false;
//				continue;
//			}
//			isValid = true;
//		} while (!isValid);
//
//
//		std::cout << "\n---------------------------------------------------------" << std::endl;
//		do {
//			std::cout << "Enter Event Remainder: ";
//			is >> e.reminder;
//			if (e.reminder > e.start_date) {
//				std::cout << "ERROR - Remainder > Start Date" << std::endl;
//				isValid = false;
//				continue;
//			}
//			isValid = true;
//		} while (!isValid);
//
//		isValid = true;
//
//	} while (!isValid);
//
//
//	e.id = std::to_string(e.start_date.year) + std::to_string(e.start_date.month) + std::to_string(e.start_date.day) + std::to_string(e.start_date.hour) + std::to_string(e.start_date.minute);
//	std::cout << "\n---------------------------------------------------------" << std::endl;
//	return is;
//}
//
//// Is Event Done method - compares Event end date with current time, if it's end date is passed then it is done
//bool Event::is_done() {
//	if (this->end_date < this->end_date.date) {
//		this->done = true;
//	}
//
//	return done;
//
//}


std::string Event::toStringEvent() {
	return  this->name + "$" + this->place + "$" + this->start_date.toStringDate() + "$" + this->end_date.toStringDate() + "$" +
		this->reminder.toStringDate() + "$" + std::to_string(this->done) + "$" + this->id + "$" +
		this->username + "$";
}

void Event::deStringEvent(std::string eventstring) {
	std::string strit = "";
	int ctr = 0;
	for (int i = 0; i < eventstring.length(); i++)

	{
		while (eventstring[i] != '$') {
			strit += eventstring[i];
			i++;
		}
		if (ctr == 0) {
			this->name = strit;
			ctr++;
			strit = "";
		}
		else if (ctr == 1) {
			this->place = strit;
			strit = "";
			ctr++;
		}
		else if (ctr == 2) {
			this->start_date.deStringDate(strit);
			strit = "";
			ctr++;
		}
		else if (ctr == 3) {
			this->end_date.deStringDate(strit);
			strit = "";
			ctr++;
		}
		else if (ctr == 4) {
			this->reminder.deStringDate(strit);
			strit = "";
			ctr++;
		}
		else if (ctr == 5) {
			this->done = std::stoi(strit);
			strit = "";
			ctr++;
		}
		/*else if (ctr == 6) {
			this->is_valid = std::stoi(strit);
			strit = "";
			ctr++;
		}*/
		else if (ctr == 6) {
			this->id = strit;
			strit = "";
			ctr++;
		}
		else if (ctr == 7 || i == (eventstring.length() - 1)) {
			this->username = strit;
			strit = "";
			ctr++;
		}
	}
}

// Getters
std::string Event::getName() const {
	return this->name;
}

Date Event::getStartDate() const {
	return this->start_date;
}

Date Event::getEndDate() const {
	return this->end_date;
}

std::string Event::getPlace() const {
	return this->place;
}

Date Event::getReminder() const {
	return this->reminder;
}

bool Event::isDone() const {
	return this->done;
}

std::string Event::getId() const {
	return this->id;
}

std::string Event::getRemId() const {
	return this->rem_id;
}

int Event::getCounter() {
	return counter;
}

std::string Event::getUsername() const {
	return this->username;
}

// Setters
void Event::setName(std::string name) {
	this->name = name;
}

void Event::setStartDate(Date start_date) {
	this->start_date = start_date;
}

void Event::setEndDate(Date end_date) {
	this->end_date = end_date;
}

void Event::setPlace(std::string place) {
	this->place = place;
}

void Event::setReminder(Date reminder) {
	this->reminder = reminder;
}

void Event::setDone(bool done) {
	this->done = done;
}


void Event::setId(std::string id) {
	this->id = id;
}
void Event::setRemId(std::string rem_id) {
	this->rem_id = rem_id;
}
void Event::setUsername(std::string username) {
	this->username = username;
}