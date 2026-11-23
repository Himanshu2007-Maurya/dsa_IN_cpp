#include<iostream>
using namespace std;
class user{
    int id;
    string password;
    public:
        string username;
        //constructor
        user(int id){
            this->id=id;

        }
        //Getter
        string getPassword(){
            return password;
        }
        //setter
        void setPassword(string password){
            this->password=password;
        }
        
};

int main(){
    user user1(102);
    user1.username="Himanshu";
    user1.setPassword("8840");
    cout<<"username:"<<user1.username<<endl;
    cout<<"password:"<<user1.getPassword()<<endl;

    return 0;
}