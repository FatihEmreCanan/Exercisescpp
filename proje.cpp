/*  C++ Program to enter student details using Virtual Class  */

#include<iostream>
#include <string>
using namespace std;

class student

{
    protected:

        int studentNo;
        string name;

    public:

        void setNo()
        {
            cout<<"Enter Student Number:";
            cin>>studentNo;
        }
        void setName()
        {
            cout<<"Enter Student Name:";
            cin>>name;
        }
        void getNo()
        {
            cout<<"\nStudent Number : "<<studentNo;

        }
        void getName()
        {
            cout << " \nName :"<<name;
        }
};

class mathTest: virtual public student
{
    protected:
        float mathGrade;

    public:
        void setMathGrade()
        {
            cout<<"Enter Math Grade:";
            cin>>mathGrade;
        }

        void getMathGrade()
        {
            cout<<"\nMath Grade : "<<mathGrade;
        }
};




class scienceTest: public virtual student
{
    protected:
        float scienceGrade;

    public:
        void setScienceGrade()
        {
            cout<<"Enter Science Grade:";
            cin>>scienceGrade;
        }

        void getScienceGrade()
        {
            cout<<"\nScience Grade : "<<scienceGrade;
        }

};

class result: public mathTest, public scienceTest
{

    int totalGrade;

    public:
        void getResult()
        {
            totalGrade=mathGrade+scienceGrade;
            getName();
            getNo();
            getMathGrade();
            getScienceGrade();
            cout<<"\nTotal Grade : "<<totalGrade<<"\n";
        }
};


int main()
{
    result R;
    R.setName();
    R.setNo();
    R.setMathGrade();
    R.setScienceGrade();
    R.getResult();

    return 0;
}