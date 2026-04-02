
// #include <stdio.h>
// int main()
// {
//     int j = 0;
//     int i = 0;
//     for (i = 0; i <= 100; i++)
//     {
//         if (i % 17 == 0)
//         {
//             j = i;
//         }
//     }
//     printf("%d\n", j);
//     return 0;
// }

// #include <stdio.h>//能被4整除但不能被100整除的是闰年，或能被400整除的也是闰年
// int main()
// {
//     int year;
//     scanf("%d",&year);
//     if((year%4==0)&&(year%100!=0)||(year%400==0))
//     {
//         printf("%d是闰年\r\n",year);
//     }else {
//         printf("%d不是闰年\r\n",year);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     float sum = 0;
//     for (i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 1)
//         {
//             sum = sum + 1.0 / i;
//         }
//         else if (i % 2 == 0)
//         {
//             sum = sum - 1.0 / i;
//         }
//     }
//     printf("%f\r\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     for (a = 0; a <= 9; a++)
//     {
//         for (b = 0; b <= 9; b++)
//         {
//             for (c = 0; c <= 9; c++)
//             {
//                 if ((a * 100 + b * 10 + c) + (c * 100 + b * 10 + a) == 1333)
//                 {
//                     printf("%d %d %d\r\n", a, b, c);
//                 }
//             }
//         }
//     }
//     return 0;
// }

// #include <stdio.h>//输出所有200-400以内能被3整除且个位数字为7的整数
// int main()
// {
//     int i;
//     for(i=200;i<=400;i++)
//     {
//         if((i%3==0)&&(i%100%10==7))
//         {
//             printf("%d ",i);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x=0;
//     int y=0;
//     scanf("%d",&x);
//     if(x<1)
//     {
//         y=x;
//     }else if(x>=1&&x<10)
//     {
//         y=2*x-1;
//     }else if(x>=10)
//     {
//         y=3*x-11;
//     }
//     printf("%d\r\n",y);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     int j = 0;
//     int sum = 1;
//     for (i = 1; i <= 10; i++)
//     {
//         sum *= i;
//         j += sum;
//     }
//     printf("%d\r\n", j);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     int j;
//     int shu;
//     for (i = 100; i < 200; i++)
//     {
//         int shu = 1;
//         for (j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 shu = 0;
//                 break;
//             }
//         }
//         if (shu)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int j = 0;
//     int sum;
//     for (i = 0; i <= 10000; i++)
//     {
//         sum = 0;
//         for (j = 1; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 sum += j;
//             }
//         }
//         if (sum == j)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char word;
//     scanf("%c", &word);
//     if ('a' <= word && word <= 'z')
//     {
//         printf("%c", word - 32);
//     }
//     else if ('A' <= word && word <= 'Z')
//     {
//         printf("%c", word + 32);
//     }
//     else
//     {
//         printf("%c", word);
//     }

//     return 0;
// }

// #include <stdio.h>
// void text()
// {
//     static int a = 1;
//     a++;
//     printf("%d ", a);
// }
// int main()
// {
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         text();
//     }
//     return 0;
// }

// #include <stdio.h>

// int nub = 100;
// int main()
// {
//     printf("%d ", nub);
//     return 0;
// }

// #include <stdio.h>
// #define add(x, y) x + y
// int main()
// {
//     int a = 1;
//     int b = 2;
//     printf("%d", add(a, b));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 10; // 初始化变量
//     printf("变量a的值: %d\n", a);
//     printf("变量a的地址: %p\n", &a); // 打印地址

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int *p = &a; // 声明一个指针变量p，存储a的地址

//     printf("变量a的值: %d\n", a);
//     printf("变量a的地址: %p\n", &a);
//     printf("指针p的值: %p\n", p);          // 指针p存储的是a的地址
//     printf("通过指针访问a的值: %d\n", *p); // 通过解引用运算符*访问指针指向的值

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", sizeof(int *));
//     printf("%d\n", sizeof(char *));
//     printf("%d\n", sizeof(long *));
//     printf("%d\n", sizeof(short *));
//     printf("%d\n", sizeof(double *));
//     return 0;
// }

