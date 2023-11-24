#include <unistd.h>

void ft_write(char *ltr, int i)
{
    i = 0;

while (ltr[i] != '\0')
    {
        write(1, &ltr[i], 1);
        i++;
    }
}
int main(void)
{
  int my_index;
  char *my_letter = "salut les mecs !";
  ft_write(my_letter, my_index);
  return(0);
}