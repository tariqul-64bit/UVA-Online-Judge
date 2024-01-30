#include<bits/stdc++.h>
using namespace std;
int main()
{

    int s,p,y,j,total_age;
    int spot,puff,yertle;
    while(cin>>s>>p>>y>>j)
    {
        bool found=false;
        total_age = (j+12);
        cout<<total_age<<endl;

        for(spot=total_age; spot >= 0; spot--)
        {
            for(yertle =0; yertle <= total_age ; yertle++)
            {
                puff=total_age-spot-yertle;
                if( (spot>puff) && (puff>yertle) )
                {
                if( (spot-puff) == s)
                if( (puff-yertle) == p)
                if( (spot-yertle) ==y)

                    {found=true;break;}
                }
                if(found) break;
            }
        if(found) break;
        }
    cout<<spot<<" "<<puff<<" "<<yertle<<" "<<endl;
    }

}
