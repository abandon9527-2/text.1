#include"InsertSort.h"

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void InsertSort(int* arr, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int temp = arr[end + 1];
		while (end >= 0)
		{
			if (arr[end] > temp)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = temp;
	}

}

void ShellSort(int* arr, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3+1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int temp = arr[end + gap];
			while (end>=0)
			{
				if (temp > arr[end])//´Ódaµ½xiao
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = temp;
		}
	}
}

void SelectSort(int* arr, int n)
{
	int begin = 0;
	int end = n - 1;

	while (end > begin)
	{
		int mini = begin;
		int maxi = end;
		for (int i = begin; i <= end; i++)
		{
			if (arr[i] < arr[mini])
			{
				mini = i;
			}
			if (arr[i] > arr[maxi])
			{
				maxi = i;
			}
		}
		//if (end == mini&&begin==maxi)
		//{
		//	//swap(&arr[begin], &arr[mini]);
		//	swap(&arr[end], &arr[maxi]);

		//}
		if (end == mini)
		{
			mini = maxi;
		}
		swap(&arr[end], &arr[maxi]);
		swap(&arr[begin], &arr[mini]);
		end--;
		begin++;
	}
	
}

int E_QuickSort(int* arr, int left, int right)
{
	int keyi = left;
	left++;
	while (left <= right)
	{
		while (left<=right&&arr[right] > arr[keyi])
		{
			right--;
		}
		while (left<=right&&arr[left]<arr[keyi])
		{
			left++;
		}
		if (left <=right)
		{
			swap(&arr[left++], &arr[right--]);
		}
	}
	swap(&arr[keyi], &arr[right]);
	return right;
}

int H_QuickSort(int* arr, int left, int right)//hoare°æ±¾
{
	int hole = left;
	int temp=arr[hole];
	while (left < right)
	{
		while (right >left&& arr[right] > arr[hole])
		{
			right--;
		}
		swap(&arr[hole], &arr[right]);
		hole = right;
		while (right>left&&arr[left] < arr[hole])
		{
			left++;
		}
		swap(&arr[hole], &arr[left]);
		hole = right;
	}
	swap(&arr[right], &temp);
	return right;
}

int L_QuickSort(int* arr, int left, int right)
{
	int prev = left, cur = left + 1;
	int keyi = left;
	while (cur <= right)
	{
		while (arr[keyi] > arr[cur] && ++prev != cur)
		{
			swap(&arr[prev], &arr[cur]);
		}
		cur++;
	}
	swap(&arr[left], &arr[prev]);
	return prev;
}
void QuickSort(int* arr, int left, int right)
{
	if (right <= left)
	{
		return;
	}
	int keyi = L_QuickSort(arr, left, right);
	QuickSort(arr, left, keyi - 1);
	QuickSort(arr, keyi + 1, right);
}