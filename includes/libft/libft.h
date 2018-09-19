/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:50:15 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:50:19 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *memptr, char val, size_t num);
void				ft_bzero(void *memptr, size_t num);
void				*ft_memcpy(void *destptr, const void *srcptr, size_t num);
void				*ft_memccpy(void *dp, const void *sp, int stop, size_t num);
void				*ft_memmove(void *destptr, const void *srcptr, size_t num);
void				*ft_memchr(const void *memptr, int val, size_t num);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t num);

void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_arrdel(char **arr);
void				*ft_memalloc(size_t size);
char				*ft_stralloc(const char *str);

size_t				ft_strlen(const char *str);
size_t				ft_arrcount(const char *str, char c);
char				*ft_strdup(const char *srcptr);
char				*ft_strndup(const char *srcptr, size_t n);
char				*ft_strcpy(char *destptr, const char *srcptr);
char				*ft_strncpy(char *destptr, const char *srcptr, size_t num);
char				*ft_strcat(char *destptr, const char *srcptr);
char				*ft_strncat(char *destptr, char *srcptr, int num);
size_t				ft_strlcat(char *destptr, const char *srcptr, size_t size);
char				*ft_strchr(const char *string, int symbol);
char				*ft_strrchr(const char *string, int symbol);
char				*ft_strstr(const char *string1, const char *string2);
char				*ft_strnstr(const char *str1, const char *str2, size_t num);
int					ft_strcmp(const char *string1, const char *string2);
int					ft_strncmp(const char *str1, const char *str2, size_t num);
int					ft_atoi(const char *string);

char				*ft_strnew(size_t size);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *s, size_t start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(const char *s);
char				**ft_strsplit(const char *s, char c);
char				*ft_itoa(int n);
void				ft_swap(int *a, int *b);
void				ft_bubblesort(int *arr, size_t num);
int					ft_bubblesort_int(int n);
void				ft_putchar(char c);
void				ft_putstr(const char *s);
void				ft_putendl(const char *str);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

int					ft_isspace(int character);
int					ft_isalpha(int character);
int					ft_isdigit(int character);
int					ft_isalnum(int character);
int					ft_isascii(int character);
int					ft_isprint(int character);
int					ft_islower(int character);
int					ft_isupper(int character);
int					ft_tolower(int character);
int					ft_toupper(int character);

t_list				*ft_lstnew(const void *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
