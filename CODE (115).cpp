#include<bits/stdc++.h>
using namespace std;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    priority_queue<int,vector<int>,greater<int> > pq;

    int n,tm;
    while(cin>>n && n)
    {
        {
            while(n--)
            {
                cin>>tm ;
                pq.push(tm);
            }
        }

        long long ans=0,temp_ans;


        while(!pq.empty())
        {
            temp_ans=0;
            temp_ans+=pq.top();
            pq.pop();
            temp_ans+=pq.top();
            pq.pop();
            ans+=temp_ans;

            if(!pq.empty()) pq.push(temp_ans);


        }
        cout<<ans<<endl;

        //while(pq.size()) pq.pop();


}
}
