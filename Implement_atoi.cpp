//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    /*You are required to complete this method */
    int atoi(string &s) {
        // Your code here
        int ans=0;
        if(s[0]=='-'){
            for(int i=1; i<s.size(); i++){
            if((s[i]>=48 && s[i]<=57)){
                ans = ans*10 + s[i]-'0';
            }
            else{
                return -1;
            }
            
        }
        return (-1)*ans;
        }
        for(int i=0; i<s.size(); i++){
            if((s[i]>=48 && s[i]<=57)|| s[i] =='-'){
                ans = ans*10 + s[i]-'0';
            }
            else{
                return -1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        int ans = ob.atoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends
