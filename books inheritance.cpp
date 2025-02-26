//c user defined functions
/*
c redefined functions
autor:Francis Macharia Mukuna
reg no: BSE-05-0166/2024
date:26/02/2024
version
*/
#include<iostream>
#include<string>
using namespace std;

class person {
    protected:
        string name;// variable declaration
    public:
    //setter for name
    void setName(string n){
        name = n;
    }
    //getter for name
    string getname (){
        return name;
    }
}; 
 // creating a child class that inherits from the base class person 
class librarymember : public person {
    private:
    	// variable declaration
        int memberid;
        int booksborrowed;
    public:
    //constructor
    librarymember(string n , int A,int B){
        name=n;
        memberid = A;
        booksborrowed = B;
    }
    
    //getter
    int getmemberid(){
        return memberid;
    }
    //getter
    int getbooksborrowed(){
        return booksborrowed;
    }
};
 // creating a derived class that inherits from the  class librarymember
class premiummember : public librarymember {
    private:
    	// variable declaration
    double membershipfee;
    public:
    //constructor
    premiummember(string n , int A,int B,double C):librarymember(n,A,B){
        membershipfee = C;
    }
    //getter
    double getmembershipfee(){
        return membershipfee;
    }
};
int main(){
    premiummember p1("Francis",123,2,100.0);
     // outputting the details of the premiummember
    cout<<"Name: "<<p1.getname()<<endl;
    cout<<"Memberid: "<<p1.getmemberid()<<endl;
    cout<<"Booksborrowed: "<<p1.getbooksborrowed()<<endl;
    cout<<"Membershipfee: "<<p1.getmembershipfee()<<endl;
    return 0;
}
