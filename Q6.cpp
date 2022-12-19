#include<iostream>
using namespace std;

int main()
{
    struct address
    {
        int code;
        char name[15];
        char city[15];
        char country[15];
    };

    address rec;

    cout<<"Enter code: "<<endl;
    cin>>rec.code;
    cout<<"Enter name:"<<endl;
    cin>>rec.name;
    cout<<"Enter city:"<<endl;
    cin>>rec.city;
    cout<<"Enter country:"<<endl;
    cin>>rec.country;

    cout<<rec.name<<"\t"<<rec.code<<"\t"<<rec.city<<"\t"<<rec.country<<"\t"<<endl;
}