#include <stdio.h>
 int main()
{
    float speed,time,size;
    printf("请输入下载速度（Mb/s):");
    scanf("%f",&speed);
    printf("请输入下载文件大小（MB):");
    scanf("%f",&size);
    time = size*8/speed;
    printf("下载所需时间为:%.2f秒\n",time);
    return 0;
}
 