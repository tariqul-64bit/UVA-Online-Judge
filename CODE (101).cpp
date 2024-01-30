#include<bits/stdc++.h>
using namespace std;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    string in;
    int arr[10];
    int tc=0;

    while(getline(cin,in))
    {
        memset(arr,0,sizeof(arr));

        for(int i=0; i<in.size(); i++)
        {
            int l= (int)in[i] - 96;
         //   cout<<l<<endl;

            switch(l)
            {
            case 1:
                arr[1]++;
                arr[2]++;
                arr[4]++;
                break;
            case 3:
                arr[3]++;
                arr[2]++;
                arr[6]++;
                break;

            case 7:
                arr[7]++;
                arr[8]++;
                arr[4]++;
                break;
            case 9:
                arr[9]++;
                arr[8]++;
                arr[6]++;
                break;
            case 2:
                arr[2]++;
                arr[1]++;
                arr[3]++;
                arr[5]++;
                break;
            case 4:
                arr[4]++;
                arr[1]++;
                arr[7]++;
                arr[5]++;
                break;
            case 6:
                arr[6]++;
                arr[5]++;
                arr[3]++;
                arr[9]++;
                break;
            case 8:
                arr[8]++;
                arr[7]++;
                arr[9]++;
                arr[5]++;
                break;
            case 5:
                arr[5]++;
                arr[8]++;
                arr[6]++;
                arr[4]++;
                arr[2]++;
                break;



            }

        }

        cout<<"Case #"<<++tc<<":\n";

        for(int i=1; i<=9; i++)
        {
            cout<<arr[i]%10;
            if(!(i%3)) cout<<endl;
            else cout<<" ";
        }
    }


}
