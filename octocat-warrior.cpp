// octocat-warrior.cpp : Defines the entry point for the application.
//

#include "octocat-warrior.h"
#include <string>
#include <numeric>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void pointer(int argc, char* argv[]);
void library(int argc, char* argv[]);

int main(int argc, char* argv[])
{
	// cout << "Hello CMake." << endl;
	// cout << "You have entered " << argc << " arguments:" << "\n";
	try {
		if (strcmp(argv[1], "pointer") == 0) {
			pointer(argc, argv);
		}
		else if (strcmp(argv[1], "library") == 0) {
			library(argc, argv);
		}
		else {
			throw "Unkonown argument";
		}
	}
	catch (...) {
		cout << "Unkonown argument please verify input arguments\n";
	}
	return 0;
}

void pointer(int argc, char* argv[]) {
	try
	{
		int sum = 0;
		for (int i = 2; i < argc; ++i) {
			string arg = argv[i];
			size_t pos;
			sum += stoi(arg, &pos);
		}
		cout << sum << "\n";
	}
	catch (...)
	{
		cout << "False argument please give numbers\n";
	}

}

void library(int argc, char* argv[]) {
	try
	{
		int sum = 0;
		for (int i = 2; i < argc; ++i) {
			string arg = argv[i];
			size_t pos;
			sum += stoi(arg, &pos);
		}
		cout << sum << "\n";
	}
	catch (...)
	{
		cout << "False argument please give numbers\n";
	}

}

