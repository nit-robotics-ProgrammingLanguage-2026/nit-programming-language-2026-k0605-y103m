#include <stdio.h>
 
int main(void)
{
    int n;
    long total = 0;
   
    scanf("%d", &n);
    if (n < 0)
    {
        printf("NG\n");
        return 0;
    }
 
    // 繰り返しを for 文だけで記述 (初期化: i = 1, 条件: i <= n, 増え方: i++)
    for (int i = 1;  i <= n; i++)
    {
        // 偶数のときだけ total に足す（奇数は何もしない）
        if (i % 2 == 0)
        {
            total += i;
        }
    }
   
    printf("%ld\n", total);
    return 0;
}
