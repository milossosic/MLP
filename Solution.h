#pragma once
#include <vector>
#include "Instance.h"
using namespace std;
class Solution
{
public:
	Solution();
	Solution(Instance & inst);
	~Solution();


	vector<int> nodesVisited;
	vector<int> route;
	double cost;

	double totalCost(Instance & inst);
};

