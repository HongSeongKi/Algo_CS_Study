#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <string.h>
using namespace std;

/*int main()
{
int m, n, sum = 0;
cin >> n >> m;

for (int i = 1; i <= n; i++) {
if (i%m == 0)
sum += i;
}
cout << sum;
//
return 0;
}인프런 1번문제*/

/*void main()
{
char ch[100];
cin >> ch;
int n1 = (ch[0]-'0') * 10;
int n2 = ch[1]-'0';
int age=-1;
switch (ch[7])
{
case '1':
age = 2020 - (1900 + n1 + n2);
printf("%d %c", age, 'M');
break;
case '2':
age = 2020 - (1900 + n1 + n2);
printf("%d %c", age, 'W');
break;
case '3':
age = 2020 - (2000 + n1 + n2);
printf("%d %c", age, 'M');
break;
case '4':
age = 2020 - (2000 + n1 + n2);
printf("%d %c", age, 'W');
}
//system("pause");
}5번문제*/

/*void main()
{
char str[50];
int idx = 0;
char number[50];
cin >> str;
int n=0;
for (int i = 0; i < 50; i++)
{
if (str[i] == 0)
break;
if (str[i] - '0' >= 0 && str[i] - '0' <= 9)
{
number[idx] = str[i];
idx++;
}
}
int k = 1;
for (int i = idx - 1; i >= 0; i--)
{
n += (number[i]-'0') * k;
k*=10;
}

printf("%d\n", n);
int pnum = 0;
for (int i = 1; i <= n; i++)
{
if (n % i == 0)
pnum++;
}
printf("%d\n", pnum);

} 6번 문제*/

/*int main()
{
	char str[100];
	fgets(str, sizeof(str), stdin);
	//gets_s(str);
	//scanf("%s", str);
	char str2[100];
	int idx = 0;

	for (int i = 0; i < 100; i++)
	{
		if (str[i] == 0)
			break;

		if (str[i] >= 'a' && str[i] <= 'z')
			str2[idx++] = str[i];
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str2[idx++] = tolower(str[i]);
	}
	for (int i = 0; i < idx; i++)
		printf("%c", str2[i]);
} 7번문제*/

/*void main()
{
	char str[31];
	cin >> str;
	int n1 = 0, n2 = 0;
	for (int i = 0; i < 30; i++)
	{
		if (str[i] == 0)
			break;
		if (str[i] == '(')
			n1++;
		else if (str[i] == ')')
			n2++;
		if (n2 > n1)
		{
			printf("NO");
			return;
		}
	}

	if (n1 == n2)
		printf("YES");
	else
		printf("NO");

}8번 문제*/

/*int cnt[50001];

void main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j=j+i)
		{
			cnt[j]++;
		}
	}

	for (int i = 1; i <= n; i++)
		printf("%d ", cnt[i]);
}*/ //9번문제 배수로 풀기 (다시풀기)

/*int sum(int num)
{
	int sum2 = 0;
	while (1)
	{
		if (num == 0)
			break;
		sum2 = sum2 + (num % 10);
		num = num / 10;
	}
	return sum2;
}
void main()
{
	int temp;
	int n;
	cin >> n;
	int max = -1000000;
	int find;
	for (int i = 0; i < n; i++)
	{
		int k;
		scanf("%d", &k);
		temp = sum(k);
		if (temp > max)
		{
			max = temp;
			find = k;
		}
	}

	printf("%d", find);
}10번문제*/

/*void main()
{
	int n;
	cin >> n;
	int num = 0;
	int k;
	for (int i = 1; i <= n; i++)
	{
		k = i;
		while (1)
		{
			if (k == 0)
				break;
			num++;
			k = k / 10;
		}
	}
	printf("%d", num);
}*/ // 11번

/*void main()
{
	int n;
	cin >> n;
	
	int cnt = 1;
	int d = 9;
	int sum = 0;
	int res = 0;
	
	while (sum + d < n)
	{
		res = res + (cnt*d);
		sum += d;
		cnt++;
		d = d * 10;
	}

	int num = n - sum;
	res += (num*cnt);
	printf("%d", res);

} */// 12번(큰 수 넣었을때) => 수학적으로 접근필요


/*void main()
{
	int cnt[10] = { 0 };
	char str[100];
	cin >> str;
	int idx;
	for (int i = 0; i < 100; i++)
	{
		if (str[i] == 0)
			break;
		cnt[str[i] - '0']++;
	}

	int max = -100000;

	for (int i = 0; i < 10; i++)
	{
		if (cnt[i] >= max)
		{
			max = cnt[i];
			idx = i;
		}
	}
	printf("%d", idx);
}*/  //13번 문제

