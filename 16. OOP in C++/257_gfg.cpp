#include<iostream>
using namespace std;
// If same variable or function name exists in two ancestor classes or inheritted classes, we can 
// use scope resolution operator to distinguish
class Cuboid 
{
   protected:
        int length, width, height;
    public:
        void display(){
            cout<<length<<" "<<width<<" "<<height<<endl;
        }
};

class CuboidVol: public Cuboid
{
    public:
    void read_input(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }
    void display(){
        cout<<length*width*height<<endl;
    }
};

int main()
{
    int l, w, h;
    cin>>l>>w>>h;

    CuboidVol c_vol;
    c_vol.read_input(l,w,h);
    c_vol.Cuboid::display();// to use to display function of Cuboid class
    c_vol.display();// to use display function of CuboidVol class because c_vol in an object of this class
    return 0;
}