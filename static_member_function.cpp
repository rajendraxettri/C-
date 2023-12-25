#include<iostream>
using namespace std;

class myclass{
    private:

    static int countNumber;

    public:
    static int displayNumberOfInitialCounter(){
        return countNumber;
    }

    static int increaseNumberOfCounter(){
        countNumber++;
    }


};

int myclass::countNumber;

int main()
{

cout<<"The Number of Initial Counter Is "<<myclass::displayNumberOfInitialCounter()<<endl;
myclass::increaseNumberOfCounter();
myclass::increaseNumberOfCounter();
myclass::increaseNumberOfCounter();
myclass::increaseNumberOfCounter();
myclass::increaseNumberOfCounter();

cout<<"The Numeber of current counter is : "<<myclass::displayNumberOfInitialCounter()<<endl;

return 0;
}//@rajendra_chimala