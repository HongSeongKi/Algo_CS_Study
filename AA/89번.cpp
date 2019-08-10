#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <set>
#include <math.h>
#include <stack>
#include <queue>

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

/*void main()
{
	int arr[200001];
	int n, c;
	scanf("%d %d", &n, &c);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + n);
	int left = 1, right = 9;
	int max = -987654321;
	
	while (left <= right)
	{
		int temp = 1;
		int j = 0;
		int mid = (left + right) / 2;
		
		for (int i = 1; i < n; i++)
		{				
			if (arr[i] - arr[j] >= mid)
			{
				temp++;
				j = i;
				if (temp == c)
					break;
			}
		}

		if (temp == c)
		{
			if (max < mid)
				max = mid;
			left = left + 1;
		}
		else
			right = right - 1;
	}

	printf("%d", max);
}*/ //44번 문제

/*int flag[1001];
void main()
{
	
	int n, k;
	scanf("%d %d", &n, &k);
	int idx = 0;
	int temp = k;
	int s = 0;
	while (1)
	{
		if (s == n - 1)
			break;
		while (temp > 0)
		{
			idx++;
			if (idx == (n + 1))
				idx = 1;
			if (flag[idx] == 0)
				temp--;
		}
		s++;
		flag[idx] = 1;
		temp = k;
	}
	for (int i = 1; i <= n; i++)
	{
		if (flag[i] == 0)
		{
			printf("%d\n", i);
			return;
		}
	}
}*/ //45번

/*void main()
{
	int arr[2001];
	int n, k;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	scanf("%d",&k);

	int idx = -1;
	while (k>0)
	{
		idx++;
		if (idx == n)
			idx = 0;
		if (arr[idx]>0)
		{
			arr[idx]--;
			k--;
		}
	}
	int flag = idx;
	while (1)
	{
		idx++;
		if (idx == n)
			idx = 0;
		if (arr[idx] > 0)
		{
			printf("%d", idx+1);
			return;
		}
		if (idx == flag)
		{
			printf("-1");
			return;
		}
	}
}*/ // 46번

/*void main()
{
	int arr[51][51];
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			k = 0;
			if (i - 1 < 0)
				k++;
			if (j - 1 < 0)
				k++;
			if (i + 1 == n)
				k++;
			if (j + 1 == n)
				k++;
			if (i - 1 >= 0 && arr[i - 1][j] < arr[i][j])
				k++;
			if (j - 1 >= 0 && arr[i][j - 1] < arr[i][j])
				k++;
			if (i + 1 < n && arr[i + 1][j] < arr[i][j])
				k++;
			if (j + 1 < n && arr[i][j + 1] < arr[i][j])
				k++;
			if (k == 4)
				sum++;
		}
	}
	printf("%d", sum);
}*/ //47번

/*double f(double k1, double k2)
{
	if (k1 > k2)
		return k1 - k2;
	else
		return k2 - k1;
}
void main()
{
	double arr[10][10];
	vector<int> v;
	for (int i = 0; i < 9; i++)
	{
		double sum = 0;
		for (int j = 0; j < 9; j++)
		{
			scanf("%lf", &arr[i][j]);
			sum += arr[i][j];
		}
		double avg = sum / 9;
		int temp = (int)avg;
		if (avg - temp >= 0.5)
			avg = (int)avg+1;
		else
			avg = temp;
		v.push_back((int)avg);
		sort(arr[i], arr[i] + 9);
		
		if (avg > arr[i][4])
		{
			if (f(arr[i][4], avg) > f(arr[i][5], avg))
				v.push_back((int)arr[i][5]);
			else if (f(arr[i][4], avg) < f(arr[i][5], avg))
				v.push_back((int)arr[i][4]);
			else
				v.push_back((int)arr[i][5]);
		}
		else
		{
			if (f(arr[i][4], avg) > f(arr[i][3], avg))
				v.push_back((int)arr[i][3]);
			else if (f(arr[i][4], avg) < f(arr[i][3], avg))
				v.push_back((int)arr[i][4]);
			else
				v.push_back((int)arr[i][4]);
		}
	}

	int idx = 0;
	for (int i = 0; i < 9; i++)
	{
		printf("%d %d\n", v[idx], v[idx + 1]);
		idx += 2;
	}
}*/ //48번

/*int arr[11][11];

void main()
{
	int n;
	scanf("%d", &n);
	
	int a[11], b[11];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int j = n-1; j >= 0; j--)
		scanf("%d", &b[j]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] > b[j])
				arr[j][i] = b[j];
			else
				arr[j][i] = a[i];
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	printf("%d", sum);
}*/ // 49번

