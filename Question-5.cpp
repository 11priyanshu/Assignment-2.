// Question - 5.(Difference Between ASCII of Two Characters.)

#include<iostream>
using namespace std;
int main(){
    char ch1;
    cout<<"Enter First Charecter : ";
    cin>>ch1;
    char ch2;
    cout<<"Enter Second Charecter : ";
    cin>>ch2;
    int x = (int)ch1-(int)ch2;
    cout<<"Difference Of Two Charecter : ";
    cout<<x;

}