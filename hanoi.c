#include<stdio.h>

void	ft_hanoi(int nb, char tstart, char ttemp, char tend)
{
	if (nb > 0)
	{
		ft_hanoi(nb - 1, tstart, ttemp, tend); 
		printf("Mettre le disque de la tour : %c a la tour : %c\n", tstart, tend);
		ft_hanoi(nb - 1, ttemp, tend, tstart); 
	}
}
int		main(void)
{
	char a = 'a', b = 'b', c = 'c'; 
	ft_hanoi(5, a, b, c); 
}