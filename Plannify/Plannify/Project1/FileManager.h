#pragma once
#include <fstream>
#include "UsersManager.h"
#include <map>
//#include <iostream>

using namespace std;
class FileManager
{
public:
	void static writedata();
	void static readdata();
private:
	void static writeusers(unordered_map<std::string, User> userList);

	void static writeevents(unordered_map<std::string, User>& userList);
	void static readevents(unordered_map<std::string, User>& userList);
	void static readusers(unordered_map<std::string, User>& userList);
};

