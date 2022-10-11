//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string>st;
        int n=S.size();
        string temp="";
        
        for(int i=0;i<n;i++){
            if(S[i]!='.'){
                temp=temp+S[i];
            }
            else{
                st.push(temp);
            temp="";
            }
        }
        st.push(temp);
        
        string ans;
        while(!st.empty()){
            
            if(st.size()>1){
                ans=ans+st.top()+".";
            }
            else{
                ans=ans+st.top();
            }
            
            st.pop();
          }
          return ans ;
        
        
        
        
        } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends