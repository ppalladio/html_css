#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int rush00(int h, int v)
{
	int i;
	int j;//

	i=0;
	j=0;

	while(i<h && j<v)
	{
		while(i==1 && j<v){
			if(i==1){
				ft_putchar('/');
			} else if (j==v) {
				ft_putchar('\\');
				ft_putchar('\n');
			} else {
				ft_putchar('*');
			}
		while(i==h && j<v){
			if(i==1){
				ft_putchar('\\');
			} else if (j==v) {
				ft_putchar('/');
			} else {
				ft_putchar('*');
			}
			while (i>1 && i<h && j<v){
				if(i==1 && j==v){
				ft_putchar('*');
			} else {
				ft_putchar(' ');
			}
			}
		}
		}i++;
		}j++;
		

}	


int main(void)
{

	rush00(1,3);
}