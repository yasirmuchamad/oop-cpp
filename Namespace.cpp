#include<iostream>
#include<string>

using namespace std;

//data member
class ClassTypes{
    public:
        string dataStr;
        double dataDouble;
        double m_dataDouble;

        ClassTypes(const char* dataStr, double dataDouble){
            //menggunakan namespace
            ClassTypes::dataStr = dataStr;

            //menggunakan this
            cout << this << endl;
            this->dataDouble = dataDouble;

            m_dataDouble = dataDouble;
        }

};

//member function
class Player{
    public:
        string name;
        double power;
        int healt;

        Player(const char* name, double power){
            Player::setName(name);
            this->setPower(power);
        }

        void setName(const char* name){
            this->name = name;
        }

        void setPower(double power){
            this->power = power;
        }

        void setHealt(int);
};

void Player::setHealt(int healt){
    this->healt = healt;
}

int main(int argc, char const *argv[])
{
    ClassTypes* obj1 = new ClassTypes("Luffy", 0.05);
    cout << obj1->dataStr << endl;
    cout << obj1->dataDouble << endl;
    cout << obj1->m_dataDouble << endl;

    Player* player1 = new Player("Usop", 100);
    cout << player1->name << endl;
    cout << player1->power << endl;
    player1->setHealt(10);
    cout << player1->healt << endl;
    return 0;
}
