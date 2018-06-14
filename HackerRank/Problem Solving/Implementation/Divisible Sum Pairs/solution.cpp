#include <iostream>

using namespace std;

int main()
{
    int size, block;
    int answer = 0;
    cin >> size >> block;

    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<size-1;i++)
    {
        int addition = 0;
        for(int j=i+1;j<size;j++)
        {
            addition = arr[i] + arr[j];
            if(addition % block == 0)
            {
                answer++;
            }
        }
    }

    cout << answer;
    return 0;
}

/*
    using namespace std;
    int main()
    {
       
       int n;
       int k;
       cin >> n >> k;
       int a[n];
       int m[k];
       for(int i=0; i<k; i++)
           m[i]=0;
        for(int i = 0; i < n; i++){
           cin >> a[i];
            m[a[i]%k]++;
        }
        int sum=0;
        sum+=(m[0]*(m[0]-1))/2;
         for(int i=1; i<=k/2 && i!=k-i; i++){
             sum+=m[i]*m[k-i];
         }
        if(k%2==0)
            sum+=(m[k/2]*(m[k/2]-1))/2;
        cout<<sum;
        return 0;
    }
*/