// #include <stdio.h>
// struct stu
// {
//     char name[20];
//     int age;
//     char sex[20];
//     char tele[20];
// };
// void print(struct stu *sp)
// {
//     printf("%s %d %s %s \n", (*sp).name, (*sp).age, (*sp).sex, (*sp).tele);
//     printf("%s %d %s %s \n", sp->name, sp->age, sp->sex, sp->tele);
// };
// int main()
// {
//     struct stu a = {"gege", 22, "nan", "111111111"};
//     print(&a);
//     return 0;
// }

// 第一项和第二项均为1，从第三项开始，每一项都等于前两项之和
// #include <stdio.h>
// int main()
// {
//     int arr[30] = {1, 1};
//     int i = 0;
//     int count = 2;
//     printf("%8d%8d", arr[0], arr[1]);
//     for (i = 2; i < 30; i++)
//     {
//         arr[i] = arr[i - 2] + arr[i - 1];
//         count++;
//         printf("%8d", arr[i]);
//         if (count % 5 == 0)
//         {
//             printf("\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int ten = 0;
//     int i = 0;
//     int j = 0;
//     scanf("%d", &ten);
//     int arr[32] = {0};
//     int arr1[32] = {0};
//     for (i = 0; i < 32; i++)
//     {
//         j = ten % 2;
//         ten /= 2;
//         arr[i] = j;
//         arr1[32 - i] = arr[i];
//         printf("%d ", arr1[i]);
//     }
//     return 0;
// }

// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 1 1 1
// 将10个整数由小到大排序。
// #include <stdio.h>
// int main()
// {
//     int num[10] = {0};
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     int temp = 0;
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &num[i]);
//     }
//     for (i = 0; i < 9; i++)
//     {
//         for (j = 0; j < 9 - i; j++)
//         {
//             if (num[j] > num[j + 1])
//             {
//                 temp = num[j];
//                 num[j] = num[j + 1];
//                 num[j + 1] = temp;
//             }
//         }
//     }
//     for (k = 0; k < 10; k++)
//     {
//         printf("%d ", num[k]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a[10] = {0};
//     char b[10] = {0};
//     scanf("%s", a);
//     printf("%s", a);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[7] = {"abcdef"};
//     char b[4] = {"ABC"};
//     strcpy(a, b);
//     printf("%c", a[5]);
//     return 0;
// }

// 求一个 3*3 的整型矩阵对角线元素之和。
// #include <stdio.h>
// int main()
// {
//     int arr[3][3] = {0};
//     int i = 0;
//     int j = 0;
//     int sum = 0;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &arr[i][j]);
//             if (i == j || i + j == 2)
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }
//     printf("%d", sum);
//     return 0;
// }

//  打印杨辉三角的前 10 行
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int j = 0;
//     int arr[10][10] = {0};
//     for (i = 0; i < 10; i++)
//     {
//         for (j = 0; j < 10; j++)
//         {
//             if (j == i)
//             {
//                 printf("%5d", 1);
//                 arr[i][j] = 1;
//             }
//             else if (j > i)
//             {
//                 printf(" ");
//             }
//             else if (j == 0)
//             {
//                 printf("%5d", 1);
//                 arr[i][j] = 1;
//             }
//             else
//             {
//                 arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//                 printf("%5d", arr[i][j]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 输入一个字符串，判断是否是回文。（回文：这个字符串顺读和反读是一
// 样的。如“abcba”和”123321”都是回文。
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char word[100];
//     char reword[100];
//     scanf("%s", word);
//     int len = strlen(word);
//     int i = 0;
//     for (i = 0; i < len; i++)
//     {
//         reword[i] = word[len - i - 1];
//     }
//     int ret = strcmp(word, reword);
//     if (ret == 0)
//     {
//         printf("是回文");
//     }
//     else
//     {
//         printf("不是回文");
//     }
//     return 0;
// }

