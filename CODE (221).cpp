#include<bits/stdc++.h>
using namespace std;

#define left 0
#define right 1

queue<int> lq;
queue<int> rq;
queue<int> loadq;


int main()
{
    freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int n,t,m;
    int ctime=0,cpos=0;

    cin>>n>>t>>m;

    string tmp;
    int tm;
    for(int i =0; i<m; i++)
    {
        cin>>tm>>tmp;
       // cout<<tm<<tmp<<endl;
        if(tmp[0] == 'l') lq.push(tm);
        else   rq.push(tm);


    }

   // while(!lq.empty() && !rq.empty() ) { cout<<lq.front(); lq.pop();rq.pop(); }

    int dxtime,dxpos;

    while(!lq.empty()  )
    {
        if(lq.empty())
        {
            dxtime = rq.front();
            dxpos =right;
        }
        else if(rq.empty())
        {
            dxtime = lq.front();
            dxpos=left;
        }
        else if
        (lq.front() > rq.front())
        {
            dxpos=right;
            dxtime = rq.front();
        }
        else
        {
            dxpos = left;
            dxtime= lq.front();
        }


    if(dxpos!= cpos)
{
    cpos = dxpos ;
    ctime +=  t;
}

int load=0;

if(cpos == left)
{
    while(lq.front() <= ctime && load<n )
        {
            load++;
            int sa=lq.front();

            lq.pop();
            loadq.push(sa);
        }
    }

    else if(cpos == right)
{
    while(rq.front() <= ctime && load<n )
        {
            load++;
            int sa = rq.front();
            rq.pop();
            loadq.push(sa);
        }
    }

    cpos == left ? cpos =right : cpos =left;
    ctime+=t;




    while(!loadq.empty())
    {
        cout<<ctime<<endl; loadq.pop();
    }

}
}