/*void main()
{
	int arr[51][51];
	int h, w;
	scanf("%d %d", &h, &w);
	
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			scanf("%d", &arr[i][j]);
	}

	int a, b;
	scanf("%d %d", &a, &b);
	int max = -987654321;
	int idx = 0;
	int sum = 0;
	int idx2 = 0;
	while (idx!=(h-a)+1)
	{
		while (idx2 != (w - b)+1)
		{
			for (int i = idx; i < idx + a; i++)
			{
				for (int j = idx2; j < idx2 + b; j++)
					sum += arr[i][j];
			}
			if (sum > max)
				max = sum;
			idx2++;
			sum = 0;
		}
		idx++;
		idx2 = 0;
	}
	printf("%d", max);
}*/ //50번
/*int arr[701][701];
int d[701][701];

void main()
{
	int h, w;
	scanf("%d %d",&h,&w);
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			scanf("%d", &arr[i][j]);
			d[i][j] = d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1] + arr[i][j];
		}
	}
	int a, b;
	scanf("%d %d", &a, &b);
	int max = -987654321;
	for (int i = a; i <= h; i++)
	{
		for (int j = b; j <= w; j++)
		{
			int k = d[i][j] - d[i - a][j] - d[i][j - b] + d[i - a][j - b];
			if (max < k)
				max = k;
		}
	}

	printf("%d\n", max);
}*/  //51번 DP문제 다시풀어보기(DP+부분합문제)


/*int f(int n)
{
	int flag = 1;

	while(n != 1)
	{
		if ((n % 2 != 0) && (n % 5 != 0) && (n%3!=0))
		{
			flag = 0;
			break;
		}
		if (n % 2 == 0)
			n = n / 2;
		if (n % 3 == 0)
			n = n / 3;
		if (n % 5 == 0)
			n = n / 5;
	}
	return flag;
}

void main()
{
	int n;
	int idx = 2;
	scanf("%d", &n);
	n--;
	if (n == 0)
	{
		printf("1");
		return;
	}
	while (1)
	{
		if (f(idx))
			n--;
		if (n == 0)
			break;
		idx++;
	}
	printf("%d", idx);
}*/ //52번 

/*void main()
{
	stack<int> s;
	int arr[1001];
	int n, k;
	scanf("%d %d", &n, &k);
	int idx = 0;
	
	while (n != 0)
	{	
		int t = n % k;
		s.push(t);
		//arr[idx] = n % k;
		n = n / k;
		//idx++;
	}
	//arr[idx] = 1;
	int len = s.size();

	for (int i = 0; i < len; i++)
	{
		int a = s.top();
		if (a <= 9)
			printf("%d", a);
		else if (a >=10)
			printf("%c", 'A' + a - 10);
		s.pop();
	}

	/*for (int i = idx; i >= 0; i--)
	{
		if (arr[i] <= 9)
			printf("%d", arr[i]);
		else
			printf("%c", 'A' + arr[i] - 10);
	}
}*/ //53번

/*void main()
{
	int arr[31];
	int sarr[31];
	stack<int> s1;
	int n;
	char s[100];
	int idx = 0, idx2=0;
	scanf("%d", &n);
	int flag = 0;
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n; i++)
	{
		if (idx2==0)
		{
			if (arr[i] != 1)
			{
				s1.push(arr[i]);
				s[idx++] = 'P';
			}
			else
			{
				s[idx++] = 'P';
				s[idx++] = 'O';
				sarr[idx2++] = 1;
			}
		}
	
		else
		{
			if (s1.empty())
			{
				if (arr[i] == (sarr[idx2 - 1] + 1))
				{
					s[idx++] = 'P';
					s[idx++] = 'O';
					sarr[idx2++] = arr[i];
				}
				else
				{
					s1.push(arr[i]);
					s[idx] = 'P';
				}
			}
			else
			{
				if (arr[i] < s1.top())
				{
					s[idx++] = 'P';
					s1.push(arr[i]);
				}
				else
				{
					while (!s1.empty() && arr[i] > s1.top())
					{
						int a = s1.top();
						s[idx++] = 'O';
						s1.pop();
						if ((sarr[idx2 - 1] + 1) == a)
							sarr[idx2++] = a;
						else
						{
							flag = 1;
							break;
						}
					}
					s1.push(arr[i]);
					s[idx++] = 'P';
				}
			}
		}
	}
	while (!s1.empty())
	{
		s[idx++] = 'O';
		int a = s1.top();
		if ((sarr[idx2 - 1] + 1) == a)
			sarr[idx2++] = a;
		else
		{
			flag = 1;
			break;
		}
		s1.pop();
	}
	if (flag == 1)
		printf("impossible");
	else
	{
		for (int i = 0; i < idx; i++)
			printf("%c", s[i]);
	}
}*/ //55번

/*void f(int n)
{
	if (n == 0)
		return;
	f(n - 1);
	printf("%d ", n);
}
void main()
{
	int n;
	scanf("%d", &n);
	f(n);
}*/ //56번

/*void f(int n)
{
	if (n == 0)
		return;
	f(n / 2);
	printf("%d", n % 2);
}
void main()
{
	int n;
	scanf("%d", &n);
	f(n);
}*/ //57번

/*int n;
vector<int> v;
void dfs(int k)
{
	if (k > n)
		return;
	v.push_back(k);
	dfs(k + 1);
	for (int i = 0; i < v.size(); i++)
		printf("%d ", v[i]);
	printf("\n");
	v.pop_back();
	dfs(k + 1);
}

void main()
{
	scanf("%d", &n);
	dfs(1);
}*/ //59번

/*int arr[11];
int n;
int sum = 0;
int sum2 = 0;
int flag;

void dfs(int k)
{
	if (flag == 1)
		return;
	if (sum2 > (sum / 2))
		return;
	if (k == n)
	{
		if (sum2 == (sum / 2))
			flag = 1;
		return;
	}


	sum2 += arr[k];
	dfs(k + 1);
	sum2 -= arr[k];
	dfs(k + 1);
}

void main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	if (sum % 2 != 0)
		printf("NO");
	else
	{
		dfs(0);
		if (flag)
			printf("YES");
		else
			printf("NO");
	}
}*/ //60번

/*int arr[11];
int num=0;
int sum;
int n, m;

void dfs(int k)
{
	if (k == n)
	{
		if (sum == m)
			num++;
	}
	else
	{
		sum += arr[k]; //1. 수를 더하기
		dfs(k + 1);
		sum -= 2*arr[k]; //2. 수를 포함하지 않기
		dfs(k + 1);
		sum += arr[k]; //3. 수를 빼기
		dfs(k + 1);
	}
} //여기서는 2번과 3번의 순서를바꾸면 안된다 왜냐하면 돌아왔을때 sum의값이 바뀌기때문에
/*int cnt = 0;
void dfs(int k, int val)
{
	if (k == n)
	{
		if (val == m)
			cnt++;
	}
	else
	{
		dfs(k + 1, val + arr[k]);
		dfs(k + 1, val);
		dfs(k + 1, val - arr[k]);
	}
}

void main()
{	
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	dfs(0);
	printf("%d", num);
}*/ //61번

/*int n;
int arr[101];
int brr[101];

void mergesort(int left, int mid, int right)
{
	int lt = left;
	int k = mid + 1;
	int idx = left;
	while (1)
	{
		if (lt > mid || k > right)
			break;

		if (arr[lt] > arr[k])
		{
			brr[idx++] = arr[k++];
		}
		else
		{
			brr[idx] = arr[lt];
			lt++;
			idx++;
		}
	}

	for (int i = lt; i <= mid; i++)
	{
		brr[idx] = arr[i];
		idx++;
	}
	for (int i = k; i <= right; i++)
	{
		brr[idx] = arr[i];
		idx++;
	}

	for (int i = left; i <= right; i++)
		arr[i] = brr[i];

}

void merge(int left,int right)
{
	if (left>=right)
		return;
	int mid = (left + right) / 2;
	merge(left, mid);
	merge(mid + 1, right);
	mergesort(left, mid, right);
}



void main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	merge(0, n - 1);

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}*/ //mergesort 62번
/*int arr[21][21];
void main()
{	
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		arr[a - 1][b - 1] = c;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}*/ // 63번


/*int flag[21];
int arr[21][21];
int num;
int n, m;

void dfs(int k)
{
	if (k == n)
	{
		num++;
		return;
	}
	flag[k] = 1;
	for (int i = 2; i <= n; i++)
	{
		if (flag[i]==0 && arr[k][i] == 1)
		{
			dfs(i);
		}
	}
	flag[k] = 0;
}

void main()
{
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
	}
	dfs(1);
	printf("%d", num);
}*/ //64번

