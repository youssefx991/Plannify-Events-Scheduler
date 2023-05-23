#pragma once
#include <iostream>
#include <string> // to use the tos_string() function
#include "Date.h"

class Event
{

private:
	// attributes 
	std::string name;
	Date start_date;
	Date end_date;
	std::string place;
	Date reminder;
	bool done;
	std::string id;
	std::string rem_id;
	static int counter;
	std::string username;

public:
	// constructors
	Event();
	Event(std::string name, std::string place, Date start_date, Date end_date, Date reminder,std::string username,bool done);

	/*bool operator<(const Event& rhs) const;
	bool operator>(const Event& rhs) const;


	bool operator<=(const Event& rhs) const;
	bool operator>=(const Event& rhs) const;

	bool operator==(const Event& rhs) const;*/
	// overloading operators
	//friend std::ostream& operator << (std::ostream& out, const Event& e);
	//friend std::istream& operator >> (std::istream& in, Event& e);

	// methods
	bool intersects(Event& other);
	//bool is_done();

	std::string toStringEvent();
	void deStringEvent(std::string eventstring);

	// Getters
	std::string getName() const;
	Date getStartDate() const;
	Date getEndDate() const;
	std::string getPlace() const;
	Date getReminder() const;
	bool isDone() const;
	std::string getId() const;
	std::string getRemId() const;
	static int getCounter();
	std::string getUsername() const;

	// Setters
	void setName(std::string name);
	void setStartDate(Date start_date);
	void setEndDate(Date end_date);
	void setPlace(std::string place);
	void setReminder(Date reminder);
	void setDone(bool done);
	void setId(std::string id);
	void setRemId(std::string rem_id);
	void setUsername(std::string username);
};

