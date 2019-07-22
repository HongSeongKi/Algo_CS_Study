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

