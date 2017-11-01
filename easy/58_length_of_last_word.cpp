class Solution {
public:
    
    int removeLastSpace(string& s, int sz) {
        
        int rem = 0;

        for(int i = 0; i<sz;i++) {
            if(s[sz-i-1] == ' ')
            {
                s.pop_back();
                rem++;
            }
            else
                return rem;
        }
     
        return rem;
    }
    
    int lengthOfLastWord(string s) {
        

        
        int sz = s.length();
        int rem = removeLastSpace(s,sz);
        
        int cnt = 0;
        sz = sz - rem;
        
        
        for(int i = 0; i<sz; i++) {
            
            if(s[sz-i-1] != ' ') 
                cnt++;
            else 
                break;
        }
        
        return cnt;
    }
};
