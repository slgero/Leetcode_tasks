/*
    Runtime: 4 ms, faster than 95.23% of C online submissions for String to Integer (atoi).
    Memory Usage: 7 MB, less than 66.38% of C online submissions for String to Integer 
*/

int myAtoi(char * ss){
	int i = 0, negative = 1;
    int64_t nbr = 0;
	while ((ss[i] == '\n') || (ss[i] == '\t') || (ss[i] == '\v') ||
				(ss[i] == ' ') || (ss[i] == '\f') || (ss[i] == '\r'))
			i++;
		if (ss[i] == '-')
			negative = -1;
		if (ss[i] == '+' || ss[i] == '-')
			i++;
		while (ss[i] && (ss[i] >= '0') && (ss[i] <= '9'))
		{
			int pop = (int)ss[i] - '0';
			if ((nbr > INT_MAX/10 || (nbr == INT_MAX / 10 && pop > 7)) && negative == 1) return INT_MAX;
			if ((nbr > INT_MAX/10 || (nbr == INT_MAX / 10 && pop > 8)) && negative == -1) return INT_MIN;
			nbr *= 10;
			nbr += pop;
			i++;
		}
		return nbr * negative;
}

