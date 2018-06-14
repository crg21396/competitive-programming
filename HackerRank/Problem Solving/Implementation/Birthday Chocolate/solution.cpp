#include <iostream>

using namespace std;

int main()
{
    int size,day,month;
    int answer = 0;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }


    cin >> day >> month;


    for(int i=0;i<=size-month;i++)
    {
        int addition = 0;
        for(int j=0;j<month;j++)
        {
            addition += arr[i+j];
        }
        if(addition == day)
        {
            answer++;
        }
    }

    cout << answer;


    return 0;
}