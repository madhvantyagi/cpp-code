

#include <iostream>
using namespace std;

int main()
{
    int x;
    double positive = 0, negative = 0, counter = 0;
    double average = 0, sum = 0;
    cout << "Enter an integer: " << endl;
   cin>>x;
    while (x != 0)
    {
        cin>>x;
        if (x == 0)
        {

            break;
        }
        else if (x < 0)
        {
            negative++;
            sum += x;
            counter++;
        }
        else if (x > 0)
        {
            positive++;
            sum += x;
            counter++;
        }
    }
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / counter << endl;
    return 0;
}
