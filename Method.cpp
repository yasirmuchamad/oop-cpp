#include<iostream>
#include<string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        double ipk;

        Mahasiswa(string nama, double ipk){
            Mahasiswa::nama = nama;
            Mahasiswa::ipk = ipk;
        }

        //method tanpa param tanpa return
        void tampilkanData(){ 
            cout << "nama saya " << nama ;
            cout << ", dan ipk saya " << ipk << endl;
        }

        //method dengan param tanpa return
        void ubahNama(const char* namabaru){
            Mahasiswa::nama = namabaru;
        }

        //method tanpa param dengan return
        string getNama(){
            return Mahasiswa::nama;
        }

        double getIpk(){
            return Mahasiswa::ipk;
        }

        //method dengan param dan return
        double katrolIpk(const double &tambahNilai){
            return Mahasiswa::ipk + tambahNilai;
        }
};



int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("Usop", 4.0);
    Mahasiswa mahasiswa2 = Mahasiswa("Cooper", 3.6);

    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();

    mahasiswa1.ubahNama("Yamato");
    mahasiswa1.tampilkanData();

    string data1 = mahasiswa1.getNama();
    cout << "data1 : " << data1 << endl;
    cout << "dataIpk : " << mahasiswa1.getIpk() << endl;
    cout << "nilai katrol : " << mahasiswa2.katrolIpk(0.2) << endl;

    return 0;
}
