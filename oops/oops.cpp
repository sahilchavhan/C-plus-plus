//OOPS-class
#include<iostream>
using namespace std;

class student
{
    string petname;
    public://below public all objects are public
    string name;
    int age;
    bool gender;

    student()//this is default construtor
    {
        cout<<"default ci=onstructor";
    }

    student(string s, int a, bool g)//this is cnstructor
    {//this is parameterized constructor
        name=s;
        age=a;
        gender=g;
    }

    student(student &a)//this is copied constructor
    {
        name=a.name;
        age=a.age;
        gender=a.gender;
        printinfo();
        cout<<"default constructor";
    }

    void printinfo()
    {
        // getpetname();
        cout<<"name"<<" "<<name;
        cout<<"age"<<" "<<age;
        cout<<"gender"<<" "<<gender;
    }

    void setpetname(string s)
    {
        petname=s;
    }

    void getpetname()
    {
        cout<<"petname"<<" "<<petname;
    }

    ~student()//this is destructor
    {
        cout<<"destructor called"<<endl;
    }
};

int main()
{
    // student aray[3];
    // for(int i=0;i<3;i=i+1)
    // {
    //     string s1;
    //     cin>>s1;
    //     aray[i].setpetname(s1);
    //     cin>>aray[i].name;//method of calling accesing public objects of a class
    //     cin>>aray[i].age;
    //     cin>>aray[i].gender;
    // }
    // for(int i=0;i<3;i=i+1)
    // {
    //    aray[i].printinfo();
    // }

    student a("sahil",29,0);
    a.printinfo();

    student b;

    student c(student a);
    a.printinfo();

    return 0;

}