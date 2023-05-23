#include "User.h"
#include <string>
//#include <algorithm>


// Add Event to vector after checking only if it doesn't intersect with any Event from vector
bool User::add_event(Event new_event) {

	for (auto it = events.begin(); it != events.end(); it++) {

		if (it->second.intersects(new_event)) {
			System::String^ eventname = gcnew System::String(it->second.getName().c_str());
			System::String^ s = "Event intersects with another event of name: " + eventname;
			System::Windows::Forms::MessageBox::Show(s);
			//std::cout << "Event intersects with another event of name: " << new_event.name << std::endl;
			return false;
		}
	}

	if (new_event.isDone() == true)
	{
		done_events.push(new_event);

		undo_stack.push(std::make_pair(new_event, "Done"));

	}
	else {
		events[new_event.getId()] = new_event;
		Reminder_events[new_event.getRemId()] = new_event;
		undo_stack.push(std::make_pair(new_event, "Add"));
	}
	return true;
}

void User::delete_event(std::string id) {

	undo_stack.push(std::make_pair(events[id], "delete"));

	Reminder_events.erase(events[id].getRemId());
	events.erase(id);

	/*if (!events.erase(id))
		std::cout << "Didn't find any event with ID: " << id << std::endl;*/

}

bool User::update_event(std::string id, Event updated_event) {



	Event temp = events[id];
	
	Reminder_events.erase(events[id].getRemId());
	events.erase(id);
	//delete_event(id);

	if (add_event(updated_event))
	{
		undo_stack.pop();
		if(updated_event.isDone() == false)
		undo_stack.push(std::make_pair(temp, updated_event.getId()));
		else
		{
			undo_stack.push(std::make_pair(temp, "Remove From Done"));
		}
		return true;
		
	}
	else
	{
		add_event(temp);
		undo_stack.pop();
		return false;
	}

	/*auto itr = events.begin();


	for (itr; itr != events.end(); itr++) {



		if (itr->id == id) {
			itr->name = updated_event.name;
			itr->place = updated_event.place;
			itr->start_date = updated_event.start_date;
			itr->end_date = updated_event.end_date;
			itr->reminder = updated_event.reminder;
			itr->done = updated_event.done;
			return;
		}
	}
	std::cout << "Didn't find any event with ID: " << id << std::endl;*/

}


std::string User::toStringUser() { //returns the object as a string to store it in file 
	return this->username + "-" + this->password + "-";
}

void User::deStringUser(std::string userstring) { //destrings the incoming User object from file to be used in FileManager
	std::string strit = "";
	int ctr = 0;
	for (int i = 0; i < userstring.length(); i++)

	{
		while (userstring[i] != '-') {
			//char c = str[i];
			strit += userstring[i];
			i++;
		}
		if (ctr == 0) {
			this->username = strit;
			ctr++;
			strit = "";
		}
		else if (ctr == 1 || i == (userstring.length() - 1)) {
			this->password = strit;
		}
	}
}


// Getters
std::string User::getUsername() const {
	return this->username;
}

std::string User::getPassword() const {
	return this->password;
}

std::map<std::string, Event> User::getReminderEvents() const {
	return this->Reminder_events;
}

std::map<std::string, Event> User::getEvents() const {
	return this->events;
}

std::stack<Event> User::getDoneEvents() const {
	return this->done_events;
}

std::stack<std::pair<Event, std::string>> User::getUndoStack() const {
	return this->undo_stack;
}

std::stack<std::pair<Event, std::string>> User::getRedoStack() const {
	return this->redo_stack;
}

// Setters
void User::setUsername(const std::string& username) {
	this->username = username;
}

void User::setPassword(const std::string& password) {
	this->password = password;
}

void User::setReminderEvents(const std::map<std::string, Event>& events) {
	this->Reminder_events = events;
}

void User::setEvents(const std::map<std::string, Event>& events) {
	this->events = events;
}

void User::setDoneEvents(const std::stack<Event>& events) {
	this->done_events = events;
}

void User::setUndoStack(const std::stack<std::pair<Event, std::string>>& stack) {
	this->undo_stack = stack;
}

void User::setRedoStack(const std::stack<std::pair<Event, std::string>>& stack) {
	this->redo_stack = stack;
}




//bool User::compare_by_reminder(Event lhs, Event rhs) {
//	if (lhs.reminder.year < rhs.reminder.year)
//		return true;
//	else if (lhs.reminder.year > rhs.reminder.year) // is this->date > rhs.date ?????
//		return false;
//	else {		// is this->date == rhs.date ????? if Yes -> do the same with months, if Yes-> do same with days and so on..
//		if (lhs.reminder.month < rhs.reminder.month)
//			return true;
//		else if (lhs.reminder.month > rhs.reminder.month)
//			return false;
//		else { // ==
//			if (lhs.reminder.day < rhs.reminder.day)
//				return true;
//			else if (lhs.reminder.day > rhs.reminder.day)
//				return false;
//			else
//				return false;
//
//		}
//	}
//}


//std::set<int, decltype(&compare_by_reminder)> User::events_by_reminder(&compare_by_reminder)
//{
//	return std::set<int, decltype(&compare_by_reminder)>();
//}

// Update Event - Just replace values




// Sorting by Start Date using Lambda expression then display Events
//void User::display_events_sorted_by_start_date() {
//
//	// Third Parameter(lambda) - The condition that sort function will sort according to, here it will sort according to smaller(more recent) start date
////	std::sort(events.begin(), events.end(), [](Event e1, Event e2) {return e1.start_date < e2.start_date; });
//
//	//display_events(events);
//}
//
//// Sorting by reminder using Lambda expression then display Events
//void User::display_events_sorted_by_reminder_time() {
//
//	// Third Parameter(lambda) - The condition that sort function will sort according to, here it will sort according to smaller(more recent) reminder date
//	//std::sort(events.begin(), events.end(), [](Event e1, Event e2) {return e1.reminder < e2.reminder; });
//
//	//display_events(events);
//}

// Display only done Events
//void User::display_done_events() {
//	for (Event e : events) {
//		if (e.done = true) {
//			std::cout << e << std::endl;
//			std::cout << "---------------------------------------------------------" << std::endl;
//		}
//	}
//}

// Display all Events according to Sort functions
//void User::display_events(std::set<Event> events_to_display) {
//	if (events_to_display.empty())
//		events_to_display = events;
//	for (Event e : events_to_display) {
//		std::cout << e << std::endl;
//		std::cout << "---------------------------------------------------------" << std::endl;
//	}
//}

// Display only done Events sorted by start date (upcoming)
//void User::display_upcoming_events() {
//	std::sort(events.begin(), events.end(), [](Event e1, Event e2) {return e1.reminder < e2.reminder; });
//	for (Event e : events) {
//		if (e.done != true) {
//			std::cout << e << std::endl;
//			std::cout << "---------------------------------------------------------" << std::endl;
//		}
//	}
//}

// Push done events in the done_events stack
//void User::push_done() {
//	for (Event e : events) {
//		if (e.done == true) {
//			std::cout << "Event ID: " << e.id << " is done and will be added to stack" << std::endl;
//			done_events.push(e);
//		}
//	}
//}
