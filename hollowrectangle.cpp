#include <iostream>
using namespace std;

int main()
{

    int b,l;
    cout << "Enter breadth and length: ";
    cin >> b>>l;

    
    for (int i = 1; i <= l; i++)
    {

        for (int j = 1; j <=b; j++)
        {

            if ((i == 1 ||j == 1) || (i == l ||j == b))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
// print hallow rectangle
// ************
// *          *
// *          *
// *          *
// ************