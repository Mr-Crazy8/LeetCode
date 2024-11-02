#include <stdio.h>


int distributCandies(int n, int limit)
{
    int a = 0, b, c, total_ways = 0;
    while(a <= limit && a <= n)
    {
        int remaining = n - a;
        b = 0;
        while(b <= limit && b <= n)
        {
            int c = remaining - b;
            if (c >= 0 && c <= limit)
            {
                total_ways++;
            }
            b++;
        }
        a++;
    }
    return total_ways;
}

int main()
{
    int n1 = 5;
    int limit1 = 2;
    printf("Number of ways to distribut %d candies with limit %d: %d\n", n1, limit1, distributCandies(n1, limit1));

    int n2 = 3;
    int limit2 = 3;
    printf("Number of ways to distribut %d candies with limit %d: %d\n", n1, limit2, distributCandies(n2, limit2));

    return (0);

}