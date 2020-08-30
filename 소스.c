#include "stdio.h"	
#pragma warning (disable:4996) //scanf오류뜨는거 잡아주는거

int main()														\
{
	int nopi, b;						//nopi=높이, i는 빈칸, k는(while의기회) B는 별의 갯수
	int k = 0, i = 0;


	while (1)
	{
		printf("\n 마름모 높이를 쓰세요 : ");
		scanf("%d", &nopi);

		if (nopi % 2 == 1)
		{
			for (k = 0; k < nopi / 2 + 1; k++)
			{
				for (i = nopi / 2 - k; i > 0; i--)
				{
					printf(" ");
				}


				for (b = 0; b < 2 * k + 1; b++)
				{
					printf("*");
				}

				printf("\n");


			}
			for (k = 0; k < nopi / 2; k++)
			{
				for (i = 0; i <= k; i++)
				{
					printf(" ");
				}

				for (b = nopi - 2 * k - 2; b > 0; b--)
				{
					printf("*");
				}

				printf("\n");


			}
			break;
		}
		else
			printf("짝수입니다. \n다시입력하세요!! \n\n");
	}
	system("pause");
	return 0;
}


