#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(char *str);
void	ft_bzero(void *restrict str, size_t n);
void	*ft_calloc(size_t n_bytes, size_t size);
int		ft_count_words(char *str);
void	ft_delvector(char **vec);
void	ft_div_mod(int a, int b, int *div, int *mod);
int		ft_fibonacci(int index);
int		ft_find_next_prime(int nb);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isnegative(int n);
int		ft_isprime(int nb);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_iterative_power(int nb, int power);
int		ft_nbrlen_hexa(unsigned int);
char	*ft_itoa(int n);
void	ft_lstadd_back(t_list **lst, t_list *neww);
void	ft_lstadd_front(t_list **lst, t_list *neww);
void	ft_lstclear(t_list **alst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void const *content);
int		ft_lstsize(t_list *lst);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
size_t	ft_nbrlen(int n);
size_t	ft_nbrlen_unsigned(unsigned int n);
void	ft_print_words_table(char **tab);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *str);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int nb);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *s, int fd);
void	ft_put_unsigned_nbr(unsigned int nbr);
int		*ft_range(int min, int max);
int		ft_recursive_factorial(int nb);
int		ft_recursive_power(int nb, int power);
void	ft_sort_integer_table(int *tab, int size);
char	**ft_split(char const *s, char c);
int		ft_sqrt(int nb);
char	*ft_ltoa(long n);
char	*ft_strcapitalize(char *str);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(char const *s1, char const *s2);
char	*ft_strcpy(char *dest, const char *src);
void	ft_swap_int(int *x, int *y);

void	ft_strdel(char **as);
char	*ft_strdup(const char *str);
int		ft_strequ(char const *s1, char const *s2);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_uppercase(char *str);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strlowcase(char *str);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strndup(const char *str, size_t len);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strrev(char *str);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strtrim(char const *s, char const *set);
char	*ft_strupcase(char *str);
char	*ft_multi_join(int count, ...);
void	ft_swap(char *a, char *b);
void	ft_swap_int(int *a, int *b);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_ultimate_div_mod(int *a, int *b);
int		ft_ultimate_range(int **range, int min, int max);
size_t	ft_veclen(char **vec);

#endif
