/*
Jacob Marinas

ID: 0602306

July 23, 2021

Lab Assignment 19 - Structures and Arrays

Construct functionality to create a simple To Do list
*/

#include <iostream>
#include <string>
#include "ToDo.h"

using namespace std;

int main()
{
	MyToDo toDo;
	MyToDo nextToDo;
	MyToDo listToDo[10];
	string description, dueDate;
	int priority, query;

	cout << "Enter a description" << endl;
	cin >> toDo.description;

	cout << "Enter a date" << endl;
	cin >> toDo.dueDate;

	cout << "Enter a number priority" << endl;
	cin >> toDo.priority;

	// Adding the MyToDo struct to the ToDoList struct array
	addToList(toDo);

	cout << "Add a second item" << endl;
	
	cout << "Enter a description" << endl;
	cin >> description;

	cout << "Enter a date" << endl;
	cin >> dueDate;

	cout << "Enter a number priority" << endl;
	cin >> priority;

	// Checking if the overloaded function works as well
	addToList(description, dueDate, priority);

	// Accessing the ToDoList struct array and assigning the next item's description, due date, and priority to the parameter since it is a reference
	getNextItem(nextToDo);

	// Confirming that the data has been passed to nextToDo
	cout << "nextToDo.description: " << nextToDo.description << endl;
	cout << "nextToDo.dueDate: " << nextToDo.dueDate << endl;
	cout << "nextToDo.priority: " << nextToDo.priority << endl;

	// The second call to getNextItem should get the second item in the list
	getNextItem(nextToDo);

	// Confirming that the data has been passed to nextToDo
	cout << "nextToDo.description: " << nextToDo.description << endl;
	cout << "nextToDo.dueDate: " << nextToDo.dueDate << endl;
	cout << "nextToDo.priority: " << nextToDo.priority << endl;

	// Printing out the ToDoList array
	printToDo();

	cout << "Enter a priority to sort by" << endl;
	cin >> query;

	// Passing a new ToDo struct array, which the items that match the priority will be added onto
	if(getByPriority(listToDo, query)) 
	{
		cout << "There were items that have matched the query" << endl;
		// To check that an item has been added to listToDo
		toDo = listToDo[0];
		cout << "toDo.description: " << toDo.description << endl;
		cout << "toDo.dueDate: " << toDo.dueDate << endl;
		cout << "toDo.priority: " << toDo.priority << endl;
	}
	else
	{
		cout << "There weren't any items that matched the query" << endl;
	}

	return 0;
}