// N-ary tree generation
// Copyright 2018 Vladimir Kizelbashev.

#include "Tree.h"

#include <conio.h>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

void ReadNumber(string msg, size_t &number);

int main(int argc, char **argv)
{
	size_t treeDepth = 0;
	size_t maxNodes = 0;
	
	cout << "***** N-ary tree generation *****\n\n";
	
	ReadNumber("Enter a depth of tree: ", treeDepth);
	ReadNumber("Enter a maximum count of child nodes: ", maxNodes);
	
	cout << "Depth of tree = " << treeDepth << endl;
	cout << "Maximum count of child nodes = " << maxNodes << endl;
	cout << "\nCreate n-ary tree...\n\n";
	
	Tree* tree = new Tree(treeDepth, maxNodes);
	
	cout << "\nPress any key to exit..." << endl;
	_getch();
	
	return 0;
}

void ReadNumber(string msg, size_t &number)
{
	while (true)
	{
		cout << msg;
		if (cin >> number)
		{
			cout << endl;
			break;
		}
		else
		{
			cout << "Please enter a valid integer value\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
}
