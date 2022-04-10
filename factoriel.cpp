#include <iostream>

using namespace std;

int main()
{
    int number;
    int fac =1;

        cout << "Please Enter Number: ";
        cin >> number;

        if(number >1){
            for (int k = 1; k <= number; ++k) {
            fac *= k;
            }
        }
        cout << "Factorial result: " << fac << endl;
    return 0;
}

#include <iostream>

using namespace std;

int fac(int number)
{

    while (number>1)
    {
        return number*fac(number-1);
    }
}

int main()
{

    int number;
    int k=0;

    while (k == 0)
    {
        cout << "Please Enter Number (For exit, enter -1): ";
        cin >> number;
        if (number==-1)
        {
            cout << "Loop finished!!! ";
            break;
        }
        else {
            cout << "Factorial result: " << fac(number) << endl;
        }
    }
    return 0;
}


