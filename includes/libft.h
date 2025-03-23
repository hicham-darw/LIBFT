#ifndef	LIBFT_H
#define	LIBFT_H
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define INTMIN -2147483648
#define INTMAX 2147483647

typedef	struct	s_list
{
	void	*content;
	size_t	content_size;
	struct s_list	*next;
}	t_list;

int	ft_atoi(char *str);
int	ft_check_overflow(unsigned int res, char c, int sign);
void	ft_bzero(void *restrict str, size_t n);
void	ft_capital_char(char j, char *i);
char	*ft_concat_params(int argc, char **argv);
int	ft_count_words(char *str);
void	ft_del_vector(char **vec);
void	ft_div_mod(int a, int b, int *div, int *mod);
int	ft_fibonacci(int index);
char	**ft_fill_vector_str(char **vec, char *str);
int	ft_find_next_prime(int nb);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_is_negative(int n);
int	ft_is_prime(int nb);
int	ft_isprint(int c);
int	ft_isspace(int c);
int	ft_iterative_power(int nb, int power);
char	*ft_itoa(int n);
int	ft_len_characters_of_vector(int argc, char **argv);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list	*ft_lstnew(void const *content, size_t content_size);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *restrict dest, void *restrict src, int c, size_t n);
void	*ft_memchr(void *str, int c, size_t n);
int	ft_memcmp(void *str1, void *str2, size_t n);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
size_t	ft_strlen(char *str);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *restrict str, int c, size_t n);
size_t	ft_nbrlen(int n);
void	ft_print_words_tables(char **tab);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *str);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int nb);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *s, int fd);
int	*ft_range(int min, int max);
int	ft_recursive_factorial(int nb);
int	ft_recursive_power(int nb, int power);
void	ft_swap_int(int *x, int *y);
void	ft_sort_integer_table_big(int *tab, int size);
char	**ft_split_whitespaces(char *str);
int	ft_sqrt(int nb);
char	*ft_strcapitalize(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(const char *str, int c);
void	ft_strclr(char **as);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
void	ft_strdel(char **as);
char	*ft_strdup(char *str);
int	ft_strequ(char const *s1, char const *s2);
int	ft_str_is_alpha(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_printable(char *str);
int	ft_str_is_uppercase(char *str);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char	*ft_strlowcase(char *str);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, char *src, int nb);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strndup(char *str, int len);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(char *str, char *to_find, unsigned int n);
char	*ft_strrchr(char *str, int c);
char	*ft_strrev(char *str);
char	**ft_strsplit(char const *s, char c);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
char	*ft_strupcase(char *str);
void	ft_swap(char *a, char *b);
void	ft_swap_vec(char ***vec1, char ***vec2);
int	ft_tolower(int c);
int	ft_toupper(int c);
void	ft_ultimate_div_mod(int *a, int *b);
int	ft_ultimate_range(int **range, int min, int max);
size_t	ft_veclen(char **vector);

#endif
