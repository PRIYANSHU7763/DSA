//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int  n1= str1.size();
        int n2=str2.size();
        if(n1!=n2){
            return false;
        }
        bool left= true;
        bool right= true;
        for(int i=0;i<n1;i++){ //left
            if(str1[i]!=str2[(i+2)%n1]){
                left=false;
                break;
            }
        }
            for(int i=0;i<n1;i++){ //right
            if(str1[i]!=str2[(i+n1-2)%n1]){
                right=false;
                break;
            }
        }
        if(left==true|| right==true){
            return true;
        }
        else{
            return false;
        }
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends