#include<iostream>
#include <string>
using namespace std;
class student
{
    public:
    string Name;
    int rno;
    string branch;
    student(string a,int b,string c)
    {
        Name = a;
        rno = b;
        branch = c;
    }
    void display()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"Roll No: "<<rno<<endl;
        cout<<"Branch: "<<branch<<endl;
    }
};
int main()
{
    student obj("Abhigna",62,"AIML");
    obj.display();
    cout<<"\n";
    obj.Name = "Jeevana";
    obj.rno = 5;
    obj.branch = "CSE";
    obj.display();
    return 0;
}