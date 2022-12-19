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

    address rec,rec2,t;

    cout<<"Enter code: "<<endl;
    cin>>rec.code;
    cout<<"Enter name:"<<endl;
    cin>>rec.name;
    cout<<"Enter city:"<<endl;
    cin>>rec.city;
    cout<<"Enter country:"<<endl;
    cin>>rec.country;

    cout<<"Enter code2: "<<endl;
    cin>>rec2.code;
    cout<<"Enter name2:"<<endl;
    cin>>rec2.name;
    cout<<"Enter city2:"<<endl;
    cin>>rec2.city;
    cout<<"Enter country2:"<<endl;
    cin>>rec2.country;

    t = rec;
    rec = rec2;
    rec2 = t;

    cout<<rec2.name<<"\t"<<rec2.code<<"\t"<<rec2.city<<"\t"<<rec2.country<<"\t"<<endl;
}