#pragma once
#include "Solution.h"

class ILS
{
public:
	Solution sol;

	ILS();
	ILS(Solution & s);
	~ILS();

	void initialSolution();
	void pertrurbation(Instance & inst);
	void localSearch(Instance & inst);
	void acceptCriterion(Instance & inst);
};

