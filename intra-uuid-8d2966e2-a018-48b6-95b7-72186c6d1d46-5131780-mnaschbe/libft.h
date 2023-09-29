/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:32:27 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 17:49:11 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5000
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 32
# endif

# define AC_BLACK "\x1b[30m"
# define AC_REDI "\x1b[31m"
# define AC_GREEN "\x1b[32m"
# define AC_YELLOW "\x1b[33m"
# define AC_BLUE "\x1b[34m"
# define AC_MAGENTA "\x1b[35m"
# define AC_CYAN "\x1b[36m"
# define AC_WHITE "\x1b[37m"
# define AC_NORMAL "\x1b[m"
# define CBLACK "\033[1;3m]"
# define CRED "\033[1;31m]"
# define CGREEN "\033[1;32m]"
# define CYELLOW "\033[1;33m]"
# define CBLUE "\033[1;34m]"
# define CMAGENTA "\033[1;35m]"
# define CCYAN "\033[1;36m]"
# define CWHITE "\033[1;37m]"

char			*ft_strndup(const char *s, size_t n);
char			*ft_strdup(char *src);
int				ft_fibonacci(int index);
int				ft_sqrt(long int nb);
int				ft_is_prime(int nb, int i);
int				ft_find_next_prime(int nb);
int				ft_recursive_power(int nb, int power);
int				ft_iterative_power(int nb, int power);
int				ft_recursive_factorial(int nb);
int				ft_iterative_factorial(int nb);
void			ft_putnbr_base(int nbr, char *base);
int				ft_atoi(const char *str);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strcat(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);
int				ft_str_is_alpha(char *str);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strcpy(char *dest, char *src);
void			ft_putstr(char *str);
int				ft_isalnum(char c);
int				ft_isalpha(char c);
int				ft_isprint(char c);
int				ft_isascii(char c);
int				ft_isdigit(char c);
size_t			ft_strlen(const char *s);
int				ft_topper(char c);
int				ft_tolower(char c);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void			*ft_memset(void *str, int c, size_t a);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t mem, size_t size);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_putchar_fd(char c, int fd);
char			*ft_itoa(long int n);

/*void ft_putendl_fd(char *s, int fd);*/

/*S_IRWXU	700	The owner (user) has read, write and execute rights
S_IRUSR	400	The owner has read rights
S_IWUSR	200	The owner has write rights
S_IXUSR	100	The owner has execute rights
S_IRWXG	070	The group has read, write and execute rights
S_IRGRP	040	The group has read rights
S_IWGRP	020	The group has write rights
S_IXGRP	010	The group has execute rights
S_IRWXO	007	Other users have read, write and execute rights
S_IROTH	004	Others have read rights
S_IWOTH	002	Others have write rights
S_IXOTH	001	Others have execute rights
O_RDONLY	Read only
O_WRONLY	Write only
O_RDWR	Read and write
O_TRUNC	Truncated mode.
If the file exists and the access mode allows writing to it (O_WRONLY ou O_RDWR),
	truncates its contents to 0 size when it is opened,
	with the effect of overwriting the file.
O_APPEND	Append mode.
The file offset is set to the end of the file at each write,
	with the effect of adding text to the end of the file instead of overwriting it.
O_CREAT	Creates the file if it does not already exist.
Its permissions must then be specified in open‘s mode parameter.*/

#endif