/*int flag[7][7];
int arr[7][7];
int sum;

void dfs(int a,int b)
{ 
	if (a == 6 && b == 6)
	{
		sum++;
		return;
	}
	flag[a][b] = 1;

	if (a - 1 > 0 && flag[a - 1][b] == 0 && arr[a - 1][b] == 0)
		dfs(a - 1, b);
	if (b - 1 > 0 && flag[a][b - 1] == 0 && arr[a][b - 1] == 0)
		dfs(a, b - 1);
	if (a + 1 < 7 && flag[a + 1][b] == 0 && arr[a + 1][b] == 0)
		dfs(a + 1, b);
	if (b + 1 < 7 && flag[a][b + 1] == 0 && arr[a][b + 1] == 0)
		dfs(a, b + 1);

	flag[a][b] = 0;

}

void main()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
			scanf("%d", &arr[i][j]);
	}
	dfs(0,0);
	printf("%d\n", sum);
}*/ //65번

/*int min2 = 987654321;
int arr[21][21];
int flag[21];
int sum;
int n, m;

void dfs(int k)
{
	if (k == n)
	{
		if (min2 > sum)
			min2 = sum;
	}
	flag[k] = 1;
	
	for (int i = 2; i <= n; i++)
	{
		if (flag[i] == 0 && arr[k][i] != 0)
		{
			sum += arr[k][i];
			dfs(i);
			sum -= arr[k][i];
		}
	}
	flag[k] = 0;
}

void main()
{
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		int a, b, w;
		scanf("%d %d %d", &a, &b, &w);
		arr[a][b] = w;
	}

	dfs(1);
	printf("%d", min2);

}*/ //67번

/*vector<int> v[21];
int sum = 0;
int flag[21];
int n, m;
void dfs(int k)
{
	if (k == n)
	{
		sum++;
		return;
	}

	flag[k] = 1;
	for (int i = 0; i < v[k].size(); i++)
	{
		if (flag[v[k][i]] == 0)
			dfs(v[k][i]);
	}
	flag[k] = 0;
}

void main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
	}
	dfs(1);
	printf("%d\n", sum);
}*/ //66번

/*int n, m;
vector<pair<int,int>> v[21];
int flag[21];
int sum;
int min2 = 987654321;
void dfs(int start)
{
	if (start == n)
	{
		if (min2 > sum)
			min2 = sum;
		return;
	}
	flag[start] = 1;
	for (int i = 0; i < v[start].size(); i++)
	{
		if (flag[v[start][i].first] == 0)
		{
			sum = sum + v[start][i].second;
			dfs(v[start][i].first);
			sum = sum - v[start][i].second;
		}
	}
	flag[start] = 0;
}

void main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		v[a].push_back(make_pair(b,c)); //pair<int,int>(b,c)
	}
	dfs(1);
	printf("%d", min2);
}*/ //68번

/*queue<int> q;
vector<int> v[8];
bool flag[8];

void bfs(int start)
{
	flag[start] = true;
	q.push(start);

	while (!q.empty())
	{
		int k = q.front();
		q.pop();
		printf("%d ", k);
		for (int i = 0; i < v[k].size(); i++)
		{
			if (flag[v[k][i]] == false)
			{
				flag[v[k][i]] = true;
				q.push(v[k][i]);
			}
		}
	}
}
void main()
{
	for (int i = 0; i < 6; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs(1);
}*/ //69번

/*vector<int> v[21];
queue<int> q;
int arr[21];
int flag[21];

void bfs(int start)
{
	q.push(start);
	flag[start] = 1;
	while (!q.empty())
	{
		int k = q.front();
		q.pop();
		for (int i = 0; i < v[k].size(); i++)
		{
			if (flag[v[k][i]] == 0)
			{
				arr[v[k][i]] = arr[k]+1;
				flag[v[k][i]] = 1;
				q.push(v[k][i]);
			}
		}
	}
}

void main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
	}
	bfs(1);
	for (int i=2; i <= n; i++)
	{
		printf("%d : %d\n", i, arr[i]);
	}
}*/ //70번

/*void main()
{
	int num;
	int s, e;
	scanf("%d %d", &s, &e);

	if (s > e)
	{
		printf("%d\n", s - e);
		return;
	}	
	else
	{
		int num = (e - s) / 5;
		int k = (e-s) % 5;
		int temp = num;
		if (k > (s / 2))
		{
			temp++;
			k = s + 5*temp - e;
			while (k != 0)
			{
				temp++;
				k--;
			}
		}
		else
		{
			while (k != 0)
			{
				temp++;
				k--;
			}
		}
		printf("%d", temp);
	}
}*/ //71번

