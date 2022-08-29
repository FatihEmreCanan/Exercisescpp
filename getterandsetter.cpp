#include <iostream>
#include <cmath>
using namespace std;
class calcDist{

    int x1;
    int y1;
    int x2; 
    int y2;
    int po = 2;
public:
    calcDist()=default;
    calcDist(int x1 ,int y1,int x2,int y2):x1{x1},x2{x2},y1{y1},y2{y2}{
        
    }
    calcDist(const calcDist &obj){
        x1 = obj.x1;
        x2 = obj.x2;
        y1 = obj.y1;
        y2 = obj.y2;
    }
    void setValX1(int xbir){
        x1 = xbir;
    }
    void setValY1(int ybir){
        y1 = ybir;
    }
    void setValX2(int xiki){
        x2 = xiki;
    }
    void setValY2(int yiki){
        y2 = yiki;
    }    
    
    int xDist, yDist;
    float totalDist; 
    int getValX1() const{
        return x1;
    }
    int getValY1()const{
        return y1;
    }
    int getValX2()const{
        return x2;
    }
    int getValY2()const{
        return y2;
    }
    float distCal(){
        
        xDist =  getValX2()- getValX1() ;
        yDist = getValY2() - getValY1() ;

        
        totalDist = sqrt(pow(xDist, po) + pow(yDist, po));
        return totalDist;
    }
};

int main()
{   int x1 = 10;
    int x2 = 20; 
    int y1 = 30;
    int y2 = 40;

    calcDist calDist{};
    int val;
    
    cout << calDist.getValX1()<<"\n";
    cout << calDist.getValY1()<<"\n";
    cout << calDist.getValX2()<<"\n";
    cout << calDist.getValY2()<<"\n";


    cout << "Answer:"<<calDist.distCal()<<endl;
    system("pause>0");
}