//============================================================================
// Name        : solution.h
// Author      : Noman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef SOLUTION_H_
#define SOLUTION_H_


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


class Solution {

	Solution();
	Solution(std::string name);
	~Solution();

public:
	int GetId() {return id_;};
private:
	int id_;
	std::string name_;
};

#endif /* SOLUTION_H_ */
