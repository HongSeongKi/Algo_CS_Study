#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <string.h>
#include <math.h>

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

/*void main()
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

}*/ //21번 문제

/*void main()
{
	vector<int> v;
	int n, k;
	cin >> n >> k;
		
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	int sum = 0;
	for (int i = 0; i < k; i++)
		sum += v[i];
	int max = sum;
	
	for (int i = k; i < n; i++)
	{
		sum = sum + v[i] - v[i - k];
		if (sum > max)
			max = sum;
	} // 이거 다시한번 보기

	printf("%d", max);
}*/

/*
for (int i = 0; i < n; i++)
{
int sum = 0;
int flag = 0;
for (int j = i; j < n; j++)
{
flag++;
sum += v[j];
if (flag == k)
break;
}
if (flag == k && sum > max)
max = sum;
}

printf("%d", max);*/ //이중포문으로 풀면 시간초과
//22번 문제

/*void main()
{
	vector<int> v;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	int max = -10000;
	for (int i = 0; i < v.size(); i++)
	{
		int len = 1;
		for (int j = i; j < v.size() - 1; j++)
		{
			if (v[j] <= v[j + 1])
				len++;
			else break;
		}
		if (len > max)
			max = len;
	}
	printf("%d", max);
}*/ //23번

/*int flag[101];
void main()
{
	vector<int> v;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < n - 1; i++)
	{
		int k = abs(v[i] - v[i + 1]);
		if (k >= 0 && k <= n - 1)
		{
			if (flag[k] == 0)
				flag[k] = 1;
			else
			{
				printf("NO");
				return;
			}
		}
		else
		{
			printf("NO");
			return;
		}
	}
	printf("YES");
}*/ //24번

/*void main()
{
	priority_queue<pair<int,int>> pq;
	int arr[100];
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		pq.push(make_pair(a, i));
	}
	pair<int, int> p1, p2;
	for (int i = 0; i < n; i++)
	{
		p1 = p2;
		p2 = pq.top();
		pq.pop();
		if (i != 0)
		{
			if (p1.first != p2.first)
				arr[p2.second] = i + 1;
			else
			{
				arr[p2.second] = arr[p1.second];
			}
		}
		else
			arr[p2.second] = 1;
	}

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}*/ //25번 추가

/*void main()
{
	vector<int> v;
	int arr[10001];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < n; i++)
	{
		int sum = i;
		for (int j = i - 1; j >= 0; j--)
		{
			if (v[i] > v[j])
				sum--;
		}
		arr[i] = sum + 1;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
} 26번*/
  //시간복잡도 n제곱이 나옴
  //stable한 merge sort를 사용해야한다...

#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <set>
using namespace std;
//int flag[1000];

/*int isPrime(int n)
{
for (int i=2; i < n; i++)
{
if (n%i == 0)
return 0;
}
return 1;
}

void f(int n)
{
int idx = 2;
while(idx<=n)
{
int k = 2;

while (idx*k <= n)
{
flag[idx*k] = -1;
k++;
}

while(n%idx == 0)
{
n = n / idx;
flag[idx]++;
}
idx++;

while (flag[idx] == -1)
idx++;
}
}

void main()
{
int n;
scanf("%d", &n);

for (int i = n; i >= 2; i--)
{
if (isPrime(i))
flag[i]++;
else
f(i);
}
printf("%d! = ", n);
for (int i = 2; i <= n; i++)
{
if (flag[i] != -1)
printf("%d ", flag[i]);
}
}*/
/*
void f(int n)
{
int idx = 2;

while (idx<=n)
{
while (n%idx == 0)
{
n = n / idx;
flag[idx]++;
}

idx++;
while (flag[idx] == -1)
idx++;
}
}

void main()
{
int n;
scanf("%d", &n);

for (int i = 2; i <= n; i++)
{
int idx = 2;
while(flag[i] == 0 && i*idx<=n)
{
flag[i*idx] = -1;
idx++;
}
}

for (int i = n; i >= 2; i--)
{
if (flag[i] != -1)
flag[i]++;
else
f(i);
}
printf("%d! = ", n);
for (int i = 2; i <= n; i++)
{
if (flag[i] != -1)
printf("%d ", flag[i]);
}
}*/ // 27번

