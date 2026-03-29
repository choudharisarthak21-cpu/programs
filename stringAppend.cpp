#include<iostream>
using namespace std;
int main()
{
    string FName;
    string LName;
    cout<<"Enter the first Name and Last Name "<<endl;
    cin>>FName>>LName;
    cout<<FName.append(LName);

}