#ifndef TODO
#define TODO

#include <string>

using std::string;

struct MyToDo 
{
	string description;
	string dueDate;
	string priority;
};

MyToDo toDoList[];
const int maxSize = 100;

bool addToList(const MyToDo &addToList);
bool addToList(string desc, string dueDate, int priority);
bool getNextItem(MyToDo &nextItem);
bool getNextItem(string &desc, string &date, int &priority);
bool getByPriority(MyToDo toDoList[], int priority);
void printToDo();

#endif

