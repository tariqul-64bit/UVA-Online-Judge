#include <iostream>
#include <cstdio>
#include <vector>
#include <sstream>
using namespace std;
int main(){
int casos, index, flag = 0, answer = 1;
string cad, output,word, input;
stringstream ss;
scanf("%d",&casos);
getline(cin, cad);
getline(cin,cad);//Empty line
while(casos--){

    vector<string> result;
    while(getline(cin,cad))
    {
        vector<string> vec;
        if(cad.size() == 0)
           break;

        ss<<cad;
        while(ss>>input)
              vec.push_back(input);

        index = 0;
        output = "";

        for(int x=0; x<vec.size(); x++)
        {
            word = vec[x];
            if(index<word.size())
            {
             output += word[index];
             index++;
            }
        }
        result.push_back(output);
        ss.clear();
    }
    if(!flag)
       flag = 1;
    else
        printf("\n");
    printf("Case #%d:\n",answer++);
    for(int h=0; h<result.size(); h++)
        printf("%s\n", result[h].c_str());
}
return 0;
}
