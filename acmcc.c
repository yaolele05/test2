#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*int main()
{
    int n,k;
    scanf("%d %d", &n,&k);
    int ori[n];
    int m[k];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ori[i]);
    }
    
    int num[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                num[count++]=(ori[i]+ori[j]+ori[k])/3;
            }
        }
    }
   for(int i=0;i<k;i++)
   {
     int m;
     scanf("%d",&m);
     int f;
     for(int j=0;j<m;j++)
     {
        f=0;
        int t;
        scanf("%d",&t);
        for(int p=0;p<count;p++)
        {
            
            if(t==num[p])
            {
                f=1;
                break;
            }
        }
     }
     if(f==1)
     {
        printf("YES\n");
     }
     else
     {
        printf("NO\n");
     }
   }
   return 0;
}*/
#include <stdio.h>
#include <math.h>

int main() {
    double T;
    if (scanf("%lf", &T) != 1) return 0;

    const double EPS = 1e-9;
    if (T <= 0) {
        printf("No\n");
        return 0;
    }

    double Tmin = sqrt(432.0); // sqrt(432) ≈ 20.7846096908
    if (T + 1e-12 < Tmin) {    // 允许微小数值误差
        printf("No\n");
        return 0;
    }

    // 可以构造解：采用 x = y = t, z = p - 2t, 要求 t^2 * (p - 2t) = 2T
    double p = T / 2.0;
    double target = 2.0 * T;

    // 二分 t 在 (0, p/2)
    double lo = 0.0 + 1e-15;
    double hi = p / 2.0 - 1e-15;

    // 为安全起见处理 T == Tmin 的极限情况：t = p/3
    double t_mid;
    for (int iter = 0; iter < 200; ++iter) {
        t_mid = (lo + hi) / 2.0;
        double z = p - 2.0 * t_mid;
        if (z <= 0) { hi = t_mid; continue; }
        double f = t_mid * t_mid * z; // t^2 * (p - 2t)
        if (f > target) hi = t_mid;
        else lo = t_mid;
    }
    t_mid = (lo + hi) / 2.0;
    double x = t_mid, y = t_mid, z = p - 2.0 * t_mid;

    // 反算三边
    double a = p - x;
    double b = p - y;
    double c = p - z;

    // 最终检查周长与面积是否满足（允许绝对或相对误差 1e-6）
    double perim = a + b + c;
    double area = 0.0;
    double inside = p * (p - a) * (p - b) * (p - c);
    if (inside < 0) inside = 0; // 数值误差保护
    area = sqrt(inside);

    double eps_check = 1e-6;
    if (fabs(perim - T) <= eps_check + 1e-12 || fabs(area - T) <= eps_check + 1e-12) {
        // 验证两者都在误差范围内
        if (fabs(perim - T) <= eps_check && fabs(area - T) <= eps_check) {
            printf("Yes\n");
            printf("%.6f %.6f %.6f\n", a, b, c);
            return 0;
        }
    }

    // 有时因为边界或浮点，进行一次更精确的调整：直接使用 symmetric case when T close to Tmin
    if (fabs(T - Tmin) <= 1e-7) {
        // x=y=z=p/3
        x = y = z = p / 3.0;
        a = b = c = p - x;
        printf("Yes\n");
        printf("%.6f %.6f %.6f\n", a, b, c);
        return 0;
    }

    // 最后一重判断：如果二分得到的解满足严格误差阈值则输出
    if (fabs(perim - T) <= eps_check && fabs(area - T) <= eps_check) {
        printf("Yes\n");
        printf("%.6f %.6f %.6f\n", a, b, c);
    } else {
        // 按理论应该不会到这里（因为 T >= Tmin 必有解），但做保险输出 No
        printf("No\n");
    }

    return 0;
}
