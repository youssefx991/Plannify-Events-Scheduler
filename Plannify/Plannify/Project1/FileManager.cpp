#include "FileManager.h"




void FileManager::writedata() {
	writeusers(UsersManager::userList);
	writeevents(UsersManager::userList);

}

void FileManager::writeusers(unordered_map<std::string, User> userList) {
	fstream fms;
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

void FileManager::readdata() {
	readusers(UsersManager::userList);
	readevents(UsersManager::userList);
}

void FileManager::readusers(unordered_map<std::string, User>& userList) {
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

void FileManager::writeevents(unordered_map<std::string, User>& userList) {
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
			

		}
	}
	else {
		std::cout << "Error opening events.txt to write to" << endl;
	}
	fms.close();
}

void FileManager::readevents(unordered_map<std::string, User>& userList) {
	fstream fms;
	fms.open("events.txt", ios::in);
	if (fms.is_open()) {
		std::cout << "Successfully opened fms to read from events.txt\n";
		stack<Event> tempstack;
		//unordered_map<int, User>::iterator userit;
		Event tempevent; std::string strread;
		while (getline(fms, strread)) {
			tempevent.deStringEvent(strread);
			  // if the event is not done it will be inserted in the vector of the user with the same tempevent userid
				UsersManager::userList[tempevent.getUsername()].events[tempevent.getId()] = tempevent;
				UsersManager::userList[tempevent.getUsername()].Reminder_events[tempevent.getRemId()] = tempevent;
			
			 if (tempevent.isDone() == 1) { // else the event is done so it will be pushed to the stack
				tempstack.push(tempevent);
			}
		}
		while (!tempstack.empty()) {//reverses the stack fo each user to return to their original form
			UsersManager::userList[tempstack.top().getUsername()].done_events.push(tempstack.top()); //pushes the tempstack's top event to the done_events stack of the user with the same id as tempstack's top
			tempstack.pop();
		}
	}
	else {
		std::cout << "Error opening events.txt to read from\n";
	}
}
