#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int     main(void)
{
	
    	printf("Expect result :\n"); 
	printf("-1234\n");
	printf("-2147483648\n");
	printf("-12345\n");
	printf("0\n");
	printf("0\n");
	printf("0\n");
	printf("123456789\n");
	printf("2147483647\n");

    	printf("User   result :\n");
	printf("%d\n",ft_atoi_base(" ---+--+1234ab567","0123456789"));
	printf("%d\n",ft_atoi_base(" \n\r\t\f\v -+-+-+--2147483648","0123456789"));
	printf("%d\n",ft_atoi_base("-12345+2","0123456789"));
	printf("%d\n",ft_atoi_base("","0123456789"));
	printf("%d\n",ft_atoi_base("++- 123","0123456789"));
	printf("%d\n",ft_atoi_base(" a123","0123456789"));
	printf("%d\n",ft_atoi_base("\t--123456789a","0123456789"));
	printf("%d\n",ft_atoi_base(" --++--2147483647","0123456789")); 
    	printf("Expect result :-2147483648\n"); 
    	printf("User   result :%d\n",ft_atoi_base("-2147483648","0123456789"));
    	printf("\nExpect result :0 0 0 0 0 0 0 0\n"); 
    	printf("User   result :%d %d %d %d %d %d %d %d\n"
		,ft_atoi_base("123","01+3456789")
		,ft_atoi_base("123","01234-6789")
		,ft_atoi_base("123","0")
		,ft_atoi_base("-123","012+456789")
		,ft_atoi_base("-123","0123-56789")
		,ft_atoi_base("123","0123436789")
		,ft_atoi_base("-123","0023456789")
		,ft_atoi_base("-123","0123456780"));
    	printf("Expect result :-2147483648\n"); 
    	printf("User   result :%d\n",ft_atoi_base("-7852516351","9876543210"));
    	printf("Expect result :-2147483648\n"); 
    	printf("User   result :%d\n",ft_atoi_base("-20000000000","01234567"));
    	printf("Expect result :-2147483648\n"); 
    	printf("User   result :%d\n",ft_atoi_base("-80000000","0123456789aBcDeF"));
    	printf("Expect result :%d\n",-0x12ABCDEF); 
    	printf("User   result :%d\n",ft_atoi_base("-12aBcDeF","0123456789aBcDeF"));
    	printf("Expect result :%d\n",-0x55AA55AA); 
    	printf("User   result :%d\n",ft_atoi_base("-1010101101010100101010110101010","01"));
    	printf("Expect result :2147483647\n"); 
    	printf("User   result :%d\n",ft_atoi_base("17777777777","01234567"));
    	printf("Expect result :2147483647\n"); 
    	printf("User   result :%d\n",ft_atoi_base("7852516352","9876543210"));
    	printf("Expect result :%d\n",625+25*5*2+25*3+5*4); 
    	printf("User   result :%d\n",ft_atoi_base("12340","01234"));
    	printf("Expect result :2147483647\n"); 
    	printf("User   result :%d\n",ft_atoi_base("bhhhhhhhhhh","abcdefgh"));
    	printf("Expect result :2147483647\n"); 
    	printf("User   result :%d\n",ft_atoi_base("7fffffff","0123456789AbCdEf"));
    	printf("Expect result :2147483647\n"); 
    	printf("User   result :%d\n",ft_atoi_base("1111111111111111111111111111111","01"));
    	return (0);
}
