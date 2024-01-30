#include<bits/stdc++.h>
using namespace std;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

string a = "aaaaaaaaaaaaaabbbbbbbbbddddddddddaaccccccccccccc";
//string b = "abccc";
char b = 'c';

bool matches = true;
int m1=-1;
int m2=-1;


string::iterator it;

it = lower_bound(a.begin(),a.end(),b);

cout<<*it<<endl;


}
