#include<bits/stdc++.h>
using namespace std;
                            /* Author :akil_monster */
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)
#define macro 1e18
#define mini -1e18
#define ff first
#define ss second 
#define pb push_back
#define ppb pop_back
#define mod 1000000007
#define ld long double
#define yes printf("YES\n");
#define no printf("NO\n");

 /* Main Code */

string solve(string str)
{
   int c=0;
   unordered_map<string,int> m;
   vector<int> v;
   stringstream s(str);
   string k;
   while(s>>k)
   m[k]++;
   for(auto it:m)
   {
        v.push_back(it.second);
   }
   sort(v.begin(),v.end());
   auto f=--v.end();
   int l=*f;
   for(auto it:m)
   {
        if(it.second==l)
        {
            stringstream ss;
            string s;
            ss<<it.second;
            ss>>s;
            return it.first+' '+s;
        }
   }
}

/* Function Code */

signed main()
{
    string str;
    getline(cin,str);
    cout<<solve(str)<<endl;
    return 0;
}
