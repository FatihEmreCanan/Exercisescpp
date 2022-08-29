//with global var
#include <cmath>
#include <iostream>
using namespace std;


double x1 = 4;
double ybir = 7;
double x2 = 15;
double y2 = 21;

void calcDist() {
	float xDist, yDist, totalDist;
	xDist = x2 - x1;
	yDist = y2 - ybir;

	totalDist = sqrt(pow(xDist,2) + pow(yDist,2));
	cout << "Answer: " << totalDist << endl;
}

int main()
{
	calcDist();	
	system("pause>0");
}

