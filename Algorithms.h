#pragma once
#include <vector>

using namespace std;

class Algorithms
{
public:
	Algorithms();
	~Algorithms();

	static void reverseSegment(vector<int> & route, int start, int end);
	static void twoOpt(vector<int> & route, int a1, int a2, int b1, int b2);
	static void swapTwo(vector<int> & route, int a, int b);
};

