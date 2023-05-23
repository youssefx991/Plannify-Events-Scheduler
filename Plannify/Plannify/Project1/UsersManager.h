#pragma once
#include "User.h"
#include <unordered_map>
#include <fstream>

class UsersManager : public User
{
public:
	static std::unordered_map<std::string, User> userList;
	void static adduser(User user);


public:
	void static writedata();
	void static readdata();
private:
	void static writeusers();

	void static writeevents();
	void static readevents();
	void static readusers();

};

