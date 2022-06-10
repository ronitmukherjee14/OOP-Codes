#include<iostream>
using namespace std;
class detail
{
    int eno;
    char ename[100];
    float esal;
    public:
    void input()
    {
        cout << "\n";
        cout << "Employee Number: " << endl;
        cin >> eno;
        cout << "Employee name: " << endl;
        cin >> ename;
        cout << "Enter Salary: " << endl;
        cin >> esal;
    }
    void display()
    {
        float TA = esal*0.07;
        float HRA = esal*0.09;
        float basic = 0.0;
        basic = esal+(TA)+(HRA);
        cout<<"The Basic Salary is"<<endl;
        cout<<basic<<endl;
    }
};
int main()
{
    detail a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter data\n"
             << i + 1;
        a[i].input();
    }
    for (int i = 0; i < 5; i++)
    {
        a[i].display();
    }
    return 0;
}