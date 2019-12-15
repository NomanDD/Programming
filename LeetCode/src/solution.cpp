//============================================================================
// Name        : solution.cpp
// Author      : Noman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "solution.h"

Solution::Solution() {
	id_ = 0;
	std::cout<<"===== construct a solution! ====="<<std::endl;
}

Solution::Solution(std::string name) {
	id_ = 0;
	name_ = name;
	std::cout<<"===== construct a solution! ====="<<std::endl;
}

Solution::~Solution() {
	std::cout<<"===== destruct a solution! ====="<<std::endl;
}

