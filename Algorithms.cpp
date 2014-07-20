#include "Algorithms.h"


Algorithms::Algorithms()
{
}


Algorithms::~Algorithms()
{
}

void Algorithms::reverseSegment(vector<int> & route, int start, int end)
{
	if (start < 0 || end >= route.size())
		return;

	for (int i = start, j = end, t = 0; i < j; i++, j--)
	{
		t = route[i];
		route[i] = route[j];
		route[j] = t;
	}
}

void Algorithms::twoOpt(vector<int> & route, int a1, int a2, int b1, int b2)
{
	if (a1 == b1 || a1 == b2 || a2 == b1 || a2 == b2)
		return;
	reverseSegment(route, a2, b1);
}

void Algorithms::swapTwo(vector<int> & route, int a, int b)
{
	int temp = route[a];
	route[a] = route[b];
	route[b] = temp;
}