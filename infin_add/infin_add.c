#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int index = 0;

    while (str[index])
        index++;
    return (index);
}

char *ft_diff(char *a, char *b)
{
    int index;
    int len_a;
    int len_b;
    int len;
    int rest;
    char *out;

    index = 0;
    rest = 0;
    len_a = ft_strlen(a);
    len_b = ft_strlen(b);
    if (len_a >= len_b)
        len = len_a + 1;
    else
        len = len_b + 1;
    out = (char *)malloc(sizeof(char) * len);
    out[len] = 0;
    while (index < len_a || index < len_b)
    {
        if (index >= len_a)
        {
            out[len - index - 1] = ((b[len_b - index - 1] - '0') - rest + 10) % 10 + '0';
            rest = ((b[len_b - index - 1] - '0') - rest) < 0;
        }
        else if (index >= len_b)
        {
            out[len - index - 1] = ((a[len_a - index - 1] - '0') - rest + 10) % 10 + '0';
            rest = ((a[len_a - index - 1] - '0') - rest) < 0;
        }
        else
        {
            out[len - index - 1] = ((a[len_a - index - 1] - '0') - (b[len_b - index - 1] - '0') - rest + 10) % 10 + '0';
			rest = ((a[len_a - index - 1] - '0') - (b[len_b - index - 1] - '0') - rest) < 0;
        }
        index++;
    }
    out = out + len - index;
    while (out[0] == '0')
        out++;
    return (out);
}

int ft_compare(char *a, char *b)
{
    int len_a;
    int len_b;
    int index;

    len_a = ft_strlen(a);
    len_b = ft_strlen(b);
    index = 0;
    if (len_a > len_b)
        return (1);
    else if (len_a < len_b)
        return (-1);
    else
    {
        while(index < len_a)
        {
            if (a[index] > b[index])
                return (1);
            else if (a[index] < b[index])
                return (-1);
            index++;
        }
        return (0);
    }
}

char *ft_add(char *a, char *b)
{
    int len_a;
    int len_b;
    int len;
    int index;
    int rest;
    char *out;

    len_a = ft_strlen(a);
    len_b = ft_strlen(b);
    index = 0;
    rest = 0;
    if (len_a >= len_b)
        len = len_a + 1;
    else
        len = len_b + 1;
    out = (char *)malloc(sizeof(char) * len);
    out[len] = 0;
    out[0] = '0';
    while (index < len_a || index < len_b || rest)
    {
        if (index >= len_a && index >= len_b)
        {
            out[len - index - 1] = rest % 10 + '0';
            rest = rest / 10;
        }
        else if (index >= len_a)
        {
            out[len - index - 1] = (rest + (b[len_b - index - 1] - '0')) % 10 + '0';
            rest = (rest + (b[len_b - index] - '0')) / 10;
        }
        else if (index >= len_b)
        {
            out[len - index - 1] = (rest + (a[len - index - 1] - '0')) % 10 +'0';
            rest = (rest + (a[len - index - 1] - '0')) / 10;
        }
        else
        {
            out[len - index - 1] = (rest + (a[len_a - index - 1] - '0') + (b[len_b - index - 1] - '0')) % 10 + '0';
            rest = (rest + (a[len_a - index - 1] - '0') + (b[len_b - index - 1] - '0')) / 10;
        }
        index++;
    }
    while (out[0] == '0')
        out++;
    return (out);
}

int main(int ac, char **av)
{
    char *res;
    int comp;

    if (ac != 3)
        return (0);
    if (av[1][0] == '-' && av[2][0] == '-')
    {
        write(1, "-", 1);
        res = ft_add(av[1] + 1, av[2] + 1);
    }
    else if (av[1][0] != '-' && av[2][0] != '-')
        res = ft_add(av[1], av[2]);
    else
    {
        if (av[1][0] == '-')
        {
            comp = ft_compare(av[1] + 1, av[2]);
            if (comp > 0)
            {
                write(1, "-", 1);
                res = ft_diff(av[1] + 1, av[2]);
            }
            else if (comp < 0)
                res = ft_diff(av[2], av[1] + 1);
            else
                res = "0";
        }
        else
        {
            comp = ft_compare(av[2] + 1, av[1]);
            if (comp > 0)
            {
                write(1, "-", 1);
                res = ft_diff(av[2] + 1, av[1]);
            }
            else if (comp < 0)
                res = ft_diff(av[1], av[2] + 1);
            else
                res = "0";
        }
    }
    write(1, res, ft_strlen(res));
    write(1,"\n", 1);
    return 0;
}

