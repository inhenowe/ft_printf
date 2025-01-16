/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:19:33 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/23 16:07:17 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static size_t	ft_search_words(const char *s, char limit);
static int		ft_len_words(const char *s, char limit);
static char		**ft_liberar_memoria(char **split, int ps);

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		pos_j;
	int		ps;

	list = malloc(sizeof(char *) * (ft_search_words(s, c) + 1));
	if (!s || !list)
		return (NULL);
	pos_j = 0;
	ps = 0;
	while (s[ps])
	{
		if (s[ps] != c)
		{
			list[pos_j] = ft_substr(s, ps, ft_len_words(&s[ps], c));
			if (!list[pos_j])
				return (ft_liberar_memoria(list, pos_j));
			pos_j++;
			ps += ft_len_words(&s[ps], c);
		}
		else
			ps++;
	}
	list[pos_j] = NULL;
	return (list);
}

static size_t	ft_search_words(const char *s, char limit)
{
	size_t	ctu_word;
	int		marca;

	ctu_word = 0;
	marca = 0;
	while (*s)
	{
		if (*s != limit && !marca)
		{
			marca = 1;
			ctu_word++;
		}
		else if (*s == limit)
			marca = 0;
		s++;
	}
	return (ctu_word);
}

static char	**ft_liberar_memoria(char **split, int ps)
{
	while (ps--)
		free(split[ps]);
	free(split);
	return (NULL);
}

static int	ft_len_words(const char *s, char limit)
{
	int	l_w;

	l_w = 0;
	while (*s != limit && *s != 0)
	{
		l_w++;
		s++;
	}
	return (l_w);
}
