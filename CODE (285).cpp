    #include<bits/stdc++.h>
    using namespace std;
    int ans;
    int n;





    int main()
    {

        //freopen("input.txt","r",stdin);
        //freopen("output .txt","w",stdout);

        while(cin>>n && n!=0)
        {
            getchar();
            ans=n;
            string text;
            cin>>text;
            int lastR=-n,lastD=-n;




            for(int i=0; i<n; i++)
            {
                if(text[i] == 'Z')
                {
                    ans =0 ;
                    break;
                }

                else if(text[i] == 'R')
                {
                    ans = min(ans,i-lastD);
                    lastR=i;
                }

                else if( text[i] == 'D')
                {
                    ans = min (ans,i-lastR);
                    lastD=i;

                }

            }

            cout<<ans<<endl;
        }

    return 0;
    }
