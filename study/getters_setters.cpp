#include <iostream>

using namespace std;

// stove = kompor
class Stove {
    private:
        int temperature = 0;
    
    public: //getter to make the priv att readable
        // constructor
        Stove(int temperature) {
            setTemperature(temperature);
        }

        int getTemperature() {
            return temperature;
        }

        void setTemperature(int temperature) {
            if(temperature < 0) {
                this->temperature = 0;
            }
            else if(temperature >= 10) {
                this->temperature = 10;
            }
            else {
                this->temperature = temperature;
            }
        }

};

int main() {
    Stove stove1(4);
    // stove1.setTemperature(11);
    
    cout << "The temperature setting is: " << stove1.getTemperature() << endl;

    return 0;
}