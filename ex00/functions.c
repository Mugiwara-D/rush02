#include <stdio.h>
#include <unistd.h>
#define BUF_SIZE 20


char*	first[] = { "", "one ", "two ", "three ", "four ",
                "five ", "six ", "seven ", "eight ",
                "nine ", "ten ", "eleven ", "twelve ",
                "thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ",
                "nineteen "}
              ;
char* second[] = { "", "", "twenty ", "thirty ", "forty ",
                "fifty ", "sixty ", "seventy ", "eighty ",
                "ninety "}
              ;

//ft_pustr
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}


//fonction concatenation
char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (dest);
}

//fonction memset : remplit une zone mémoire avec un octet donné  
void *ft_memset(void *s, int c,  unsigned int len)
{
    unsigned char* p=s;
    while(len--)
    {
        *p++ = (unsigned char)c;
    }
    return s;
}



//fonction de conversion
char * nb_conversion(int n, char* s, char *str, int len)
{
    ft_memset(str,0,len);
    // si n > 19, division de n
    if (n > 19)
    {
        ft_strcat(str,second[n / 10]);
        ft_strcat(str,first[n % 10]);
    }
    else
    {
        ft_strcat(str,first[n]);
    }
    // si n est supérieur à zero
    if (n)
    {
        ft_strcat(str,s);
    }
    return str;
}

// fonction print un chiffre/nombre en mots
char* nb_to_words(long n, char *output)
{
    char str[BUF_SIZE] = {0};
    
	//gestion des milliards
    ft_strcat(output, nb_conversion((n / 10000000), "billion ",str,BUF_SIZE));
    
	//gestion des millions
    ft_strcat(output, nb_conversion(((n / 100000) % 100), "million ",str,BUF_SIZE));
    
	// gestion des 1000 a 100000
    ft_strcat(output, nb_conversion(((n / 1000) % 100), "thousand ",str,BUF_SIZE));
    
	// gestion des 100
    ft_strcat(output, nb_conversion(((n / 100) % 10), "hundred ",str,BUF_SIZE));
    //Increase code readability
    if (n > 100 && n % 100)
    {
        ft_strcat(output, "and ");
    }
   	//gestion des places des chiffres  
    ft_strcat(output, nb_conversion((n % 100), "",str,BUF_SIZE));
    return (output);
}
int main()
{
    //Get input number from user
    long num;
    char str[60] = {0};
   
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		ft_putstr("Error");
	}

    ft_putstr("Entrer un chiffre ou un nombre: ");
    
	scanf("%ld", &num);
    
    printf( "%s",nb_to_words(num,str));
    return (0);
}