/*void main()
{
int n;
int asum = 0, bsum = 0;
scanf("%d", &n);
vector<int> v(n + 1);
int sum = 0;
for (int i = 2; i <= n; i++)
{
int idx = 2;
while (v[i]!=-1 && i*idx <= n)
{
v[i*idx] = -1;
idx++;
}
}

for (int i = n; i >= 2; i--)
{
if (v[i] != -1)
{
if (i == 2)
asum++;
else if (i == 5)
bsum++;
}
else
{
int t = i;
while (1)
{
if (i % 2 == 0)
{
i = i / 2;
asum++;
}
else if (i % 5 == 0)
{
i = i / 5;
bsum++;
}
else
{
i = t;
break;
}
}
}
}
if (asum > bsum)
printf("%d", bsum);
else
printf("%d", asum);
}*/ //28번

/*void main()
{
int n;
scanf("%d", &n);
int sum = 0;

for (int i = 1; i <= n; i++)
{
int j = i;
while (j != 0)
{
if (j % 10 == 3)
sum++;
j = j / 10;
}
}
printf("%d", sum);
}*/ //29번 

/*void main()
{
int n;
cin >> n;
int sum = 0;
int lt=100, rt, cur;
int k = 1;
while (lt > 0)
{
lt = n / (k * 10);
rt = n % k;
cur = (n/k)%10;
if (cur > 3)
{
sum += (lt + 1)*(k);
}
else if (cur == 3)
{
sum += (lt*k) + (rt + 1);
}
else
{
sum += lt * k;
}

k = k * 10;
}

printf("%d", sum);
}*/ //30번 다시 풀기 어려움..

/*void main()
{
string str;
cin >> str;
int sum = 0;

int idx;

for (int i = 1; i < str.length(); i++)
{
if (str[i] == 'H')
{
idx = i;
break;
}
}
int k = 1;
int num = 0;
for (int i = idx - 1; i >= 1; i--)
{
num += (str[i] - '0')*k;
k *= 10;
}
if (num != 0)
sum += num * 12;
else
sum += 12;

k = 1;
num = 0;
for (int i = str.length()-1; i > idx; i--)
{
num += (str[i] - '0')*k;
k *= 10;
}
if (num != 0)
sum += num;
else
sum += 1;
printf("%d", sum);

}*/ //31번

/*void main()
{
int n;
scanf("%d", &n);
vector<int> arr(n);

for (int i = 0; i < n; i++)
{
int a;
scanf("%d", &arr[i]);
}
sort(arr.begin(), arr.end());

for (int i = 0; i < n; i++)
printf("%d ", arr[i]);
}*/ //32번

/*void main()
{
vector<int> v1;
vector<int> v2;

int n;
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
int a;
scanf("%d", &a);
if (a > 0)
v2.push_back(a);
else if (a < 0)
v1.push_back(a);
}

for (int i = 0; i < v1.size(); i++)
printf("%d ", v1[i]);
for (int i = 0; i < v2.size(); i++)
printf("%d ", v2[i]);
}*/ //35번

/*void main()
{
int s, n;
scanf("%d %d", &s, &n);
vector<int> v1;
vector<int> v2;

for (int i = 0; i < n; i++)
{
int a;
scanf("%d", &a);
v2.push_back(a);
}

int idx=-1;
for (int i = 0; i < v2.size(); i++)
{
if (v1.size() < s)
{
for (int j = 0; j < v1.size(); j++)
{
if (v1[j] == v2[i])
{
idx = j;
break;
}
}

if (idx == -1)
v1.insert(v1.begin(),v2[i]);
else
{
v1.erase(v1.begin() + idx);
v1.insert(v1.begin(), v2[i]);
}
idx = -1;
}
else
{
for (int j = 0; j < v1.size(); j++)
{
if (v1[j] == v2[i])
{
idx = j;
break;
}
}
if (idx == -1)
{
v1.pop_back();
v1.insert(v1.begin(), v2[i]);
}
else
{
v1.erase(v1.begin() + idx);
v1.insert(v1.begin(),v2[i]);
}
idx = -1;
}
}

for (int i = 0; i < v1.size(); i++)
printf("%d ", v1[i]);

}*/ //37번

