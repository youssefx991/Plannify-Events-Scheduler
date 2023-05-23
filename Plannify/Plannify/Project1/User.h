#pragma once
#include <vector> // carry Event Objects
#include <stack>  // Two Stacks, one for Deleted Events, other for Done Events
#include <set>
#include <map>
#include "Date.h"
#include "Event.h"
#include <string>

class User
{
	//std::stack<Event> deleted_events;
private:

	std::string username;
	std::string password;

public:
	// Attributes
	


	//bool compare_by_reminder(Event lhs, Event rhs);
	//std::set<Event, decltype(&compare_by_reminder)> events_by_reminder;


	std::map<std::string, Event> Reminder_events;
	std::map<std::string,Event> events;

	std::stack<Event> done_events;

	std::stack<std::pair<Event,std::string>> undo_stack;
	std::stack<std::pair<Event, std::string>> redo_stack;


	// Constructors
	User() : username("None"), password("None") {};
	User(std::string u, std::string p) : username(u), password(p) {};

	// Modification Methods 
	bool add_event(Event new_event);
	void delete_event(std::string id);
	
	bool update_event(std::string id, Event updated_event);

	
	std::string toStringUser();
	void deStringUser(std::string str);

	// Getters
	std::string getUsername() const;
	std::string getPassword() const;
	std::map<std::string, Event> getReminderEvents() const;
	std::map<std::string, Event> getEvents() const;
	std::stack<Event> getDoneEvents() const;
	std::stack<std::pair<Event, std::string>> getUndoStack() const;
	std::stack<std::pair<Event, std::string>> getRedoStack() const;

	// Setters
	void setUsername(const std::string& username);
	void setPassword(const std::string& password);
	void setReminderEvents(const std::map<std::string, Event>& reminderEvents);
	void setEvents(const std::map<std::string, Event>& Events);
	void setDoneEvents(const std::stack<Event>& doneEvents);
	void setUndoStack(const std::stack<std::pair<Event, std::string>>& undoStack);
	void setRedoStack(const std::stack<std::pair<Event, std::string>>& redoStack);



	// Display Methods
	//void display_events_sorted_by_start_date();
	//void display_events_sorted_by_reminder_time();
	//void display_done_events();
	//	void display_events(std::set<Event> events_to_display = {});
	//void display_upcoming_events();

	// Push done events to done_events stack
	//void push_done();
};


