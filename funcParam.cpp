//with given parameters
#include <cmath>
#include <iostream>
using namespace std;


void calcDist(int x1,int ybir, int x2,int y2) {
	float xDist, yDist, totalDist;
	xDist = x2 - x1;
	yDist = y2 - ybir;

	totalDist = sqrt(pow(xDist,2) + pow(yDist,2));
	cout << "Answer: " << totalDist << endl;
}

int main()
{
	calcDist(1,2,3,4);	
	system("pause>0");
}

