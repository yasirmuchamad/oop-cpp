#include<iostream>
#include<string>
#include<chrono>
using namespace std;
using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;
class Kosong{
    public:

        int data(){
            return 1;
        }
};

class Isi{
    public:
        int dataInt1;//4byte
        int dataInt2;//4byte
        double dataDouble;//8byte
        string dataStr;//24byte
};

class Mahasiswa{
    public:
        string nama;
    
    Mahasiswa(const char* nama){
        Mahasiswa::nama = nama;
    }
};



int main(int argc, char const *argv[])
{
    // cout<< "Alokasi kelas kosong : " << sizeof(Kosong) << "byte" << endl;
    // cout<< "Alokasi kelas isi    : " << sizeof(Isi) << "byte" << endl;


    //Address
    string a;
    string b;
    Mahasiswa obj1 = Mahasiswa("Usop");
    Mahasiswa* obj2 = new Mahasiswa("franky");
    string c;
    string d;

    cout << "\nAddress stack" << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << &obj1 << endl;
    cout << &obj2 << endl;
    cout << obj2 << endl;
    cout << &c << endl;
    cout << &d << endl;

    // seberapa cepat membuat object di masing2 memory
    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    cin.get();
    *tStackStart = Clock::now();
    Mahasiswa obj3 = Mahasiswa("Sanji");
    *tStackEnd = Clock::now();

    cin.get();
    *tHeapStart = Clock::now();
    Mahasiswa* obj4 = new Mahasiswa("Zoro");
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "Waktu pembuatan object di Stack : " << durasi.count() <<endl;

    durasi = *tHeapEnd - *tHeapStart;
    cout << "Waktu pembuatan object di Heap : " << durasi.count() <<endl;

    return 0; 
}
