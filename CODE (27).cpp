#include<bits/stdc++.h>
using namespace std;
vector<string> papers;

string prepare_string(int limit)
{
    string a = "000000000000000";
    for(int i =0; i<limit; i++) a[i] = '1';

    return a.substr(0,papers.size());


}





int main()
{
  //  freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


    int tc;
    cin>>tc;


    getchar();
    string waster;
    getline(cin,waster);


    while(tc--)
    {
        char nums[15];
        gets(nums);



        papers.clear();
        string newspaper_name;
        while(getline(cin,newspaper_name) && newspaper_name.size())
        {
            papers.push_back(newspaper_name);
        }


        int from  = -1;
        int to  = -1;

        if(nums[0] == '*')
        {
            from = 1;
            to = papers.size();
        }
        else
        {
            int a, b;

            int ll =strlen(nums);

            if(ll<3)
            {
                sscanf(nums,"%d",&a);
                from = a;
                to =a;
            }

            else
            {
                sscanf(nums,"%d %d",&a,&b);
                from = a, to = b;
            }

        }


        for(int i = from ; i <= to ; i++)
        {


            cout<<"Size "<<i<<endl;

            string permute = prepare_string(i);
            int length = permute.size();

            do
            {
                int delimiter=0;
                for(int j=0; j<length; j++)
                {
                    if(permute[j] == '1' )
                    {
                        cout<<papers[j];
                        delimiter++;
                        if(delimiter != i) cout<<", ";
                    }


                }
                cout<<endl;
            }
            while(prev_permutation(permute.begin(),permute.end()));;


            if( i != to ) cout<<endl;
        }

        if(tc) cout<<endl;

        cout<<endl;

    }




}

