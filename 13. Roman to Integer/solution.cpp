/*
    Runtime: 4 ms, faster than 99.74% of C++ online submissions for Roman to Integer.
    Memory Usage: 8.6 MB, less than 80.30% of C++ online submissions for Roman to Integer.
*/

class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        char tmp = '\0';
        for(int i = s.size() - 1; i >= 0; --i){
        	if(s[i] == 'I'){
        		if(tmp != 'V' && tmp != 'X'){
        			res++;
        		} else {
        			res--;
        		}
        	} else if(s[i] == 'V'){
        		res += 5;
        		tmp = 'V';
        	} else if(s[i] == 'X'){
        		if(tmp != 'L' && tmp != 'C'){
        			res += 10;
        			tmp = 'X';
        		} else {
        			res -= 10;
        		}
        	} else if(s[i] == 'L'){
        		res += 50;
        		tmp = 'L';
        	} else if(s[i] == 'C'){
        		if (tmp != 'D' && tmp != 'M'){
					res += 100;
					tmp = 'C';
        		} else {
        			res -= 100;
        		}
        	} else if(s[i] == 'D'){
        		res += 500;
        		tmp = 'D';
        	} else if(s[i] == 'M'){
        		res += 1000;
        		tmp = 'M';
        	}
        }
        return res;
    }
};
