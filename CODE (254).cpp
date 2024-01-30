#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    //int trees,t=0;
   // cin>>trees;
   // getchar();
   // string x;
   // getline(cin,x);
int i=0;
    while(i++<=1)
    {
        int counter=0;
        map<string,double> table;
        map<string,double>::iterator it;
        string tmp;
        int a;
        while( getline(cin,tmp))
        {
            if(tmp == "")
            {

                for(it = table.begin(); it != table.end(); ++it)
                {
                    double a = it->second;
                    cout<<it->first<<" ";
                    printf("%.4d\n",a);

                }



               // t++;
                break;

            }

            else
            {
                it=table.find(tmp);
                it == table.end() ? table[tmp]=1 : table[tmp]++;
                counter++;

            }
        }


    }

//cout<<t<<endl;
}