/*int reverse(int x)
{
	int arr[6];
	int idx = 0;
	
	while (1)
	{
		if (x == 0)
			break;
		arr[idx++] = x % 10;
		x = x / 10;
	}

	int sum = 0;
	int k = 1;
	for (int i = idx - 1; i >= 0; i--)
	{
		sum = sum + (arr[i]*k);
		k = k * 10;
	}
	return sum;
}

int isPrime(int x)
{
	for (int i = 2; i < x; i++)
	{
		if (x%i == 0)
			return 0;
	}
	return 1;
}

void main()
{
	int n;
	cin >> n;
	int arr[100];
	int p[100];
	int idx = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] = reverse(arr[i]);
		if (isPrime(arr[i]) && arr[i] !=1)
			p[idx++] = arr[i];
	}

	for (int i = 0; i < idx; i++)
		printf("%d ", p[i]);
}*/ //14번

/*void main()
{
	int n;
	cin >> n;
	int arr[200001];
	for (int i = 2; i <= n; i++)
		arr[i] = i;
	int num = 0;
	for (int i = 2; i <= n; i++)
	{
		if (arr[i] != 0)
		{
			for (int j = i + i; j <= n; j = j + i)
				arr[j] = 0;
			num++;
		}
	}

	printf("%d", num);
}*/ //15번

/*void main()
{
	char str1[101];
	char str2[101];
	cin >> str1;
	cin >> str2;
	
	int number1[100] = { 0 };
	int number2[100] = { 0 };
	if (strlen(str1) != strlen(str2))
	{
		printf("NO");
		return;
	}
	else
	{
		for (int i = 0; i < strlen(str1); i++)
		{
			if (str1[i] >= 'A' && str1[i] <= 'Z')
			{
				number1[str1[i] - 'A']++;
			}
			else if (str1[i] >= 'a' && str1[i] <= 'z')
			{
				number1[str1[i] - 'a' + 'Z'-'A' + 1]++;
			}
		}
		for (int i = 0; i < strlen(str2); i++)
		{
			if (str2[i] >= 'A' && str2[i] <= 'Z')
			{
				number2[str2[i] - 'A']++;
			}
			else if (str2[i] >= 'a' && str2[i] <= 'z')
			{
				number2[str2[i] - 'a' + 'Z'-'A' + 1]++;
			}
		}
	}
	
	for (int i = 0; i < 100; i++)
	{
		if (number1[i] != number2[i])
		{
			printf("NO");
			return;
		}
	}
	printf("YES");
}*/ // 16번문제 구글 인터뷰 문제 

/*void main()
{
	int n;
	int arr[10];
	cin >> n;
	int a, b;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		cin >> a >> b;
		for (int i = 1; i <= a; i++)
			sum += i;
		if (sum == b)
			arr[i] = 1;
		else
			arr[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
}*/ // 17번 문제 

/*void main()
{
	int n, m;
	int arr[101];
	cin >> n >> m;
	int max = 0;
	int num = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > m)
			num++;
		if (max < num)
			max = num;
		if(arr[i]<=m) {
			num = 0;
		}
	}

	if (max == 0)
		printf("-1");
	else
		printf("%d", max);
}*/  // 18번 문제

/*void main()
{
	int n;
	cin >> n;
	int arr[101];
	
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int sum = 0;
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] <= arr[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0 && i!=n-1)
			sum++;
		flag = 0;
	}
	printf("%d", sum);

}*/ // 19번 문제

/*void main()
{
	int ch1[100];
	int ch2[100];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ch1[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> ch2[i];
	}

	for (int i = 0; i < n; i++)
	{
		if ((ch1[i] - ch2[i] == -2) || (ch1[i]-ch2[i]==1))
		{
			printf("A\n");
		}
		else if (ch1[i] == ch2[i])
		{
			printf("D\n");
		}
		else
		{
			printf("B\n");
		}
	}
}*/ //20번 문제

void main()
{
	int A[10], B[10];
	int asum = 0, bsum = 0;

	for (int i = 0; i < 10; i++)
		cin >> A[i];
	for (int i = 0; i < 10; i++)
		cin >> B[i];

	for (int i = 0; i < 10; i++)
	{
		if (A[i] > B[i])
			asum += 3;
		else if (A[i] == B[i])
		{
			asum++;
			bsum++;
		}
		else
			bsum += 3;

		if (i == 9)
		{
			printf("%d %d\n", asum, bsum);
			if (asum > bsum)
				printf("A");
			else if (asum == bsum)
			{
				if (A[9] > B[9])
					printf("A");
				else if (B[9] > A[9])
					printf("B");
				else
				{
					for (int i = 8; i >= 0; i--)
					{
						if (A[i] > B[i])
						{
							printf("A");
							return;
						}
						else if (B[i] > A[i])
						{
							printf("B");
							return;
						}
					}
					printf("D");
				}
			}
			else
				printf("B");
		}
	}

}