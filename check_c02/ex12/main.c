#include <stdio.h>
#include <string.h>

void *ft_print_memory(void *addr, unsigned int size);

int     main(void)
{
	char str[300];
        char str1[] = "Bonjour les amin\t ches\x09\x0a\x09c  est fo u";
	char str2[] = "\x9tout\x9 ce qu\t on Best.:Coucou\x0atu \x09vas\x08 bien\x80\xff \x7f?\x01\n";

	strcpy(str,str1);
	strcat(str,str2);
	strcat(str,str1);

	printf("Expect result :\n");
	printf("00007ffee60f4b40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin\n");
	printf("00007ffee60f4b50: 0920 6368 6573 090a 9c20 2065 7374 2066 . ches...  est f\n");
	printf("00007ffee60f4b60: 6f20 7509 746f 7574 0920 6365 2071 7509 o u.tout. ce qu.\n");
	printf("00007ffee60f4b70: 206f 6e20 4265 7374 2e3a 436f 7563 6f75  on Best.:Coucou\n");
	printf("00007ffee60f4b80: 0a74 7520 0976 6173 0820 6269 656e 80ff .tu .vas. bien..\n");
	printf("00007ffee60f4b90: 207f 3f01 0a42 6f6e 6a6f 7572 206c 6573  .?..Bonjour les\n");
	printf("00007ffee60f4ba0: 2061 6d69 6e09 2063 6865 7309 0a9c 2020  amin. ches...  \n");
	printf("00007ffee60f4bb0: 6573 7420 666f 2075 00                  est fo u.\n");
	printf("Address diff : 0\n");
    	printf("User   result :\n");
	fflush(stdout);
	
	void *addr = ft_print_memory(str, strlen(str)+1);
	printf("Address diff : %d\n",(int)(addr-(void*)str));
   	return (0);
}