/*int flag[10001];
int d[3] = { -1,1,5 };
queue<int> q;

void main()
{
	int s, e;
	scanf("%d %d", &s, &e);

	flag[s] = 1;
	q.push(s);

	while (!q.empty())
	{
		int k = q.front();
		q.pop();
		for (int i = 0; i < 3; i++)
		{
			int pos = k + d[i];
			if (pos == e)
			{
				printf("%d", flag[k]);
				return;
			}
			else
			{
				if (flag[pos] == 0)
				{
					flag[pos] = flag[k] + 1;
					q.push(pos);
				}
			}
		}
	}
}*/ //71번 bfs방식으로 구현

/*void main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	queue<int> q;

	for (int i = 1; i <= n; i++)
		q.push(i);
	int temp = k;
	
	while (q.size() != 1)
	{
		temp--;
		if (temp == 0)
		{
			q.pop();
			temp = k;
		}
		else
		{
			q.push(q.front());
			q.pop();
		}
	}
	printf("%d", q.front());

}*/ //72번

/*void main()
{
	priority_queue<int> q;

	while (1)
	{
		int a;
		scanf("%d", &a);
		if (a == -1)
			return;
		else if (a == 0)
		{
			if (q.size() == 0)
				printf("-1\n");
			else
			{
				printf("%d\n", q.top());
				q.pop();
			}
		}
		else
			q.push(a);
	}
}*/ //73번 우선순위큐

/*int arr[10001];
void main()
{
	priority_queue<pair<int, int>> pq;
	
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int m, d;
		scanf("%d %d", &m, &d);
		pq.push(make_pair(m, d));
	}
	while (!pq.empty())
	{
		pair<int, int> k = pq.top();
		pq.pop();
		for (int i = k.second; i >= 1; i--)
		{
			if (arr[i] == 0)
			{
				arr[i] = k.first;
				sum += k.first;
				break;
			}
		}
	}

	printf("%d\n", sum);
}*/ //75번 


/*int a[21][21];

int cal(int n, int r)
{
	if (n == r || r == 0)
		return 1;
	if (a[n][r] != 0)
		return a[n][r];
	return a[n][r] = cal(n-1,r-1) + cal(n-1,r);
}

void main()
{
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d\n",cal(n, r));
}*/ //76번

/*int arr[1001];

int getParent(int k)
{
	if (arr[k] < 0)
		return k;
	return getParent(arr[k]);
}

void Union(int a, int b)
{
	if (getParent(a) != getParent(b))
	{
		int a1 = getParent(a);
		int b1 = getParent(b);
		int temp = arr[a1] + arr[b1];
		
		if (arr[a1] > arr[b1])
		{
			arr[b1] = temp;
			arr[a1] = b1;
		}
		else
		{
			arr[a1] = temp;
			arr[b1] = a1;
		}
	}
}

void main()
{
	for (int i = 0; i < 1001; i++)
		arr[i] = -1;
	int n, m;
	scanf("%d %d", &n, &m);
	int a, b;

	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		Union(a, b);
	}

	scanf("%d %d", &a, &b);
	if (getParent(a) == getParent(b))
		printf("YES");
	else
		printf("NO");
}*/ //77번


/*int arr[1001];

int getParent(int k)
{
	if (arr[k] < 0)
		return k;
	return getParent(arr[k]);
}

void Union(int a, int b)
{
	if (getParent(a) != getParent(b))
	{
		int a1 = getParent(a);
		int b1 = getParent(b);
		int temp = arr[a1] + arr[b1];

		if (arr[a1] > arr[b1])
		{
			arr[b1] = temp;
			arr[a1] = b1;
		}
		else
		{
			arr[a1] = temp;
			arr[b1] = a1;
		}
	}
}

class Edge {
public:
	int e1, e2, w;
	Edge()
	{

	}
	Edge(int a, int b, int c)
	{
		e1 = a;
		e2 = b;
		w = c;
	}
	/*bool operator <(Edge &e2)
	{
		return this->w < e2.w;
	}
};
bool compare(Edge e1, Edge e2)
{
	return e1.w < e2.w;
}
void main()
{
	for (int i = 1; i <= 7; i++)
		arr[i] = -1;
	int sum = 0;
	vector<Edge> v;
	v.push_back(Edge(1, 7, 12));
	v.push_back(Edge(1, 4, 28));
	v.push_back(Edge(1, 2, 67));
	v.push_back(Edge(1, 5, 17));
	v.push_back(Edge(2, 4, 24));
	v.push_back(Edge(2, 5, 62));
	v.push_back(Edge(3, 5, 20));
	v.push_back(Edge(3, 6, 37));
	v.push_back(Edge(4, 7, 13));
	v.push_back(Edge(5, 6, 45));
	v.push_back(Edge(5, 7, 73));
	
	sort(v.begin(), v.end(),compare);
	int edge = 0;
	
	for (int i = 0; i < v.size(); i++)
	{
		if (edge == 6)
			break;
		if (getParent(v[i].e1) != getParent(v[i].e2))
		{
			Union(v[i].e1, v[i].e2);
			sum += v[i].w;
			edge++;
		}
	}
	printf("%d", sum);
}*/ //크루스칼 알고리즘


