#include "Test.h"
#include "Algorithms.h"
#include "Config.h"
#include "Writer.h"
#include "Reader.h"
#include <iostream>

using namespace std;

Test::Test()
{
}


Test::~Test()
{
}

void Test::run()
{
	Config conf;
	Writer writer(conf);
	conf.fIn = "instances/gr17.xml";
	Reader reader(conf);
	Instance inst;
	

	reader.read(conf, inst);

	Solution s(inst);

	//s.route[0] = 1;
	//s.route[1] = 2;
	//s.route[2] = 3;
	//s.route[3] = 4;
	//s.route[4] = 5;
	//s.route[5] = 6;
	s.route.push_back(1);
	s.route.push_back(2);
	s.route.push_back(3);
	s.route.push_back(4);
	s.route.push_back(5);
	s.route.push_back(6);

	s.totalCost(inst);
	writer.writeRoute(s, inst);


	//Algorithms::reverseSegment(s.route, 2, 4);
	//Algorithms::twoOpt(s.route, 1,2, 4, 5);
	Algorithms::swapTwo(s.route, 0, 5);
	s.totalCost(inst);
	writer.writeRoute(s, inst);

	writer.close();
}