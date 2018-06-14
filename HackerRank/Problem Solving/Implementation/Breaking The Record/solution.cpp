#include <iostream>

using namespace std;

int main()
{
    int count;
    cin >> count;
    int arr[count];
    for(int i=0;i<count;i++)
    {
        cin >> arr[i];
    }

    int max, min, maxCount, minCount;

    max = arr[0];
    min = arr[0];

    maxCount = minCount = 0;

    for(int i=1;i<count;i++)
    {
        if(arr[i] > min && arr[i] < max)
        {
            continue;
        }
        else
        {
            if(arr[i] > max)
            {
                max = arr[i];
                maxCount++;
            }
            else if(arr[i] < min)
            {
                min = arr[i];
                minCount++;
            }
            else
            {
                continue;
            }
        }
    }

    cout << maxCount << " " << minCount;


    return 0;
}