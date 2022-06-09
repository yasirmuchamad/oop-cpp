#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string nim;
        string prodi;

        Mahasiswa(string nama, string nim, string prodi){
            Mahasiswa::nama = nama;
            Mahasiswa::nim = nim;
            Mahasiswa::prodi = prodi;
        }

        string stringify(){
            return "\n" + nama + " " + nim + " " + prodi;

        }
};

class DBase{
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DBase(const char* fileName){
            DBase::fileName = fileName;
        }

        void save(Mahasiswa data){
            cout << data.nama << endl;
            cout << data.nim << endl;
            cout << data.prodi << endl;

            DBase::out.open(DBase::fileName, ios::app);
            DBase::out << data.stringify();
            DBase::out.close();
        }

        void showAll(){
            DBase::in.open(DBase::fileName, ios::in);
            string nama, nim, prodi;
            int index = 1;

            while (!DBase::in.eof())
            {
                DBase::in >> nama;
                DBase::in >> nim;
                DBase::in >> prodi;
                cout << index++ << ".\t";
                cout << nama << "\t\t"; 
                cout << nim << "\t\t";
                cout << prodi << "\t\t\t\t"<< endl ;
            }
            DBase::in.close();
            
        }
};

int main(int argc, char const *argv[])
{
    DBase database = DBase("data.txt");
    database.showAll();
    string nama, nim, prodi;
    cout << "Inputkan data Mahasiswa" << endl;
    cout << "Nama : " ;
    cin >> nama;
    cout << "Nim : " ;
    cin >> nim;
    cout << "Prodi : " ;
    cin >> prodi;
    Mahasiswa dataMahasiswa = Mahasiswa(nama, nim, prodi);
    

    //save data ke database
    database.save(dataMahasiswa);

    //tampilkan seluruh data di database
    database.showAll();
    return 0;
}
