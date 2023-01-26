/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobiaslst <tobiaslst@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:23:37 by tcaborde          #+#    #+#             */
/*   Updated: 2023/01/24 11:17:26 by tobiaslst        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*----------------------------------INCLUDES---------------------------------*/
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

/*-----------------------------------STRUCT----------------------------------*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*-----------------------------------LISTS-----------------------------------*/

void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

/*----------------------------------MEMORY----------------------------------*/

/*The bzero() function erases the data in the n bytes of the memory
starting at the location pointed to by s, by writing zeros (bytes
containing '\0') to that area.*/
void	ft_bzero(void *s, size_t n);

/*The calloc() function shall allocate unused space for an array of
count elements each of whose size in bytes is size.  The space
shall be initialized to all bits 0.*/
void	*ft_calloc(size_t count, size_t size);

/* The memchr() function scans the initial n bytes of the memory
area pointed to by s for the first instance of c. Both c and the
bytes of the memory area pointed to by s are interpreted as
unsigned char.*/
void	*ft_memchr(const void *s, int c, size_t n);

/* The memcmp() function compares the first n bytes (each
interpreted as unsigned char) of the memory areas s1 and s2.*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*The memcpy() function copies n bytes from memory area src to
memory area dest.  The memory areas must not overlap.*/
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

/* The memmove() function copies n bytes from memory area src to
memory area dest.*/
void	*ft_memmove(void *dst, const void *src, size_t len);

/* The memset() function fills the first n bytes of the memory area
pointed to by s with the constant byte c.*/
void	*ft_memset(void *b, int c, size_t len);

/*----------------------------------STRINGS----------------------------------*/

/*The isalnum() function check if the ASCII character c is alpha numeric.
If not, returns FALSE.*/
int		ft_isalnum(int c);

/*The isalpha() function check if the ASCII character c is alphabetic.
If not, returns FALSE.*/
int		ft_isalpha(int c);

/*The isdigit() function check if the ASCII character c is a digit.
If not, returns FALSE.*/
int		ft_isdigit(int c);

/*The isascii() function check if the character c is in the ASCII table.
If not, returns FALSE.*/
int		ft_isascii(int c);
/*The isprint() function check if the ASCII character c is a printable
character. If not, returns FALSE.*/
int		ft_isprint(int c);

/*The putchar_fd() function prints the character c into the appropriate
file descriptor.*/
void	ft_putchar_fd(char c, int fd);

/*The putendl_fd() function prints the string s into the appropriate
file descriptor following a carriage returns ("\n").*/
void	ft_putendl_fd(char *s, int fd);

/*The putnbr_fd() function prints the integer n, converted to a char into
the appropriate file descriptor.*/
void	ft_putnbr_fd(int n, int fd);

/*The pustr_fd() function prints the array s into the appropriate
file descriptor.*/
void	ft_putstr_fd(char *s, int fd);

/*The striteri() function applies the function f to each character of
the string passed as argument, and passing its index as first argument.
Each character is passed by adress f to be modified if necessary.*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/*The strlcat() function adds at the end of the string dest the string src.
Overwitring the terminating null byte ('\0'). This function is designed to
be safer then the function strncat(). Unlike strncat(), the strlcat() function
takes the full size of the buffer (not just the lenght) and guarantee to
NUL-terminated the result
(as long as there is at least one byte free in dst).*/
size_t	ft_strlcat(char *restrict dst,
			const char *restrict src, size_t dstsize);

/*The strlcpy() function copies the string pointed to by src into the string
dst, including the terminated null byte ('\0). This function is designed to be
safer then its counterpart strncpy(). Unlike strncpy(), the strlcpy() function
takes the full size of the buffer (not just the lenght), and guarantee to
NUL-terminated the result (as long as dstsize is larger than 0).*/
size_t	ft_strlcpy(char *restrict dst,
			const char *restrict src, size_t dstsize);

/*The strlen() function calculate the lenght of the string str and returns it.*/
int		ft_strlen(char *str);

/*the strdoublelen() function return the len of a double array.*/
int		ft_strdoublelen(char **c);

/*The strmapi() function applies the function f() to each character
of the string passed as argument by giving its index as first argument
to create a "fresh" new string (with the malloc() function) resulting
from the successive applications of f().*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*The strncmp() function compares the two string s1 and s2,
no more then the size defined by n.*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*The strtrim() function allocates with the malloc() function
the string s1 without whitespaces at the beginning or at the end
of the string. If s1 has no whitespaces at the beginning or at the
end, the function returns a copy of s1. If the allocation fails,
the function returns NULL.*/
char	*ft_strtrim(char const *s1, char const *set);

/*The tolower() function takes the ASCII charcter c,
if its an alphabetical uppercase character it passes it
to a lowercase character.*/
int		ft_tolower(int c);

/*The toupper() function takes the ASCII character c,
if its an alphabetical lowercase character it passes it to a
uppcaser character.*/
int		ft_toupper(int c);

/*The ft_strjoin() function combines strings to a single one,
seperated by the specified delimiter string.*/
char	*ft_strjoin(char const *s1, char const *s2);

/*The substr() function returns the substring of the given string at
the given start position with the given length (or smaller if the length
of the original string is less than start + length, or length is bigger
than MAXSTRINGLEN).*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*The strrchr() function returns a pointer to the last occurrence of
	the character c in the string s.*/
char	*ft_strrchr(const char *s, int c);

/*The strnstr() function finds the first occurrence of the substring
needle in the string haystack, searching until being on n lenght.
The terminating null bytes ('\0') are not compared.*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*The atoi() function converts the initial portion of the string
pointed to by str to int.*/
int		ft_atoi(const char *str);

/*The itoa() function coverts the integer n into a character string.*/
char	*ft_itoa(int n);

/*The strchr() function returns a pointer to the first occurrence
of the character c in the string s.*/
char	*ft_strchr(const char *s, int c);

/*The ft_split() function takes a string, and seperates it into
a matrix with the specified character, then return the new matrix. 
Ex : char **str = ft_split("Bonjour a tous", ' ') 
will become -> str[0] = Bonjour str[1] = a str[2] = tous.*/
char	**ft_split(char const *s, char c);

/*The strdup() function returns a pointer to a new string which is
a duplicate of the string s.*/
char	*ft_strdup(const char *s1);

/*The strndup() functions returns a pointer to a new string wich is a duplicate
of the string s but not more than n characters.*/
char	*ft_strndup(char *s, int n);

/*The strdoubledup() function, returns a pointer to a new double
array which is a duplicate of the string c.*/
char	**ft_strdoubledup(char **c);

/*The doublefree() function free a double array.*/
void	ft_doublefree(char **s);

#endif
