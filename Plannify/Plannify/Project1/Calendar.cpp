#include "Calendar.h"


std::vector<int> Calendar::Start_day_in_month = { 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5 };
std::vector<int> Calendar::month_days = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int Calendar::year = 0;
int Calendar::month = 0;
bool Calendar::Edit = false;