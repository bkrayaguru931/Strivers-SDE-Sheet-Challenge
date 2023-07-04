class Solution{
	public:
void rec(int i, string &s, vector<string> &ans, string curr) {
	    if(i == s.size()) {
	        ans.push_back(curr);
	        return;
	    }
	    rec(i+1, s, ans, curr);
	    rec(i+1, s, ans, curr+s[i]);
	}
vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> res;   
		    rec(0,s,ans,"");
		    sort(ans.begin(), res.end());
		    res.erase(res.begin());
		    return res;
		}
};
