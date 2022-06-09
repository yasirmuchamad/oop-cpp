#include<iostream>
#include<string>
using namespace std;

class Mahasiswa{ //class dengan constructor
    public:
        string nama;
        string nim;
        string prodi;
        double ipk;

        // Mahasiswa(){   //construktor
        //     cout << "ini adalah constructor" << endl;
        // }

        Mahasiswa(string inputNama, string inputNim, string inputProdi, double inputIpk){  //const dengan param
            Mahasiswa::nama = inputNama;
            Mahasiswa::nim = inputNim;
            Mahasiswa::prodi = inputProdi;
            Mahasiswa::ipk = inputIpk;

            cout << Mahasiswa::nama << endl;
            cout << Mahasiswa::nim << endl;
            cout << Mahasiswa::prodi << endl;
            cout << Mahasiswa::ipk << endl;

        }

};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("Usop", "2110212", "TI", 3.4);
    Mahasiswa mahasiswa2 = Mahasiswa("Nami", "2110212", "Sain", 3.8);

    return 0;
}
