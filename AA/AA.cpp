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
}������ 1������*/

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
}5������*/

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

} 6�� ����*/

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
} 7������*/

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

}8�� ����*/

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
}*/ //9������ ����� Ǯ�� (�ٽ�Ǯ��)

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
}10������*/

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
}*/ // 11��

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

} */// 12��(ū �� �־�����) => ���������� �����ʿ�


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
}*/  //13�� ����

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
}*/ //14��

void main()
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
}