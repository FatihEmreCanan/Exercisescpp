#include <cmath>
#include <iostream>
using namespace std;
int main()
{   
    int x1, y1, x2, y2;
    cout<< "Enter the values of (x1,y1) and (x2,y2) with the order";

    
    cin >> x1 >> y1 >> x2 >> y2;
    int xDist = x2 - x1;
    int yDist = y2 - y1;
    int po = 2;
    float totalDist = sqrt(pow(xDist, po) + pow(yDist, po));

    cout << "The Distance between coordinates is " << totalDist << endl;
    system("pause>0");
}

