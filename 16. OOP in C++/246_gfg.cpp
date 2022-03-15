#include<iostream>
using namespace std;

class Player
{
    static int count; // not to be used in main
    public:
        Player(){count++;}
        ~Player(){count--;}
        static int getCount(){return count;} // return type is static int
};
int Player:: count = 0;

int main()
{
    Player p1, p2;
    cout<<Player::getCount(); // getCount() returns a static datatype
    return 0;
}