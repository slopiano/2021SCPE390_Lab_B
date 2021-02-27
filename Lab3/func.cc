#include <iostream>

using namespace std;

int prod (int a, int b)
{
  int result = 1;
  for (int i = a; i <= b; i++)
    {
      result *=i;
    }
  return result;
}

int max(int x[], int n)
{
  int max = 4;
  for (int i = 1; i <= n; i++)
    {
      if (x[i] > max)
	{
	  max = x[i];
	  
	}
      
    }
  return max;

}

int main ()
{

  cout << prod( 2, 5) << endl;
  
  int arr[] = {1, 4, 3, 2};

  cout << "arr max = " << max(arr, 4);

}
