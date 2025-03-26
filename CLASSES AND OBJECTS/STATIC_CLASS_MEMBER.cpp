#include <iostream>

using namespace std;

class item
{
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }

    void getcount(void)
    {
        cout << "count: " << count << "\n";
    }
};

int item::count;

int main()
{
    item a, b, c;
    a.getcount();  // count is initialized to zero
    b.getcount();  // display count
    c.getcount();  // display count

    a.getdata(100);  // getting data into object a
    b.getdata(200);  // getting data into object b
    c.getdata(300);  // getting data into object c

    cout << "After reading data\n";

    a.getcount();  // display count
    b.getcount();  // display count
    c.getcount();  // display count

    return 0;
}