/*vector<int> v;
int arr[101];
int f(int k, int n)
{
int sum = 0;
for (int i = 0; i < k; i++)
{
if (arr[i]!=-1 && arr[i] < n)
sum++;
}
return sum;
}
void main()
{
int n;
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
int a;
scanf("%d", &a);
v.push_back(a);
}
for (int i = 0; i < 101; i++)
arr[i] = -1;

for (int i = 0; i < n; i++)
{
int k = f(v[i],i+1);
for (int j = v[i]; j < n; j++)
{
if (arr[j] == -1)
{
if (k == 0)
{
arr[j] = i+1;
break;
}
else
k--;
}
}
}
for(int i=0;i<n;i++)
printf("%d ", arr[i]);

}*/ // 38번

/*void main()
{
vector<int> v;
int n, m;
int a;
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
scanf("%d", &a);
v.push_back(a);
}
scanf("%d", &m);
for (int i = 0; i < m; i++)
{
scanf("%d", &a);
v.push_back(a);
}

sort(v.begin(), v.end());
for (int i = 0; i < v.size(); i++)
printf("%d ", v[i]);
}*/ // 39번

/*void main()
{
set<int> s1, s2,s3;
int n, m;
scanf("%d", &n);
int a;

for (int i = 0; i < n; i++)
{
scanf("%d", &a);
s1.insert(a);
}
scanf("%d", &m);

for (int i = 0; i < m; i++)
{
scanf("%d", &a);
s2.insert(a);
}
set<int>::iterator iter;

for (iter = s1.begin(); iter != s1.end();iter++ )
{
if (s2.find(*iter) != s2.end())
s3.insert(*iter);
}

for (iter = s3.begin(); iter != s3.end(); iter++)
printf("%d ", *iter);
}*/ //40번

/*int flag[1000];

void main()
{
vector<int> v;
int n;
scanf("%d", &n);

for (int i = 2; i <= n / 2; i++)
{
int num = n / i;
for(int k =0;k<i;k++)
{
int sum = 0;
int j;
for (j= 0; j < i; j++)
{
if ((num - j) < 1)
break;
sum = sum + num - j;
}
if (j==i &&sum == n)
{
flag[i] = 1;
for (int j = i-1; j >= 0; j--)
v.push_back(num - j);
break;
}
num++;
if (num > n)
break;
}
}

int idx = 0;
int sum = 0;
for (int i = 2; i < n / 2; i++)
{
if (flag[i] == 1)
{
sum++;
int t = idx;
while (idx < (i + t))
{
printf("%d ",v[idx]);
if(idx != t+i-1)
printf("+ ");
idx++;
}
printf("= %d\n", n);
}
}
printf("%d\n", sum);

}*/ //41번

/*void main()
{
int n;
scanf("%d", &n);
int tot = 0;
for (int i = 2; i <= n / 2; i++)
{
int k = -1;
int sum = 0;
for (int j = 1; j <= i; j++)
sum += j;

if(sum<=n)
k= (n - sum)%i;

if (k ==0)
{
k = (n - sum) / i;
tot++;
for (int j = 1; j <= i; j++)
{
printf("%d ", k + j);
if (j != i)
printf("+ ");
}
printf("= %d\n", n);
}
}

printf("%d\n", tot);

}*/ // 41번 다른풀이!!

/*int arr[1000001];

int binary_search(int left, int right, int m)
{
while (1)
{
if (m > arr[(left + right) / 2])
left = left + 1;
else if (m == arr[(left + right) / 2])
return (left + right) / 2;
else
right = right - 1;
}
}

void main()
{
int n,m;

scanf("%d %d", &n, &m);
for (int i = 0 ; i < n; i++)
scanf("%d", &arr[i]);
sort(arr, arr + n);

printf("%d\n", binary_search(0, n, m)+1);

}*/ //42번 이분탐색

/*void main()
{
int n, m;
scanf("%d %d", &n, &m);
int v[1001];
int min = 987654321;
int left = 1;
int right = 0;
for (int i = 0; i < n; i++)
{
scanf("%d", &v[i]);
right += v[i];
}
int temp;
while (1)
{
if (left > right)
break;
temp = 0;
int mid = (left + right) / 2;
int sum = 0;
int flag = 0;
for (int i = 0; i < n; i++)
{
if (temp >= m)
{
flag = 1;
break;
}
sum += v[i];
if (sum > mid)
{
sum -= v[i];
i--;
temp++;
sum = 0;
}
}
if (flag==1)
left = left + 1;
else if (flag == 0)
{
if (min > mid)
min = mid;
right = right - 1;
}
}
printf("%d", min);

}*/ //43번문제 결정 알고리즘 : 이런 유형의 문제 풀 때 이분검색많이사용한다. , 다시풀어보기

