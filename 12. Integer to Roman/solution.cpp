/* 
  It's a really dirty, but fast solution
    Runtime: 4 ms, faster than 99.20% of C++ online submissions for Integer to Roman.
    Memory Usage: 8.5 MB, less than 75.87% of C++ online submissions for Integer to Roman.
*/

class Solution {
public:
    string intToRoman(int num) {
        string res;
        while(num){
        	if(num >= 1000){
        		res += "M";
        		num -= 1000;
        	} else {
        		if(num >= 900){
        			res +="CM";
        			num -= 900;
        		}
				if(num >= 500){
					res += "D";
					num -= 500;
				} else {
					if(num >= 400){
						res += "CD";
						num -= 400;
					}
					if(num >= 100){
						res += "C";
						num -= 100;
					} else {
						if(num >= 90){
							res += "XC";
							num -= 90;
						}
						if(num >= 50){
							res += "L";
							num -= 50;
						} else{
							if (num >= 40){
								res += "XL";
								num -= 40;
							}
							if(num >= 10){
								res += "X";
								num -= 10;
							} else {
								if (num == 9) return res + "IX";
								if (num >= 5){
									res += "V";
									num -= 5;
								} else {
									if (num == 4) return res + "IV";
									if (num == 3) return res += "III";
									if (num == 2) return res += "II";
									if (num == 1) return res += "I";
								}
							}
						}
					}
				}
        	}
        }
        return res;
    }
};