// 输入密码,设置一个密码，
// 然后输入密码，机会为 3 次，三次密码错误就直接退出
// #include <stdio.h>
// int main()
// {
//     int key[6] = {1, 2, 3, 4, 5, 6};
//     int password[6] = {0};
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     for (j = 0; j < 3; j++)
//     {
//         for (i = 0; i < 6; i++)
//         {
//             scanf("%d", &password[i]);
//             if (password[i] != key[i])
//             {
//                 k = 1;
//                 break;
//             }
//         }
//         if (k == 0)
//         {
//             printf("密码正确");
//         }
//     }
//     if (k == 1)
//     {
//         printf("请重新输入");
//     }
//     else
//     {
//         printf("三次密码错误直接退出");
//     }
//     return 0;
// }

// 一篇文章，有三行文字，每行有 80 个字符。
// 要求统计出其中英文大写字母、小写字母、数字、空格以及其他字符的个数。
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i = 0;
//     char str;
//     int large = 0;
//     int small = 0;
//     int num = 0;
//     int op = 0;
//     int other = 0;
//     int len = 0;
//     char passage[240] = {"HELLO world 123456 ....."};
//     len = strlen(passage);
//     for (i = 0; i < len; i++)
//     {
//         str = passage[i];
//         if (str >= 'a' && str <= 'z')
//         {
//             small++;
//         }
//         else if (str >= 'A' && str <= 'Z')
//         {
//             large++;
//         }
//         else if (str == ' ')
//         {
//             op++;
//         }
//         else if (str >= '0' && str <= '9')
//         {
//             num++;
//         }
//         else
//         {
//             other++;
//         }
//     }
//     printf("大写字母个数==%d\n", large);
//     printf("数字个数==%d\n", num);
//     printf("小写字母个数==%d\n", small);
//     printf("空格个数==%d\n", op);
//     printf("其他个数==%d\n", other);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {

//     int* a=NULL;

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *s1 = "AbDeG";
//     char *s2 = "AbdEg";
//     s1 += 2;
//     s2 += 2;
//     printf("%d\n", strcmp(s1, s2));
// }
// #include <stdio.h>
// int main()
// {
//     char *p;
//     char buff[] = "1234567";
//     char t, *s1, *s2;
//     p = &buff[0];
//     s1 = p;
//     s2 = p + 6;
//     while (s1 < s2)
//     {
//         t = *++s1;
//         *s1 = *--s2;
//         *s2 = t;
//     }
//     printf("%s\n", buff);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char *a[] = {"Pascal", "C language", "dBase", "Coble"};
//     char(**p);
//     int j;
//     p = a + 3;
//     for (j = 3; j >= 0; j--)
//         printf("%s\n", *(p--));
// }

// #include <stdio.h>
// int main()
// {
//     int *p = 0;
//     p += 6;
//     printf("%ld", p);
//     return 0;
// }\n

// #include <stdio.h>
// int main()
// {
//     char *a = "abcdef";
//     char arr[] = "kskxyl";
//     char *pc = arr;
//     printf("%s\n", arr);
//     printf("%s\n", pc);
//     printf("%p\n", pc);
//     printf("%c\n", *pc);
//     printf("%c\n", *a);
//     return 0;
// }

// // 仿写字符串函数功能：复制，比较，求长度，以及字符串连接。
// #include <stdio.h>
// int main()
// {
//     return 0;
// }

// 题1：
//     你写一个函数完全替代 strcpy函数
//     你的函数叫做 mystrcpy()
// #include <stdio.h>
// void mystrcpy(char *a, char *b)
// {
//     int i = 0;
//     for (i = 0; b[i] != '\0'; i++)
//     {
//         a[i] = b[i];
//     }
// }
// int main()
// {
//     char a[1024];
//     char b[1024];
//     scanf("%s", a);
//     scanf("%s", b);
//     mystrcpy(a, b);
//     printf("%s", a);
//     return 0;
// }

// 题2：
//     你写一个函数，这个函数传入10进制转成二进制
//     输出printf即可
// #include <stdio.h>
// void turn(int a)
// {
//     int i = 0;
//     int j = 0;
//     int num[1024] = {0};
//     while (a > 0)
//     {
//         num[i] = a % 2;
//         a = a / 2;
//         i++;
//     }
//     for (j = i - 1; j >= 0; j--)
//     {
//         printf("%d", num[j]);
//     }
// }
// int main()
// {
//     int a = 0;
//     scanf("%d", &a);
//     turn(a);
//     return 0;
// }

