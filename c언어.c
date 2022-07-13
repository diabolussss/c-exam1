#include<stdio.h>
int main(void)
{
	char ch = 0;
	int num = 0;
	int arr[100]={0};
	int temp = 0;
	for(int i=0;i<100;i++)
	{
		printf("select command >");
		scanf_s("%c", &ch);
		if ('h' == ch)
		{
			printf("n:newitem\n");
			printf("l:list items\n");
			printf("a:sort by asc\n");
			printf("d:soft by desc\n");
		}
		if ('n' == ch)
		{
			printf("newitem > ");
			scanf_s("%d", num);
			arr[i] = num;
		}
		if ('l' == ch)
		{
			for (int k = 0; k <= 100; k++)
			{
				for (int j = 0; j <= i; j++)
				{
					if (arr[j] > arr[j])
					{
						temp = arr[j];
						arr[j] = arr[j];
						arr[j] = temp;
					}
				}
			}
			for (int j = 0; j <= i; j++)
			{
				printf("%d\n", arr[j]);
			}
		}
		if ('d' == ch)
		{
			for (int k = 0; k <= 100; k++)
			{
				for (int j = 0; j <= i; j++)
				{
					if (arr[j] < arr[j])
					{
						temp = arr[j];
						arr[j] = arr[j];
						arr[j] = temp;
					}
				}
			}
			for (int j = 0; j <= i; j++)
			{
				printf("%d\n", arr[j]);
			}
		}
		ch = NULL;
	}
	return 0;
}