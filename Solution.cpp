#include "Solution.h"


Solution::Solution()
{
}

Solution::Solution(Instance & inst)
{
	int dim = inst.dimension;
	nodesVisited.resize(dim);
	//route.resize(dim);
}


Solution::~Solution()
{
}

double Solution::totalCost(Instance & inst)
{
	double totalCost = 0;
	int dim = route.size();
	totalCost = dim-- * inst.cost[0][route.front()];
	
	for (auto itPrev = route.begin(), itNext = itPrev; ++itNext!=route.end();)
	{
		//itNext++;
		///offset += inst.cost[*itPrev][*(itNext)];
		totalCost += dim--  * inst.cost[*itPrev][*(itNext)];
		itPrev++;
	}
	cost = totalCost;
	return cost;
}