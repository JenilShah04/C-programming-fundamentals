#include <stdio.h>
int main()
{
    int bytes;
    double KB,MB,GB;
    printf("Enter value of Bytes:");
    scanf("%d",&bytes);
    KB = bytes/1024.0;
    printf("%d Bytes =%.10f KB\n",bytes,KB);
    MB = bytes/1048576.0;
    printf("%d Bytes =%.10f MB\n",bytes,MB);
    GB = bytes/1073741824.0;
    printf("%d Bytes =%.15f GB\n",bytes,GB);
    return 0;
}
