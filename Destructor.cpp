#include<iostream>
#include<string>
using namespace std;

class Player{
    public:
        string nama;

    //konstructor
    Player(const char* nama){
        Player::nama = nama;
        cout << "Player " << Player::nama << " di buat" << endl;
    }

    //destructor
    ~Player(){
        cout << "Player " << Player::nama << " di hapus" << endl;
    }

};

void membuatPlayerStack(){
    Player stackPlayer = Player("Dragon");
}

void membuatPlayerHeap(){
    Player* heapPlayer = new Player("Garp");
    delete heapPlayer;
}


int main(int argc, char const *argv[])
{
   membuatPlayerStack();
   membuatPlayerHeap();

    return 0;
}
