#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;

    cin >> a >> b;

    cout << "A + B = " << a + b << '\n'

         << "A - B = " << a - b << '\n'

         << "A * B = " << a * b << '\n'

         << "A / B = " << a / b << '\n';


         int max = a;

         if (b >= a)
         {
             max = b;
         }

         cout << "max = " << max;

         int min = a;

         if (b <= a)
         {
             min = b;
         }

         cout << "min = " << min;


    return 0;
}
