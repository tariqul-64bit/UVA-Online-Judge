#include<bits/stdc++.h>
using namespace std;
int main()
{
    string in,inb;
    vector<string> dictionary;
    int dic_array[1010][130];
    memset(dic_array,0,sizeof(dic_array));
    vector<string> puzzle;
    int puzzle_array[130];
    while(cin>>in)
    {
        if(in == "#") break;
        dictionary.push_back(in);
    }


    for(int i=0;i<dictionary.size();i++)
    {   string temp= dictionary[i];
        for(int j=0;j<temp.size();j++)
        {
            int f = temp[j];
            dic_array[i][f] ++;
        }

    }

    getchar();

    while( getline(cin,in) && in != "#")
    {
        puzzle.push_back(in);
    }


    for(int i=0;i<puzzle.size();i++)
    {
        string temp =  puzzle[i];
        memset(puzzle_array,0,sizeof(puzzle_array));
        for(int j=0;j<temp.size();j++)
        {
            if(temp[j] == ' ') continue;
            int f= temp[j];

            puzzle_array[f]++;
        }
    int ans =0;
    bool word_makeable;

    for(int i=0;i<dictionary.size();i++)
    {
        word_makeable= true;
        for(int j= 96;j<125;j++)
        {
            if(puzzle_array[j] < dic_array[i][j] )
            {
                word_makeable = false; break;
            }

        }
    if(word_makeable) ans++;
    }


cout<<ans<<endl;
    }



}
