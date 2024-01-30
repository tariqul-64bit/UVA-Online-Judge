#include<bits/stdc++.h>
using namespace std;

bool iss,isq,ispq;
int main()
{
//freopen("input.txt","w",stdout);
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


int a,b,n;
while(cin>>n )
{
stack<int> s;
queue<int> q;
priority_queue<int> pq;
iss=isq=ispq=true;


for(int i=0;i<n;i++)

    {
         cin>>a>>b;
if(a==1) {
if(iss) s.push(b);
if(isq) q.push(b);
if(ispq) pq.push(b);
}

else if(a==2)
{
    if(s.empty() || s.top() !=b) iss=false;
    else s.pop();
    if(q.empty() || q.front() !=b) isq=false;
    else q.pop();
    if(pq.empty() || pq.top() !=b) ispq=false;
    else pq.pop();
}



}

if(!iss && !isq && !ispq) cout<<"impossible\n";
else if (iss && !isq && !ispq) cout<<"stack\n";
else if(!iss && isq && !ispq) cout<<"queue\n";
else if(!iss && !isq && ispq) cout<<"priority queue\n";
else cout<<"not sure\n";

}



return 0;
}
