//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    
    vector<int>v(26,0);
    int n=s.size();
    string ans;
    for(int i=0;i<n;i++){
        v[s[i]-'a']++;
        if(v[s[i]-'a']>1){
            ans.push_back(s[i]);
            return ans;// pushing the ans in the string and returning,
                      //  because function  is of string type.
            
        }
        
    }
    return "-1";// if not found then  returning -1 as a string.
}