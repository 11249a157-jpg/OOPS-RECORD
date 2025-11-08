#include<iostream>
using namespace std;
class Car{
    public:
         string model;
         string company;
         float price;
         void display(){
            cout<<"Company:"<<company<<endl;
            cout<<"Model:"<<model<<endl;
            cout<<"Price:"<<price<<endl;
         }
};
int main()
{
    Car c1,c2,c3;
    c1.company="Toyota";
    c1.model="Innova";
    c1.price=120000;
    c2.company="Honda";
    c2.model="city";
    c2.price=200000;
    c3.company="hyundai";
    c3.model="i20";
    c3.price=4000000;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
