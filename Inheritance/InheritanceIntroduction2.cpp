#include <iostream>
#include <string>
using namespace std;

class Mammal {
    private:
        bool inWater;
        int numOfLegs;
    public:
    //setter & getter
        void setInWater(bool whetherInWater){
            inWater = whetherInWater;
        }
        bool isInWater() {
            return inWater;
        }
        void setNumOfLegs(int leg) {
            numOfLegs = leg;
        }
        int getNumOfLegs() {
            return numOfLegs;
        }
};

class Dog: public Mammal{
    private:
        string type;

    public: 
        Dog(string _type):type(_type) {
            setNumOfLegs(4);
            setInWater(false);
        }
};

int main() {
    Dog mydog("shiba");
    cout << mydog.getNumOfLegs() << endl;
    string whetherInWater;
    if (mydog.isInWater()){
        whetherInWater = "Yes";
    }
    else {
        whetherInWater = "No";
    }
    cout << "Are dogs living in water? " << endl << whetherInWater << endl;
}