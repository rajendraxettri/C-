#include<iostream>
using namespace std;


class animal{
    private:
    static int countNumberOfobject;
    char nameOfAnimal[50];

    public:

    void getData(){
        cout<<"Enter Animal Name : ";
        cin>>nameOfAnimal;
        countNumberOfobject++;
    }

    void displayData(){
        cout<<"Animal Name : "<<nameOfAnimal<<endl;
    }

    void displayNumberOfobject(){

        cout<<"The number of object is : "<<countNumberOfobject<<endl;
    }
};
 int animal::countNumberOfobject;


int main()
{

animal a1,a2,a3;

a1.getData();
a1.displayNumberOfobject();


a2.getData();
a2.displayNumberOfobject();


a3.getData();
a3.displayNumberOfobject();


cout<<"Animal List :"<<endl;
cout<<"______________________"<<endl;
a1.displayData();
a2.displayData();
a3.displayData();
cout<<"______________________"<<endl;


return 0;
}//@rajendra_chimala