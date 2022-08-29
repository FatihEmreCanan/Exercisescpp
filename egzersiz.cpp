#include <string>
#include <iostream>
#include <fstream>



bool IsLoggedIn()
{
    std::string username, password, un, pw;
    std::cout<<"Enter username:"<<"\n";std::cin>> username;
    std::cout<<"Enter password:"<<"\n";std::cin>> password;

    std::ifstream read("data\\"+username+".txt");
    std::getline(read, un);
    std::getline(read,pw);

    if (un == username && pw == password){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    int choiceOfProcess;
    std::cout<<"1: Register\n2: Login\n Your Choice:";std::cin>> choiceOfProcess;
    if (choiceOfProcess ==1){
        std::string username,password;

        std::cout << "Select you username:";std::cin>>username;
        std::cout<<"Choose your password:";std::cin>>password;
        std::ofstream file;
        file.open("data\\"+username+".txt");

        file <<username<<"\t"<< password;
        file.close();

        main();   
    }

    else if(choiceOfProcess ==2){

        bool status = IsLoggedIn();

        if (status == false){
            std::cout<<"False Login -- Check your username and password!!"<<"\n";
            system("PAUSE");
            return 0;
        }
        else if (status == true){
            std::cout<<"Successfully!!"<<"\n";
            system("PAUSE");
            return 1;
        }
    }
    

}