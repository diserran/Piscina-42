#include <stdio.h>
#include <string.h>
#include <assert.h>

char			*ft_strcpy (char *dest, char *src);
char			*ft_strncpy (char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);

int main()
{
	// ex00
	char	strcpy1[20];
	assert(strcmp("Original string", ft_strcpy(strcpy1, "Original string")) == 0);
	assert(strcmp("", ft_strcpy(strcpy1, "")) == 0);
	assert(ft_strcpy(strcpy1, NULL) == strcpy1);

	//ex01
	char	strncpy1[20];
	assert(ft_strncpy(strncpy1, NULL, 10) == strncpy1);
	assert(strcmp("", ft_strncpy(strncpy1, "", 10)) == 0);
	assert(strcmp("Origi", ft_strncpy(strncpy1, "Original string", 5)) == 0);

	// ex02
	assert(ft_str_is_alpha(NULL) == 1);
	assert(ft_str_is_alpha("") == 1);
	assert(ft_str_is_alpha("abcdefghijklmnopqrstuvwxyz") == 1);
	assert(ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 1);
	assert(ft_str_is_alpha("0") == 0);
	assert(ft_str_is_alpha("9") == 0);
	assert(ft_str_is_alpha(" ") == 0);
	assert(ft_str_is_alpha("{") == 0);
	assert(ft_str_is_alpha("[") == 0);
	
	// ex03
	assert(ft_str_is_numeric(NULL) == 1);
	assert(ft_str_is_numeric("") == 1);
	assert(ft_str_is_numeric("abcdefghijklmnopqrstuvwxyz") == 0);
	assert(ft_str_is_numeric("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 0);
	assert(ft_str_is_numeric("0") == 1);
	assert(ft_str_is_numeric("9") == 1);
	assert(ft_str_is_numeric(" ") == 0);
	assert(ft_str_is_numeric("{") == 0);
	assert(ft_str_is_numeric("[") == 0);

	// ex04
	assert(ft_str_is_lowercase(NULL) == 1);
	assert(ft_str_is_lowercase("") == 1);
	assert(ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz") == 1);
	assert(ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 0);
	assert(ft_str_is_lowercase("0") == 0);
	assert(ft_str_is_lowercase("9") == 0);
	assert(ft_str_is_lowercase(" ") == 0);
	assert(ft_str_is_lowercase("{") == 0);
	assert(ft_str_is_lowercase("[") == 0);

	// ex05
	assert(ft_str_is_uppercase(NULL) == 1);
	assert(ft_str_is_uppercase("") == 1);
	assert(ft_str_is_uppercase("abcdefghijklmnopqrstuvwxyz") == 0);
	assert(ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 1);
	assert(ft_str_is_uppercase("0") == 0);
	assert(ft_str_is_uppercase("9") == 0);
	assert(ft_str_is_uppercase(" ") == 0);
	assert(ft_str_is_uppercase("{") == 0);
	assert(ft_str_is_uppercase("[") == 0);

	// ex06
	assert(ft_str_is_printable(NULL) == 1);
	assert(ft_str_is_printable("") == 1);
	assert(ft_str_is_printable("abcdefghijklmnopqrstuvwxyz") == 1);
	assert(ft_str_is_printable("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 1);
	assert(ft_str_is_printable("0") == 1);
	assert(ft_str_is_printable("9") == 1);
	assert(ft_str_is_printable(" ") == 1);
	assert(ft_str_is_printable("{") == 1);
	assert(ft_str_is_printable("[") == 1);
	assert(ft_str_is_printable("\x1F") == 0);
	assert(ft_str_is_printable("\x0F") == 0);
	assert(ft_str_is_printable("\x01") == 0);
	// empty string
	assert(ft_str_is_printable("\x00") == 1);

	// ex07
	assert(ft_strupcase(NULL) == NULL);
	assert(strcmp(ft_strupcase(""), "") == 0);
	char str_strupcase1[] = "abcdefghijklmnopqrstuvwxyz";
	assert(strcmp(ft_strupcase(str_strupcase1), "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 0);
	char str_strupcase2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	assert(strcmp(ft_strupcase(str_strupcase2), "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 0);
	char str_strupcase3[] = "a0b1c2d3e4f5g6h7i8j9k0l m{n[o";
	assert(strcmp(ft_strupcase(str_strupcase3), "A0B1C2D3E4F5G6H7I8J9K0L M{N[O") == 0);

	// ex08
	assert(ft_strlowcase(NULL) == NULL);
	assert(strcmp(ft_strlowcase(""), "") == 0);
	char str_strlowcase1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	assert(strcmp(ft_strlowcase(str_strlowcase1), "abcdefghijklmnopqrstuvwxyz") == 0);
	char str_strlowcase2[] = "abcdefghijklmnopqrstuvwxyz";
	assert(strcmp(ft_strlowcase(str_strlowcase2), "abcdefghijklmnopqrstuvwxyz") == 0);
	char str_strlowcase3[] = "A0B1C2D3E4F5G6H7I8J9K0L M{N[O";
	assert(strcmp(ft_strlowcase(str_strlowcase3), "a0b1c2d3e4f5g6h7i8j9k0l m{n[o") == 0);

	// ex09
	assert(ft_strcapitalize(NULL) == NULL);
	assert(strcmp(ft_strcapitalize(""), "") == 0);
	char str_strcapitalize1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	assert(strcmp(ft_strcapitalize(str_strcapitalize1), "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un") == 0);

	// ex10
	char	strlcpy1[20];
	assert(ft_strlcpy(strlcpy1, NULL, sizeof(strlcpy1)) == 0);
	//
	assert(strlcpy(strlcpy1, "", sizeof(strlcpy1)) == ft_strlcpy(strlcpy1, "", sizeof(strlcpy1)));
	assert(ft_strlcpy(strlcpy1, "", sizeof(strlcpy1)) == 0);
	assert(strcmp(strlcpy1, "") == 0);
	//
	assert(strlcpy(strlcpy1, "12345", sizeof(strlcpy1)) == ft_strlcpy(strlcpy1, "12345", sizeof(strlcpy1)));
	assert(ft_strlcpy(strlcpy1, "12345", sizeof(strlcpy1)) == 5);
	assert(strcmp(strlcpy1, "12345") == 0);
	//
	assert(strlcpy(strlcpy1, "123456789012345678901234567890", sizeof(strlcpy1)) == ft_strlcpy(strlcpy1, "123456789012345678901234567890", sizeof(strlcpy1)));
	assert(ft_strlcpy(strlcpy1, "123456789012345678901234567890", sizeof(strlcpy1)) == 30);
	
	// ex11
	// ft_putstr_non_printable("Coucou\ntu vas bien ?");
	// ft_putstr_non_printable("jA\x6A");
	// ft_putstr_non_printable("\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f");
	// ft_putstr_non_printable("\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f");
	// ft_putstr_non_printable(" !\"#$\%");
	// ft_putstr_non_printable("0123456789:");
	

	return 0;
}
