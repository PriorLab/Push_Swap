/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:40:45 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/08 19:48:45 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;
	size_t				i;

	tmp_dest = (unsigned char *) dest;
	tmp_src = (const unsigned char *) src;
	i = 0;
	if (dest == NULL && !src)
		return (NULL);
	if (tmp_dest > tmp_src)
	{
		while (len-- > 0)
			tmp_dest[len] = tmp_src[len];
	}
	else
	{
		while (i < len)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
	}
	return (dest);
}
//copia len bytes da src para dest, mas com seguranca quando as areas
//coincidem
//_______________________________pormaiores_____________________________
//&& e nao || pois basta uma funcionar para a funcao correr
//CONDICOES 
//1-dest>src, copiar a colar de tras para  frente(possivel sobreposicao)
//dest e src sao ponteiros para o inicio da string, podemos usar len--, pois
//ao colocar tmp_dest[len] este len comeca no numero abaixo o que e
//correto len = 5 <=> s[len] <=> s[4] porque o 0 conta
//2-else (dest<=src) copiar a colar normalmente 
//dest > src representation
//src   : [A][B][C][D][E]
//dest      :       [C][D][E][_][_]
//
//
//
/*versao extra curta
void *memmove(void *dest, const void *src, size_t len)
if ((!dest||!src)&&len) return 0;
unsigned char *d= (unsigned char*)dest;
const unsigned char *s=(const unsigned char*)src;
if (d>s)while (len--)d[len]=s[len];
else for(int i=0;i<len;i++)d[i]=s[i];
return dest;
*/
//
/*e necessario 4 condicoes
  verificar se um dos ponteiros e null
  verificar se o len e maior que 0, se for 0 a funcao funciona mesmo com * null
  condicao overlap?
  sim--> imprime de tras para a frente
  nao-->imprime normalmente
*/

/*int	main(int argc,char *argv[])
{
	if (argc != 4);
	{
	printf("Usa: %s <destino> <inicio> <n_bytes> \n",argv[0]);
	return 1;
	}
	char dest[100] = ""//tem de ser uma variavel mutavel neste caso com 99 carac
	teres no maximo senao teriamos de usar snprintf
	char *src = argv[2];//como e uma const void e uma variavel estatica podemos
	designar logo o argv[2]
	int n = atoi(argv[3]);

	snprintf(


}*/

/*int main(void)
{
	char dest[] = "nice";
	printf("%s\n", (char*) ft_memmove(dest, "tentativa", 3));
			return 0;
}*/
