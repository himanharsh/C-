#include<iostream>
using namespace std;
// online game active players count
class Player
{
    public:
        static int count; // created once
        Player(){count++;}
        ~Player(){count--;}
};
int Player::count = 0; // static members are defined outside the class using scope resolution operator

int main()
{
    Player p1;
    cout<<Player::count<<" ";// standard way of accessing static members is to use :: operator
    Player p2;
    cout<<Player::count<<" ";
    {
        Player p3;
        cout<<Player::count<<" ";
    } // after the end of this scope, destructor works which reduces the player count
    cout<<Player::count<<" ";
    return 0;
}