/*int arr[101];

int getParent(int k)
{
	if (arr[k] < 0)
		return k;
	return getParent(arr[k]);
}

void Union(int a, int b)
{
	int k1 = getParent(a);
	int k2 = getParent(b);
	int temp = arr[k1] + arr[k2];
	if(k1 != k2)
	{
		if (arr[k1] > arr[k2])
		{
			arr[k2] = temp;
			arr[k1] = k2;
		}
		else
		{
			arr[k1] = temp;
			arr[k2] = k1;
		}
	}
}

class Edge {
public:
	int n1, n2, w;
	Edge()
	{

	}
	Edge(int a, int b, int c)
	{
		n1 = a;
		n2 = b;
		w = c;
	}
	bool operator <(Edge &e2)
	{
		return this->w < e2.w;
	}
};

void main()
{
	int sum = 0;
	vector<Edge> v;
	int v1, e;
	int edge = 0;
	scanf("%d %d", &v1, &e);
	
	for (int i = 1; i <= 100; i++)
		arr[i] = -1;
	
	for (int i = 0; i < e; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		v.push_back(Edge(a, b, c));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		if (getParent(v[i].n1) != getParent((v[i].n2)) )
		{
			Union(v[i].n1, v[i].n2);
			sum += v[i].w;
			edge++;
		}
		if (edge ==(v1-1))
			break;
	}

	printf("%d", sum);
}*/ //78번

/*class Edge {
public:
	int n, w;
	Edge(int n, int w)
	{
		this->n = n;
		this->w = w;
	}

	bool operator < (const Edge e2)const
	{
		return this->w > e2.w;
	}
};

bool operator <(pair<int, int> p1, pair<int, int> p2)
{
	return p1.second > p2.second;
}

int flag[101];

void main()
{
	priority_queue<Edge> pq;
	int sum = 0;
	vector<Edge> ve[101];
	int v, e;

	scanf("%d %d", &v, &e);
	for (int i = 0; i < e; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		ve[a].push_back(Edge(b, c));
		ve[b].push_back(Edge(a, c));
	}

	pq.push(Edge(1,0));

	while (!pq.empty())
	{
		Edge p = pq.top();
		pq.pop();
		if (flag[p.n] == 0)
		{
			flag[p.n] = 1;
			sum += p.w;
			for (int i = 0; i < ve[p.n].size(); i++)
				pq.push(ve[p.n][i]);
		}	
	}
	
	printf("%d", sum);
}*/ //79번

/*bool operator < (pair<int, int> p1, pair<int, int> p2)
{
	return p1.first > p2.first;
}*/ // 이거쓰면 왜안되는지...

/*bool compare(pair<int, int> p1, pair<int, int> p2)
{
	return p1.first > p2.first;
}*/

/*class Val {
public:
	int first, second;
	Val(int n1, int n2)
	{
		first = n1;
		second = n2;
	}
	bool operator <(Val v2)
	{
		return this->first > v2.first;
	}
};

void main()
{
	/*vector<pair<int, int>> v;
	v.push_back(make_pair(1, 3));
	v.push_back(make_pair(10, 8));
	v.push_back(make_pair(4, 3));
	v.push_back(make_pair(5, 3));
	v.push_back(make_pair(6, 2));
	vector<Val> v;

	v.push_back(Val(1, 3));
	v.push_back(Val(10, 3));
	v.push_back(Val(4, 3));
	v.push_back(Val(5, 3));
	v.push_back(Val(6, 2));


	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		printf("%d %d\n", v[i].first, v[i].second);
}*/ //operator < 연습

