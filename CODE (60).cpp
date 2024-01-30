    #include<bits/stdc++.h>
    using namespace std;
    int tc=0;


    int main()
    {
      // freopen("input.txt","r",stdin);

        int n;
        while(cin>>n)
        {
            if(tc) cout<<endl;
            tc+=1;
            vector<string> names;
            //names.clear();
            map<string,int> table;
            //table.clear();
            map<string,int>::iterator it;
            string tmp;
            for(int i=0; i<n; i++)
            {
                cin>>tmp;
                names.push_back(tmp);
                table.insert(make_pair(tmp,0));
            }
            int total,candidate,resultant,remainder;
            for(int i=0; i<n; i++)
            {
                cin>>tmp;
                cin>>total;
                cin>>candidate;
                if(candidate)resultant = floor(total/candidate);
                if(candidate)remainder = total%candidate;
                    else remainder = total;


                table[tmp]+= remainder;
                table[tmp]-=total;

                for(int j=0; j<candidate; j++)
                {
                    cin>>tmp;
                    table[tmp] += resultant;
                }



            }


    //for(int i=0; i<names.size();i++) cout<<i<<" "<<]\names[i]<<endl;

           for(int i=0; i<names.size();i++)
           cout<<names[i]<<" "<<table[names[i]]<<endl;



        }



    }
