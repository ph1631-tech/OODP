#include<iostream>
using namespace std;
class employee
{
 
    private:
    int id;
    string name;
    float gross;
    float basic;

public:
void read()
{
    cout<<"enter id:"<<endl;
    cin>>id;
    cout<<"enter name:"<<endl;
    cin>> name;
    cout<<"enter basic salary:"<<endl;
    cin>>basic;
}
void calculate()
{
    float dra=0.1 * basic;
    float hra=0.2 * basic;
    gross= dra + hra + basic;

}
void display()
{
    cout<<"\nEmployee id:"<<id;
    cout<<"\nEmployee name:"<<name;
    cout<<"\nbasic salary of employee:"<<basic;
    cout<<"\nGross salary of employee:"<<gross;

}
};
int main()
{
    employee e1,e2;
    cout<<"Enter Details of Employee 1:"<<endl;
    e1.read();
    e1.calculate();
    cout<<"Enter Details of Employee 2:"<<endl;
    e2.read();
    e2.calculate();
    cout<<"\n--------EMPLOYEE INFORMATION----------\n";
    e1.display();
    e2.display();
    return 0;
}
