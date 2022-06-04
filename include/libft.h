/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjimpei <yjimpei@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:23:43 by yjimpei           #+#    #+#             */
/*   Updated: 2021/05/22 21:52:08 by yjimpei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <limits.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_info_list
{
	int	flag;
	int	width;
	int	has_zero;
	int	has_minus;
	int	has_width;
	int	precision;
	int	has_precision;
}		t_info_list;

void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dest, char *src, size_t dst_size);
char		*ft_strchr(const char *sm, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *big, const char *little, size_t len);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *nptr);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		*ft_calloc(size_t number, size_t size);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(const char *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *list, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
char		*ft_utoa(unsigned int n);
char		*ft_utoh(unsigned int n);
char		*ft_itop(unsigned int n);
char		*ft_utof2(uintptr_t n);
int			ft_get_digit(int num);
int			ft_put_strl(char *str, size_t n);
int			ft_put_space(int count);
int			ft_put_zeo(int count);
int			ft_put_c(t_info_list *info, va_list ap);
int			ft_put_d(t_info_list *info, va_list ap);
int			ft_put_s(t_info_list *info, va_list ap);
int			ft_put_x(t_info_list *info, va_list ap);
int			ft_put_p(t_info_list *info, va_list ap);
int			ft_put_u(t_info_list *info, va_list ap);
void		init_info(t_info_list *info);
t_info_list	*get_info(char **form, t_info_list *info, va_list ap);
void		width_two(va_list ap, t_info_list *info);
void		prec_two(va_list ap, t_info_list *info);
void		ft_form_digit(va_list ap, char **form, t_info_list *info);
void		ft_form_before(char **form, t_info_list *info, va_list ap);
void		ft_form_after(char **form, t_info_list *info);
int			d_last_else_m(int count, t_info_list *info, char *tmp, int tmp_len);
char		*to_str_upper(char *tmp);
int			mi_big_wid(char *tmp, int tmp_len, t_info_list *info);

#endif
