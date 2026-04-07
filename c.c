// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     printf("请输入整数的个数: ");
//     scanf("%d", &n);

//     int arr[1024] = {0};
//     int i = 0;

//     // 输入n个整数
//     printf("请输入%d个整数: ", n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // 使用冒泡排序算法排序
//     int j = 0;
//     int temp = 0;
//     for (i = 0; i < n - 1; i++) // 外循环，控制排序轮数
//     {
//         for (j = 0; j < n - 1 - i; j++) // 内循环，比较相邻元素
//         {
//             if (arr[j] > arr[j + 1]) // 如果前一个元素大于后一个元素，交换它们
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     // 输出排序后的结果
//     printf("排序后的结果: ");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// //c语言针对字符串的结口函数
// #include <string.h>
// 求字符串长度
//              strlen()
// 拷贝字符串
//              strcpy()
// 字符串的比较
//              strcmp()
// 字符串的拼接
//

// 有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
// #include <stdio.h>
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     for (a = 1; a < 5; a++)
//     {
//         for (b = 1; b < 5; b++)
//         {
//             for (c = 1; c < 5; c++)
//             {
//                 if (a != b && a != c && b != c)
//                 {
//                     printf("%d%d%d\r\n", a, b, c);
//                 }
//             }
//         }
//     }

//     return 0;
// }

// 题目：企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高
// 于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提
// 成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于
// 40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于
// 100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？
// #include <stdio.h>
// int main()
// {
//     int salary = 0;
//     float bonus = 0;
//     scanf("%d", &salary);
//     if (salary > 0 && salary <= 10)
//     {
//         bonus = salary * 0.1;
//         printf("奖金总数%f万", bonus);
//     }
//     if (salary > 10 && salary <= 20)
//     {
//         bonus = 10 * 0.1 + (salary - 10) * 0.075;
//         printf("奖金总数%f万", bonus);
//     }
//     if (salary > 20 && salary <= 40)
//     {
//         bonus = 10 * 0.1 + 10 * 0.075 + (salary - 20) * 0.05;
//         printf("奖金总数%f万", bonus);
//     }
//     if (salary > 40 && salary <= 60)
//     {
//         bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (salary - 40) * 0.03;
//         printf("奖金总数%f万", bonus);
//     }
//     if (salary > 60 && salary <= 100)
//     {
//         bonus = bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (salary - 60) * 0.015;
//         printf("奖金总数%f万", bonus);
//     }
//     if (salary > 100)
//     {
//         bonus = bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (salary - 100) * 0.01;
//         printf("奖金总数%f万", bonus);
//     }
//     return 0;
// }

// 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
// 完全平方数 是一个整数,其值等于另一个整数的平方
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     int flag = 0;
//     for (i = 1; i < 10000; i++)
//     {
//         flag = 0;
//         for (j = 0; j < 10000; j++)
//         {
//             if ((i + 100) == j * j)
//             {
//                 for (k = 0; k <= 10000; k++)
//                 {
//                     if ((i + 100 + 168) == k * k)
//                     {
//                         flag = 1;
//                     }
//                 }
//             }
//         }
//         if (flag == 1)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// 输入某年某月某日，判断这一天是这一年的第几天？
// 闰年且输入月份大于3时需考虑多加一天
// #include <stdio.h>
// int main()
// {
//     int year = 0;
//     int month = 0;
//     int day = 0;
//     int sum = 0;
//     scanf("%d%d%d", &year, &month, &day);
//     switch (month)
//     {
//     case 1:
//         sum = day;
//         break;
//     case 2:
//         sum = 31 + day;
//         break;
//     case 3:
//         sum = 59 + day;
//         break;
//     case 4:
//         sum = 90 + day;
//         break;
//     case 5:
//         sum = 120 + day;
//         break;
//     case 6:
//         sum = 151 + day;
//         break;
//     case 7:
//         sum = 181 + day;
//         break;
//     case 8:
//         sum = 212 + day;
//         break;
//     case 9:
//         sum = 243 + day;
//         break;
//     case 10:
//         sum = 273 + day;
//         break;
//     case 11:
//         sum = 304 + day;
//         break;
//     case 12:
//         sum = 334 + day;
//         break;
//     }
//     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 && month >= 3)
//     {
//         sum = sum + 1;
//     }
//     printf("%d", sum);
//     return 0;
// }

// 输入10个整数x,y,z，请把这10个数由小到大输出。
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int num[10];
//     int j = 0;
//     int k = 0;
//     int temp = 0;
//     int count = 0;
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &num[i]);
//     }
//     for (j = 0; j < 9; j++)
//     {
//         for (k = 0; k < 9 - j; k++)
//         {
//             if (num[k] > num[k + 1])
//             {
//                 temp = num[k];
//                 num[k] = num[k + 1];
//                 num[k + 1] = temp;
//             }
//         }
//     }
//     for (count = 0; count < 10; count++)
//     {
//         printf("%d ", num[count]);
//     }
//     return 0;
// }

// 输出9*9口诀。
// 程序分析：分行与列考虑，共9行9列
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int j = 0;
//     for (i = 1; i <= 9; i++)
//     {
//         for (j = 1; j <= 9; j++)
//         {
//             if (j > i)
//             {
//                 break;
//             }
//             printf("  %d*%d=%d", i, j, i * j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 要求输出国际象棋棋盘。
// 1.程序分析：用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     for (i = 0; i < 8; i++)
//     {
//         for (j = 0; j < 8; j++)
//         {
//             if ((i + j) % 2 == 0)
//             {
//                 printf("黑");
//             }
//             else
//             {
//                 printf("白");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月
// 　　　后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
// 规律1，1，2，3，5，8，13
// #include <stdio.h>
// int main()
// {
//     int month[100] = {1, 1};
//     int i;
//     int sum = 0;
//     scanf("%d", &sum);
//     for (i = 2; i < 100; i++)
//     {
//         month[i] = month[i - 1] + month[i - 2];
//     }
//     printf("%d", month[sum - 1]);
//     return 0;
// }

// 打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数
// 本身。例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int k = 0;
//     int j = 0;
//     int m = 0;
//     for (i = 100; i < 1000; i++)
//     {
//         k = i / 100;
//         j = i / 10 % 10;
//         m = i % 10;
//         if (i == (k * k * k) + (j * j * j) + (m * m * m))
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// // 将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int j = 0;
//     int num = 0;
//     scanf("%d", &num);
//     for ()
//         return 0;
// }
// #include <stdio.h>
// int main()
// {
//     struct cmplx
//     {
//         int x;
//         int y;
//     } cnum[2] = {1, 3, 2, 7};
//     printf("%d\n", cnum[0].y / cnum[0].x * cnum[1].x);
// }
// #include <stdio.h>
// typedef union
// {
//     long i;
//     int k[6];
//     char c;
// } DATE;
// struct data
// {
//     int cat;
//     DATE cow;
//     double dog;
// } too;
// DATE max;
// int main()
// {
//     printf("%d", sizeof(struct data) + sizeof(max));
//     return 0;
// }