/*int d[7];
int INF = 987654321;
int flag[7];
vector<pair<int, int>> v[6];
priority_queue<pair<int, int>> pq;

void djkstra(int start)
{
	flag[start] = 1;
	d[start] = 0;
	pq.push(make_pair(0, 1));

}

void main()
{
	for (int i = 1; i <= 6; i++)
		d[i] = INF;

	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		v[a].push_back(make_pair(b,c));
	}

	djkstra(1);

	for (int i = 2; i <= 6; i++)
	{
		if (d[i] == 987654321)
			printf("%d : impossible\n", i);
		else
			printf("%d : %d\n", i, d[i]);
	}
	

}*/ // 80번 다익스트라 pq로 풀어보기

/*
void main()
{
} // 81번
*/

/*int arr[16];
vector<int> v;
int n, r;
int sum;

int flag[16];
void dfs(int start)
{
	if (start >= n)
		return;

	flag[start] = 1;
	v.push_back(arr[start]);
	
	if (v.size() == r)
	{
		for (int i = 0; i < r; i++)
		{
			printf("%d ",v[i]);
		}
		sum++;
		puts("");
		v.pop_back();
		flag[start] = 0;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (flag[i] == 0)
		{
			flag[i] = 1;
			dfs(i);
		}
	}
	v.pop_back();
	flag[start] = 0;
}

void main()
{
	scanf("%d %d", &n, &r);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		dfs(i);
		for (int i = 0; i < n; i++)
			flag[i] = 0;
		while (v.size() != 0)
			v.pop_back();
	}

	printf("%d\n", sum);
}*/  //82번

/*vector<pair<int, int>> v;
int check[15];
int max1 = -987654321;
int sum;
int n;

void dfs(int before, int start)
{
	if (start == n)
	{
		if (max1 < sum)
			max1 = sum;
		return;
	}
	
	for (int i = start; i < n; i++)
	{
		if (check[i] == 0)
		{
			if (i + v[i].first > n)
				continue;
			check[i] = 1;
			sum += v[i].second;
			dfs(i,i + v[i].first);
			sum -= v[i].second;
			check[i] = 0;
		}
	}
	if (max1 < sum)
		max1 = sum;
}

void main()
{

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}

	dfs(0,0);
	printf("%d", max1);
}*/ //84번

/*int p[16];
int t[16];
int n;
int sum;
int max1 = -987654321;

void dfs(int start)
{
	if (start == n + 1)
	{
		if (sum > max1)
			max1 = sum;
		return;
	}
	if (start + p[start] <= n + 1)
	{
		sum += t[start];
		dfs(start + p[start]);
		sum -= t[start];
	}
	dfs(start + 1);
	
}

void main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d %d", &p[i], &t[i]);
	dfs(1);
	printf("%d", max1);
}*/ //84번 다른풀이

/*int a[12];
int b[4];
int max1 = -987654321;
int min1 = 987654321;
int n;
int sum;
void dfs(int start)
{
	if (start == n)
	{
		if (sum > max1)
			max1 = sum;
		if (sum < min1)
			min1 = sum;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (b[i] != 0)
		{
			int temp = sum;
			if (i == 0)
			{
				b[0]--;
				sum += a[start + 1];
				dfs(start + 1);
				b[0]++;
				sum = temp;
			}
			else if (i == 1)
			{
				b[1]--;
				sum -= a[start + 1];
				dfs(start + 1);
				b[1]++;
				sum = temp;
			}
			else if (i == 2)
			{
				b[2]--;
				sum *= a[start + 1];
				dfs(start + 1);
				b[2]++;
				sum = temp;
			}
			else if (i == 3)
			{
				b[3]--;
				sum /= a[start + 1];
				dfs(start + 1);
				b[3]++;
				sum = temp;
			}
		}
	}
	
}

void main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < 4; i++)
		scanf("%d", &b[i]);
	sum += a[1];
	dfs(1);
	printf("%d\n", max1);
	printf("%d\n", min1);

}*/ //85번 



/*int arr[51][51];
int n, m;

vector<pair<int, int>> v1,v2,v3;
int min2 = 987654321;
int cnt;
void dfs(int start)
{
	int k=0;
	if (cnt == m)
	{
		int sum=0;
		for (int i = 0; i < v1.size(); i++)
		{
			k = 0;
			int min1 = 987654321;
			for (int j = 0; j < v3.size(); j++)
			{
				k = (abs(v1[i].first - v3[j].first) + abs(v1[i].second - v3[j].second));
				if (min1 > k)
					min1 = k;
			}
			sum += min1;
		}
		if (min2 > sum)
			min2 = sum;
		return;
	}

	if (start >= v2.size())
		return;

	v3.push_back(make_pair(v2[start].first,v2[start].second));
	cnt++;
	dfs(start + 1);
	v3.pop_back();
	cnt--;
	dfs(start + 1);
}

void main()
{
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 1)
				v1.push_back(make_pair(i, j));
			if (arr[i][j] == 2)
				v2.push_back(make_pair(i, j));
		}
	}
	dfs(0);
	printf("%d", min2);
}*/ //86번

