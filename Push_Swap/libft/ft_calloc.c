/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 08:54:29 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/09 11:04:58 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (count > SIZE_MAX / size)
		return (NULL);
	tmp = malloc (count * size);
	if (tmp == NULL)
		return (NULL);
	ft_memset(tmp, 0, count * size);
	return (tmp);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

static int fail(const char *msg) 
{ fprintf(stderr, "FAIL: %s\n", msg); return 1; }
static int ok(const char *msg)   { printf("OK: %s\n", msg); return 0; }

int main(void)
{
    int status = 0;

    // 1) Regra 42: count==0 || size==0 tem de devolver ponteiro libertável
    void *p = ft_calloc(0, 8);
    if (!p) status |= fail("ft_calloc(0,8) devolveu NULL 
    (deveria ser ponteiro válido)");
    else { free(p); status |= ok
    ("ft_calloc(0,8) devolveu ponteiro libertável"); }

    p = ft_calloc(8, 0);
    if (!p) status |= fail("ft_calloc(8,0) devolveu NULL 
    (deveria ser ponteiro válido)");
    else { free(p); status |= ok
    ("ft_calloc(8,0) devolveu ponteiro libertável"); }

    // 2) Overflow tem de devolver NULL
    p = ft_calloc(SIZE_MAX, 2);
    if (p) { free(p); status |= fail
    ("overflow não detetado: retorno não-NULL"); }
    else status |= ok("overflow detetado: retorno NULL");

    // 3) Zero-inicialização: todos os bytes a 0
    size_t n = 32;
    unsigned char *z = ft_calloc(n, 1);
    if (!z) return fail("alloc normal falhou");
    for (size_t i = 0; i < n; i++)
        if (z[i] != 0) { free(z); return fail
	("memória não está a zero"); }
    free(z); status |= ok("memória vem a zero");

    // 4) Subalocação oculta (detetar overflow “silencioso” por escrita)
    //   Simula um tamanho “esperado” grande e 
    tenta escrever no último byte esperado.
    //   (Se ft_calloc não protege overflow, isto pode corromper ou crashar)
    size_t count = (size_t)1 << 20; // 1 Mi elementos
    size_t size  = 64;              // 64 bytes por elemento -> 64 MiB total 
    (deve ser seguro em dev comum)
    unsigned char *buf = ft_calloc(count, size);
    if (!buf) status |= fail
    ("alocação grande mas razoável falhou (pouca memória?)");
    else {
        size_t last = count*size - 1;     
// último byte esperado
        buf[0] = 0xAA;
        buf[last] = 0xBB;                 
// se tiver havido subalocação, aqui rebenta
        if (buf[last] != 0xBB) status |= fail("escrita no último byte falhou 
	(suspeita de subalocação)");
        else status |= ok("escrita até ao último byte OK (sem subalocação)");
        free(buf);
    }

    if (status == 0) printf("✔ Todos os testes passaram.\n");
    else             printf("✖ Houve falhas. Corrige a ft_calloc.\n");
    return status ? 1 : 0;
}
*/
