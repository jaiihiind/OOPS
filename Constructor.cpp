#include <iostream>
using namespace std;
class AreaofRect
{
    int length;
    int breadth;

public:
    AreaofRect(int l, int b)
    {
        length = l;
        breadth = b;
        int c = length * breadth;
        cout << "area of rectanlge=" << c << endl;
    }
    int display()
    {
        cout << "length=" << length << endl;
        cout << "breadth=" << breadth;
    }
};

int main()
{
    AreaofRect R(2, 2);
    R.display();

    return 0;
}

// Output
// area of rectanlge=4
// length=2
// breadth=2