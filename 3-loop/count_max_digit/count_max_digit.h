#include <math.h>

int ya_schitay_massivi(long long l)
{
}

char count_max_digit(long long number)
{
    int j = 0, i = 0, max = 0;
    int len = 0, cnt = 0;
    int number_cop = number;
    while (number_cop != 0)
    {
        number_cop /= 10;
        len++;
    }
    int* m = (int*)malloc(len * sizeof(int));
    
    for (; i < len; i++)
    {
        m[i] = number % 10;
        number = number / 10;
    }
    for (j = i - 1; j >= 0; j--)
    {
        if (m[j] > max)
        {
            max = m[j];
        }
        for (j = i - 1; j >= 0; j--)
        {
          if(max == m[j]) cnt +=1; 
        }
    }
    return cnt;
}
