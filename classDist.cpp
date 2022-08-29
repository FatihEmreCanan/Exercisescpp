#include <iostream>
#include <cmath>
using namespace std;
class calcDist{

    int x1 = 7;
    int y1 = 10;
    int x2 = 21; 
    int y2 = 34;
    int po = 2;
public:    
    int xDist, yDist;
    float totalDist; 
    int getValX1(){
        return x1;
    }
    int getValX2(){
        return x1;
    }
    int getValY1(){
        return y1;
    }
    int getValY2(){
        return y2;
    }
    int distCal(){
        
        xDist =  getValX2()- getValX1() ;
        yDist = getValY2() - getValY1() ;

        
        totalDist = sqrt(pow(xDist, po) + pow(yDist, po));
        return totalDist;
    }
};

int main(){
    calcDist calDist;
    calDist.distCal();
    cout << "Answer:"<<calDist.totalDist<<endl;
    system("pause>0");
}