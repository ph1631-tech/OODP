#include<iostream>
using namespace std;
class student
{
    private:
        double x;
        double y;
    public:
        int add(int a,int b)
        {
            x=a;
            y=b;
            int sum=x+y;
            cout<<sum<<endl;
        }
        double add(double a,double b)
        {
            x=a;
            y=b;
            double sum=x+y;
             cout<<sum<<endl;
        }
};
int main()
{
    int c,d;
    cout<<"enter values of integer sum"<<endl;
    cin>>c;
    cin>>d;
    cout<<"enter values of decimal sum"<<endl;
    double e,f;
    cin>>e;
    cin>>f;
    student s1;
    s1.add(c,d);
    s1.add(e,f);
}







