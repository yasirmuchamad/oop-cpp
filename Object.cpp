#include<iostream>
#include<string>
using namespace std;

class DenganConstructor{
    public:
        string data;

    DenganConstructor(const char* data){
        DenganConstructor::data = data;
    }

    void show(){
        cout << "ini " << DenganConstructor::data << endl;
    }
};

class TanpaConstructor{
    public:
        string data;

    void show(){
        cout << "ini " << TanpaConstructor::data << endl;
    }
};

int main(int argc, char const *argv[])
{
    //1. cara membuat object tanpa constructor
    TanpaConstructor obj1;
    obj1.data = "Luffy";
    obj1.show();

    //2. cara membuat object dengan constructor
    DenganConstructor obj2 = DenganConstructor("Roronoa");
    obj2.show();

    //3. cara lain membuat object dengan constructor
    DenganConstructor obj3("Sanji");
    obj3.show();

    //4. cara membuat object pada heap memory
    DenganConstructor* obj4 = new DenganConstructor("Cooper");
    (*obj4).show();
    obj4->show();
    cout << obj4->data << endl;

    //kenapa?
    // DenganConstructor obj5;
    // obj5 = DenganConstructor("Usoop");

    DenganConstructor* obj5;
    obj5 = new DenganConstructor("Usoop");
    obj5->show(); 



    return 0;
}