/*int arr[22][22];
int flag[22][22];
int sum;

void main()
{
	queue<pair<int, int>> q;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			scanf("%d", &arr[i][j]);
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] == 1 && flag[i][j] == 0)
			{
				flag[i][j] = 1;
				q.push(make_pair(i, j));
				while (!q.empty())
				{
					int a = q.front().first;
					int b = q.front().second;
					q.pop();
			
					if (arr[a - 1][b] == 1 && flag[a - 1][b] == 0)
					{
						q.push(make_pair(a - 1, b));
						flag[a - 1][b] = 1;
					}
					if (arr[a - 1][b - 1] == 1 && flag[a - 1][b - 1] == 0)
					{
						q.push(make_pair(a - 1, b - 1));
						flag[a - 1][b - 1] = 1;
					}
					if (arr[a - 1][b + 1] == 1 && flag[a - 1][b + 1] == 0)
					{
						q.push(make_pair(a - 1, b + 1));
						flag[a - 1][b + 1] = 1;
					}
					if (arr[a][b - 1] == 1 && flag[a][b - 1] == 0)
					{
						q.push(make_pair(a, b - 1));
						flag[a][b - 1] = 1;
					}
					if (arr[a][b + 1] == 1 && flag[a][b + 1] == 0)
					{
						q.push(make_pair(a, b + 1));
						flag[a][b + 1] = 1;
					}
					if (arr[a + 1][b - 1] == 1 && flag[a + 1][b - 1] == 0)
					{
						q.push(make_pair(a + 1, b - 1));
						flag[a + 1][b - 1] = 1;
					}
					if (arr[a + 1][b] == 1 && flag[a + 1][b] == 0)
					{
						q.push(make_pair(a + 1, b));
						flag[a + 1][b] = 1;
					}
					if (arr[a + 1][b + 1] == 1 && flag[a + 1][b + 1] == 0)
					{
						q.push(make_pair(a + 1, b + 1));
						flag[a + 1][b + 1] = 1;
					}
				}
				sum++;
			}
		}
	}

	printf("%d", sum);
}*/  //87번

/*int arr[8][8];
int cal[8][8];
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
int min1 = 987654321;

void main()
{
	queue<pair<int, int>> q;

	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	q.push(make_pair(1, 1));
	arr[1][1] = 1;

	while (!q.empty())
	{
		int x, y;
		for (int i = 0; i < 4; i++)
		{
			x = q.front().first + dx[i];
			y = q.front().second + dy[i];
			if (x >= 1 && y >= 1 && x <= 7 && y <= 7)
			{
				if (x == 7 && y == 7)
				{
					int sum = cal[q.front().first][q.front().second] + 1;
					if (sum < min1)
						min1 = sum;
					continue;
				}
				if (arr[x][y] == 0)
				{
					arr[x][y] = 1;
					cal[x][y] = cal[q.front().first][q.front().second] + 1;
					q.push(make_pair(x, y));
				}
			}
		}
		q.pop();
	}

	printf("%d\n", min1);
}*/ //88번

struct tom {
	int first;
	int second;
	tom(int f1,int s1)
	{
		first = f1;
		second = s1;
	}
};

int arr[1001][1001];
int dx[4] = {-1,0,0,1};
int dy[4] = { 0,-1,1,0 };
int cal[1001][1001];
int max1 = 0;
int k1, k2;

void main()
{
	queue<tom> q;
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i= 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 1)
				q.push(tom(i,j));
		}
	}

	while (!q.empty())
	{
		int x,y;

		for (int i = 0; i < 4; i++)
		{
			x = q.front().first + dx[i];
			y = q.front().second + dy[i];
			if (arr[x][y] == 0 && x >= 1 && y >= 1 && x <= n && y <= m)
			{
				arr[x][y] = 1;
				cal[x][y] = cal[q.front().first][q.front().second] + 1;
				if (cal[x][y] > max1)
					max1 = cal[x][y];
				k2++;
				q.push(tom(x,y));
			}
		}
		q.pop();
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (arr[i][j] == 0)
			{
				printf("-1");
				return;
			}
			if (max1 < cal[i][j])
				max1 = cal[i][j];
		}
	}
	printf("%d", max1);
	
} //89번

/*void main()
{
}
*/ //90번