// #include <stdio.h>
// void change(int *a,int* b)
// {
//     int z;
//     z=*a;
//     *a=*b;
//     *b=z;
// }
// int main()
// {
//     int a=0;
//     int b=0;
//     scanf("%d%d",&a,&b);
//     change(&a,&b);
//     printf("%d %d",a,b);
//     return 0;
// }

// #include <stdio.h>
// int text(int num)
// {
//     num += 10;
//     printf("%d\r\n", num);
//     return num;
// }
// int main()
// {
//     int a = 30;
//     printf("%d\r\n", text(a));
//     return 0;
// }

// 编写符号函数：
//           1 x>0
// sign(x) = 0 x=0
//          -1 x<0
// 在主函数中输入一个整数，调用 sign 函数并输出其符号函数的值。
// #include <stdio.h>
// int sign(int num)
// {
//     int i = 0;
//     if (num > 0)
//     {
//         i = 1;
//     }
//     else if (num == 0)
//     {
//         i = 0;
//     }
//     else if (num < 0)
//     {
//         i = -1;
//     }
//     return i;
// }
// int main()
// {
//     int j = 0;
//     scanf("%d", &j);
//     printf("%d", sign(j));
//     return 0;
// }

// 写一个函数，其功能是计算 m 到 n(设 m<n)之间所有整数的和。然后利用它计算并输出 1
// 到 10、10 到 20、400 到 600 的和
// #include <stdio.h>
// int sum(int m, int n)
// {
//     int k = 0;
//     while (m <= n)
//     {
//         k += m;
//         m++;
//     }
//     return k;
// }
// int main()
// {
//     int i = 0;
//     int j = 0;
//     scanf("%d%d", &i, &j);
//     printf("%d", sum(i, j));
//     return 0;
// }

// 编写一个程序，该程序使用一个函数来计算用户输入的 5 个 float 值得平均值。
// #include <stdio.h>
// float average(float i, float j, float k, float m, float n)
// {
//     float a = (i + k + j + m + n) / 5;
//     return a;
// }
// int main()
// {
//     float a, b, c, d, f;
//     scanf("%f%f%f%f%f", &a, &b, &c, &d, &f);
//     average(a, b, c, d, f);
//     printf("%f", average(a, b, c, d, f));
//     return 0;
// }

// #include <stdio.h>
// float average(float num[5])
// {
//     int j = 0;
//     float sum = 0;
//     float k = 0;
//     for (j = 0; j < 5; j++)
//     {
//         sum += num[j];
//     }
//     k = sum / 5;
//     return k;
// }
// int main()
// {
//     float a[5] = {0};
//     int i = 0;
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%f", &a[i]);
//     }
//     printf("%f", average(a));
//     return 0;
// }

// 用函数实现求 1+1/2+1/3+1/4+……1/n 的值！
#include <stdio.h>
float sum(int a)
{
    float i = 1;
    float j = 0;
    for (i = 1; i <= a; i++)
    {
        j += 1.0 / i;
    }
    return j;
}
int main()
{
    int i = 0;
    int j = 0;
    scanf("%d", &i);
    printf("%f", sum(i));
    return 0;
}

// 作业 1 1 ：
// 1 1 课后作业 第 第 0 1--10  题
// 2 2 求两个数的最大公约数，和最小公倍数
// 3 3 r char r *strcat(char t *p1,const r char  *p2);
// 4 4 r char r *strcpy(char t *p1,const r char  *p2) ；
// 5 5 t int t strlen(const r char  *s);
// 6 6 t int t strcmp(const r char , *s1, t const r char  *s2);
// 7 7 十进制转二进制( ( 主函数中定义十进制数 ， 在子函数中定义二进制数的对应的数组 ， 求完二进制之
// 后，将数组返回给主函数输出！ );
// 作业 2 2 ：
// ① 递归实现年龄问题
// ② 递归实现 n n ！
// ③ 递归实现字符串逆序输出( ( 不写返回值，单字符输出）
// ④ 递归实现十进制转二进制( ( 不写返回值，求出来一个打印一个) )
// ⑤ 完成上述作业之后，随便找 3 2-3  个 题，定义指针指向函数，通过指针调用函数