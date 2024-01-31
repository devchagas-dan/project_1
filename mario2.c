#include <stdio.h>
#include <cs50.h>

int main (void)
void print_grid(int size)
{
    int n = get_size();
    print_grid(n);

}
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");

    }
    while (n < 1);
    return n;
}
void print_grid(int size)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 j++)
        printf("#);
    }
    printf(\n");
}