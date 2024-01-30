#include<bits/stdc++.h>
using namespace std;

multiset<int,greater<int> > greenset;
multiset<int,greater<int> > blueset;
multiset<int,greater<int> >::iterator it;
vector<int> greensend;
vector<int> bluesend;


int main()
{
  //  freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int tc,green,blue,fields,a;
    cin>>tc;

    while(tc--)
    {
        greenset.clear();
        blueset.clear();
        greensend.clear();
        bluesend.clear();


        cin>>fields>>green>>blue;
        for(int i=0; i<green; i++)
        {
            cin>>a;
            greenset.insert(a);
        }
        for(int i=0; i<blue; i++)
        {
            cin>>a;
            blueset.insert(a);
        }

       // for(it=greenset.begin(); it != greenset.end() ; ++it) cout<<(*it)<<endl;
       // cout<<"---\n";
       // for(it=blueset.begin(); it != blueset.end() ; ++it) cout<<(*it)<<endl;
       // cout<<"---\n";


        while(blueset.size() && greenset.size() )
        {
        //    for(it=greenset.begin(); it != greenset.end() ; ++it) cout<<(*it)<<endl;
       // cout<<"---\n";
      //  for(it=blueset.begin(); it != blueset.end() ; ++it) cout<<(*it)<<endl;
       // cout<<"---\n";

            int fights = fields;
            int ttt = min((int)greenset.size(),(int)blueset.size());
            fights =min(fields,ttt);
            //cout<<fights<<endl;

            for(int f=0; f<fights; f++)
            {
                int gg,bb;


                it = greenset.begin();
                gg = *it ;
                greenset.erase(it);


                it = blueset.begin();
                bb = *it ;
                blueset.erase(it);


                if(gg>bb) greensend.push_back(gg-bb);
                else if(bb>gg) bluesend.push_back(bb-gg);




            }

            for(int i=0; i<greensend.size() ; i++) greenset.insert(greensend[i]);
            for(int i=0; i<bluesend.size() ; i++)  blueset.insert(bluesend[i]);
            greensend.clear();
            bluesend.clear();

        }

        if( greenset.empty() && blueset.empty()) cout<<"green and blue died\n";
        else if(greenset.empty()  )
        {
            cout<<"blue wins\n";
            for(it=blueset.begin(); it != blueset.end() ; ++it) cout<<(*it)<<endl;
        }

        else if(blueset.empty() )
        {
            cout<<"green wins\n";
            for(it=greenset.begin(); it != greenset.end() ; ++it) cout<<(*it)<<endl;
        }
        else
        {
            cout<<"NULL"<<endl;
        }


        if(tc) cout<<endl;
    }

}
