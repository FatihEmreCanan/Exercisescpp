/*  C++ Program to enter student details using Virtual Class  */

#include<iostream>
#include <string>
using namespace std;

class student

{
    protected:
        int mathGrade1;
        int mathGrade2;
        int studentNo;
        string name;
        int finalGrade;
        int sciGrade1, sciGrade2, finalScore;
        int totalGrade;
        int mathGrade;
        int sciGrade;


    public:

        int setNo(int sn)
        {
            studentNo =sn;
            return 0;
            
        }
        string setName(string Name)
        {
            
            name = Name;
            return 0;
        }
        int getNo()
        {
            return studentNo;

        }
        string getName()
        {
            return name;
        }
        void setMathGrade(int mt1, int mt2, int fin)
        {
            mathGrade1 = mt1;
            mathGrade2 = mt2;
            finalGrade = fin;
        }

        int getMathGrade()
        {
            return mathGrade1,mathGrade2, finalGrade;
        }
        int letterGrade(int mathGrade1,int mathGrade2, int finalGrade){
            mathGrade = 0.3 * (mathGrade1 +mathGrade2) + 0.4 * finalGrade;
            return 0;
        }    
        int setScienceGrade(int sci1, int sci2, int scifn)
        {
            sciGrade1 = sci1;
            sciGrade2 = sci2;
            finalScore = scifn;
            return 0;
        }

        int getScienceGrade()
        {
            return sciGrade1, sciGrade2, finalScore;
        }

        int sciLetterGrade(int sciGrade1, int sciGrade2, int finalScore){
            sciGrade = 0.4*(sciGrade2+ sciGrade1) + 0.6 * finalScore;
            return 0;
        }
        void getResult()
        {
            totalGrade=mathGrade+sciGrade;
            getName();
            getNo();
            getScienceGrade();
            cout<<"\nTotal Grade : "<<totalGrade<<"\n";
        }
};



int main()
{
    return 0;
}