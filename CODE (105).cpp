#include<bits/stdc++.h>
using namespace std;
string   vowel ="";
string consonant ="";
int length;




int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

for(int i=0;i<21;i++)  vowel+="A";
for(int i=0;i<21;i++)  vowel+="U";
for(int i=0;i<21;i++)  vowel+="E";
for(int i=0;i<21;i++)  vowel+="O";
for(int i=0;i<21;i++)  vowel+="I";




for(int i=0;i<5;i++)  consonant+="J";
for(int i=0;i<5;i++)  consonant+="S";
for(int i=0;i<5;i++)  consonant+="B";
for(int i=0;i<5;i++)  consonant+="K";
for(int i=0;i<5;i++)  consonant+="T";
for(int i=0;i<5;i++)  consonant+="C";
for(int i=0;i<5;i++)  consonant+="L";
for(int i=0;i<5;i++)  consonant+="D";
for(int i=0;i<5;i++)  consonant+="M";
for(int i=0;i<5;i++)  consonant+="V";
for(int i=0;i<5;i++)  consonant+="N";
for(int i=0;i<5;i++)  consonant+="W";
for(int i=0;i<5;i++)  consonant+="F";
for(int i=0;i<5;i++)  consonant+="X";
for(int i=0;i<5;i++)  consonant+="G";
for(int i=0;i<5;i++)  consonant+="P";
for(int i=0;i<5;i++)  consonant+="Y";
for(int i=0;i<5;i++)  consonant+="H";
for(int i=0;i<5;i++)  consonant+="Q";
for(int i=0;i<5;i++)  consonant+="Z";
for(int i=0;i<5;i++)  consonant+="R";


string ans="";

for(int i=0;i<vowel.size();i++)
{
ans = ans + vowel[i] + consonant[i];
}

int tc,tcc;
cin>>tc;

for(tcc=0;tcc<tc;)
{
    cin>>length;


printf("Case %d: ",++tcc);

cout<< ans.substr(0,length)<<endl;


}




}
