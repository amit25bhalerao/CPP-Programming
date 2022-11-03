#include <iostream>
using namespace std;

int main()
{
    int low, high, i, j, count;

    cout << "Enter Lower Interval: ";
    cin >> low;

    cout << "Enter Higher Interval: ";
    cin>>high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";

    for (i=low;i<=high;i++)
    {
        count=0;
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
                count++;
        }
        if (count==2)
            cout<< i<<" ";
    }

    return 0;
}