#include "UsersManager.h"
using namespace std;
std::unordered_map<std::string, User> UsersManager::userList;

void UsersManager::adduser(User user) {
	UsersManager::userList[user.getUsername()] = user;
}

//
//#include "FileManager.h"
//

void UsersManager::writedata() {
	writeusers();
	writeevents();

}

void UsersManager::writeusers() {
	std::fstream fms;
	fms.open("users.txt", ios::out);
	if (fms.is_open()) {
		unordered_map<std::string, User>::iterator it;
		std::cout << "successfully entered fm to write in users.txt\n";
		for (it = userList.begin(); it != userList.end(); it++)
		{
			std::string output = it->second.toStringUser();
			fms << output << endl;
		}
	}
	else {
		std::cout << "Error opening users.txt to write\n";
	}
	fms.close();
}

void UsersManager::readdata() {
	readusers();
	readevents();
}

void UsersManager::readusers() {
	fstream fms;
	fms.open("users.txt", ios::in);
	if (fms.is_open()) {
		std::cout << "successfully entered fms to read in users.txt\n";
		std::string strread;
		while (getline(fms, strread)) {
			User tempuser = User();
			tempuser.deStringUser(strread);
			//userList.insert(make_pair(tempuser.id, tempuser));
			userList[tempuser.getUsername()] = tempuser;
		}

	}
	else {
		std::cout << "Error opening users.txt to read \n";
	}
	fms.close();
}

void UsersManager::writeevents() {
	fstream fms;
	fms.open("events.txt", ios::out);
	if (fms.is_open()) {
		std::cout << "successfully opened fms to write in events.txt\n";
		unordered_map<std::string, User>::iterator userit; // iterator to pass through all users
		for (userit = userList.begin(); userit != userList.end(); userit++) {
			if (!userit->second.events.empty()) {
				// inner loop here
				map<std::string, Event>::iterator eventit; // iterator to pass through all the events in the event vector of the user currently pointed at by the user iterator
				eventit = userit->second.events.begin();
				for (eventit; eventit != userit->second.events.end(); eventit++) {
					fms << eventit->second.toStringEvent() << endl;
				}
			}
			while (!userit->second.done_events.empty())
			{
				cout << userit->second.done_events.top().toStringEvent() << endl;
				fms << userit->second.done_events.top().toStringEvent() << endl;
				userit->second.done_events.pop();
			}

		}
	}
	else {
		std::cout << "Error opening events.txt to write to" << std::endl;
	}
	fms.close();
}

void UsersManager::readevents() {
	fstream fms;
	fms.open("events.txt", ios::in);
	if (fms.is_open()) {
		std::cout << "Successfully opened fms to read from events.txt\n"; 
		stack<Event> tempstack;

		//unordered_map<int, User>::iterator userit;
		Event tempevent;
		std::string strread;
		while (getline(fms, strread)) {
			tempevent.deStringEvent(strread);
			Event tempevent2(tempevent.getName(), tempevent.getPlace(), tempevent.getStartDate(), tempevent.getEndDate(), tempevent.getReminder(), tempevent.getUsername(), tempevent.isDone());
			// if the event is not done it will be inserted in the vector of the user with the same tempevent userid
			
			if (tempevent2.isDone() == 1) { // else the event is done so it will be pushed to the stack
				
				tempstack.push(tempevent2);
				//UsersManager::userList[tempevent2.username].done_events.pop();
				//UsersManager::userList[tempevent2.username].done_events.push(tempevent2);
				//tempstack.push(tempevent2);
			}
			else
			{
				UsersManager::userList[tempevent2.getUsername()].events[tempevent2.getId()] = tempevent2;
				UsersManager::userList[tempevent2.getUsername()].Reminder_events[tempevent2.getRemId()] = tempevent2;

			}
		}

		while (!tempstack.empty()) {
			UsersManager::userList[tempstack.top().getUsername()].done_events.push(tempstack.top());
			tempstack.pop();
		}

		//while (!tempstack.empty()) {//reverses the stack fo each user to return to their original form
		//	UsersManager::userList[tempstack.top().username].done_events.push(tempstack.top()); //pushes the tempstack's top event to the done_events stack of the user with the same id as tempstack's top
		//	tempstack.pop();
		//}
	}
	else {
		std::cout << "Error opening events.txt to read from\n";
	}
}
