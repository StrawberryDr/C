#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>



//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
int main()
{
	int A, B, C, D, E;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if ((2 == B && 3 != A) || (2 != B && 3 == A) == 1)
						{
							if ((2 == B && 4 != E) || (2 != B && 4 == E) == 1)
							{
								if ((1 == C && 2 != D) || (1 != C && 2 == D) == 1)
								{
									if ((5 == C && 3 != D) || (5 != C && 3 == D) == 1)
									{
										if ((4 == E && 1 != A) || (4 != E && 1 == A) == 1)
										{
											if (A*B*C*D*E == 120)
											{
												printf("a= %d  b= %d  c= %d  d= %d  e= %d\n", A, B, C, D, E);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}