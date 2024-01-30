#include<bits/stdc++.h>
using namespace std;
vector<int> temp_operating;
long long unsigned minimum =0;
long long unsigned maximum = 0;

int main()
{
 //   freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int tc;
    cin>>tc;
    while(tc--)
    {
        int a;
        char opp ;
        vector<int> num;
        vector<int> num2;
        vector<char> op;
        minimum = 0;
        maximum = 1;
        temp_operating.clear();

        while(scanf("%d%c",&a,&opp) > 0 )
        {
            num.push_back(a);
            if( opp  ==  '\n' ) break;
            else if ( opp == '\0') break;
            op.push_back(opp);
        }
        num2 = num;

        for(int i=0; i<num.size()-1 ; i++ )
        {
            if(op[i] == '*')
            {
                if(num[i]) temp_operating.push_back(num[i]);
                if(num[i+1]) temp_operating.push_back(num[i+1]);
                num[i] = 0;
                num[i+1] = 0;
            }
            else if( temp_operating.size())
            {
                long long unsigned mult =1;
                for(int j =0 ; j< temp_operating.size() ; j++)
                {
                    mult = mult * temp_operating[j];
                }
                minimum += mult ;
                temp_operating.clear();
            }
        }

        if( temp_operating.size())
        {
            long long unsigned mult =1;
            for(int j =0 ; j< temp_operating.size() ; j++)
            {
                mult = mult * temp_operating[j];
            }
            minimum += mult ;
            temp_operating.clear();
        }

        // finding maximum starts
        for(int i=0; i<num.size()-1 ; i++ )
        {
            if(op[i] == '+')
            {
                if(num2[i]) temp_operating.push_back(num2[i]);
                if(num2[i+1]) temp_operating.push_back(num2[i+1]);
                num2[i] = 0;
                num2[i+1] = 0;
            }
            else if( temp_operating.size())
            {
                long long unsigned mult =0;
                for(int j =0 ; j< temp_operating.size() ; j++)
                {
                    mult = mult + temp_operating[j];
                }

                maximum *= mult ;
                temp_operating.clear();
            }
        }

        if( temp_operating.size())
        {
          long long unsigned mult =0;
            for(int j =0 ; j < temp_operating.size() ; j++)
            {
                mult = mult + temp_operating[j];
            }

            maximum *= mult ;
            temp_operating.clear();
        }

        for(int i=0; i<num.size(); i++) minimum += num[i];
        for(int i=0; i<num2.size(); i++) if(num2[i]) maximum *= num2[i];

printf("The maximum and minimum are %llu and %llu.\n",maximum,minimum);
    }
}
