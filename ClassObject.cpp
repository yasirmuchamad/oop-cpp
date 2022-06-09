#include<iostream>
#include<string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string nim;
        string prodi;
        double ipk;
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1;
    mahasiswa1.nama = "Luffy";
    mahasiswa1.nim = "2010211";
    mahasiswa1.prodi = "TI";
    mahasiswa1.ipk = 3.5;

    cout << "nama mahasiswa1 adalah : " << mahasiswa1.nama << endl;
    cout << "dengan nimnya : " << mahasiswa1.nim << endl;
    cout << "dan prodinya adalah : " << mahasiswa1.prodi << endl;
    cout << "dengan IPK : " << mahasiswa1.ipk << "\n" << endl;

    Mahasiswa data;
    data.nama = "Zoro";
    data.nim = "2010212";
    data.prodi = "TI";
    data.ipk = 3.7;

    cout << "nama data adalah : " << data.nama << endl;
    cout << "dengan nimnya : " << data.nim << endl;
    cout << "dan prodinya adalah : " << data.prodi << endl;
    cout << "dengan IPK : " << data.ipk << "\n" << endl;

    return 0;
}
