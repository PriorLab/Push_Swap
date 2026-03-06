/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:36:41 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 11:58:57 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
//Applies the function ’f’ to each character of the
//string passed as argument, passing its index as
//the first argument. Each character is passed by
//address to ’f’ so it can be modified if necessary.
/*#include <stdio.h>

char add_one(unsigned int i, char c)
{
    (void)i;
    return (c + 1);
}

int main(void)
{
    char *result = ft_strmapi("abc", add_one);
    printf("%s\n", result);
    return 0;
}
*/
