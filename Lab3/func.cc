/*
        Lab1 Team Programming
        Author: Dov Kruger
        For a description of each function, see:
        https://docs.google.com/document/d/1eTLecRiJJdQkS6OWDgNIhECLfIvyYP_-EdfwistiT8U/edit?usp=sharing
*/
#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

// scalar functions
// 1
int sum(int a, int b) {
  return a + b; 
}
// 1 Tahrim Imon
int sum(int a, int b){
  int sum = a+b;
  return sum;
}
// 2
int prod(int a, int b) {
  int total = 1;
  for (int i = a; i<= b; i++)
    total *= i;
  return total;

//2 - Nicholas Lim
int prod (int a, int b){
  for (int i =a; i<b; i++) {
    temp *= i +1;
  }
  return temp;


}
// 3
int sumsq(int a, int b) {
  int sum
  for (a; a<=b; a++)
  sum += (a*a);
  }
  return sum;
  return (a*a)+(b*b);
}

// 4 - Kamen Kresnitchki
bool isPrime(int a) {
	
	bool primeStatus = true;
	
	if( a == 0 || a == 1) {
		primeStatus = false;
		return primeStatus;
	}
	else
	{
		for(i = 2; i <= a/2; i++)
		{
			if( a % i == 0)
			{
				primeStatus = false;
				return primeStatus;
				break;
			}
		}
	}
	
	return primeStatus;
}

// 4
bool isPrime(int a) {}
//Zachary Zatuchni
bool isPrimeAlt(int a) {
  if (a == 1 || a == 0) return false;

  for (int i = 2; i < (a/2)+1; i++) {
    if (a % i == 0) return false;
  }
  return true;
}
// 5
int count(int a, int b) {}

// 5 - Calvin Zheng
// returns the number of primes found between a and b inclusive
int countPrimes(int a, int b) {
  int total = 0;
  for (int i = a; i <= b; i++) {
    if (isPrime(i)) {
      total++;
    }
  }
  return total;
}
// 6 - Andrew Capro
// returns the greatest common denominator between two integers
int gcd(int a, int b) {
  if (b == 0) 
  return a;
  return gcd(b, a % b);
}
// 7
double hypot(int a, int b) 
{
    double hypot = 0;
    double num = pow(a,2) + pow(b,2);
    hypot = sqrt(num);
    return hypot;

}

// 8 - Chris Youngclaus
int diffsq(int a, int b) {
  int result = (a*a)-(b*b);
  return result;
}
  
//Cameron Murphy
  return pow(a,2)-pow(b,2);

// 9
int mean2(int a, int b) {}
// 10 Nixon Puertollano
int mean3(int a, int b) {
  int average = 0;
	average = a + b;  
	average /= 2;
	cout << average << endl; 
	return average;
  }

// 11
int min(int a, int b) {
  //Walter Wargacki
  if(a != b){
    if(a > b)
      return a;
    else
      return b;
  }
  return a;
}
// 12
//Rayhan Howlader 
int pythagTriple(int a, int b) {
  double result = sqrt((a * a) * (b * b));
  if (result == static_cast<int>(result))
    return true;
  else
    return false;
}
// 13
// Kenneth Kim
bool isEven(int a) {
    if a % 2 == 0;
        return true;
    else
        return false;
}

// 14-Jonathan Kubas
double perimeter3(int x1, int y1, int x2, int y2, int x3, int y3) {
  double dis_xy=0;
  double dis_yz=0;
  double dis_zx=0;
  double per=0;
  dis_xy=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  dis_yz=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
  dis_zx=sqer((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  per=dis_xy+dis_yz+dis_zx;
  return per;
}

// array functions
// 1
double mean(int x[], int length) {
  double add;
  for (int i = 0; i < length; i++) {
    add = add + x[i];
  }
  return add / length;

  /*//Walter Wargacki
  double avg = 0;
  for(int i = 0; i < length; i++)
    avg += x[i];
  avg /= length;
  return avg;*/
}

// 2
int max(int x[], int length) {
  int value = 1;
  for (int i = 1; i < length; i++)
    if (x[i] > value)
      value = x[i];
  return value;

}

// 3
int min(int x[], int length) {
  int result = x[0];
  for (int i = 1; i < length; i++)
  result = min(result, x[i]);
  return result;
  }

// 4-Jonathan Kubas
int prod(int x[], int length) {
  int total=1;
  for(int i=0; i<length; i++){
    total=total*x[i];
  }
  return total;
}

//4 - Kamen Kresnitchki
int prod(int x[], int length) {
	
	double product = 1;
	
	for(int i = 0; i < length; i++)
	{
		product = product * x[i];
	}
	return product;
}

// 5 - Tahrim Imon
int sum(int x[], int length) {
  int total = 0;
  for(int i = 0; i < length; i++){
    total+=x[i];
  }
  return total;
}

// 6 - Andrew Capro
// finds the mean of the array and subtracts it from each term within the array and prints the array out
int demean(double x[], int length) { 
	double sum = 0;
  for (int i = 0; i < length; i++){
    sum = sum + x[i];
  }
  double meanmean = 0;
  meanmean = sum / length;
  for (int i = 0; i < length; i++){
    x[i] = x[i] - meanmean;
  }
  for (int i = 0; i < length; i++){
    cout << x[i] << ", ";
  } 
return 0; }

//6 - Nicholas Lim
  void demean (double arr[],double len){
    double temp = 0.0;
    for (int i = 0; i < len; i++){
        temp += (double)arr[i];
    }
    temp/=len;
    for (int i = 0; i < len; i++){
        arr[i] -= temp;
    }    
}

// 7
int addToEach(double x[], int length, int delta) {
  for (int i=0, i<length, i++){
    x[i]+=delta;
  }


// 8
int countEvens(int x[], int length) {}
//Zachary Zatuchni
int countEvensAlt(int x[], int length) {
  int count = 0;
  for (int i = 0; i < length; i++) {
    if (x[i] % 2 == 0) count++;
  }
  return count; 
}

// 8 - Chris Youngclaus
int countEvens(int x[], int length) {
  int count = 0;
  for (int i=0; i<sizeof(x); i++) {
    if (x[i]%2 == 0) {
      count++;
  }
  return count;
}

// 9
int reverse(int x[], int length) { 
  // Cameron Murphy
  int reversed[length];
  int j = 0;
  for (int i = length-1 ; i >= 0; i--){
    reversed[j] = x[i];
    j++;
  }
  for (int i = 0; i < length; i++ ){
      x[i] = reversed[i];
  }
  
  return 0; 
}


// 10 Nixon Puertollano
int round(double x[], int length) {
	for (int i=0; i < length; i++){
		x[i] = round(x[i]);
		}
	return x;
	}

void print(int a[], int length) {
  for (int i = 0; i < length; i++) {
    cout << a[i] << " ";
    if (i == (length - 1)) {
      cout << endl;
    }
  }
/*	
// Rayhan Howlader 
int max(int x[], int n) {
  int maximum = 0;
  for (int i = 0; i < n; i++) {
    if (x[i] >= maximum) {
      maximum = x[i];
    }
  }
  return maximum;
};
*/


	
}

int main() {
  cout << sum(1, 3) << ' ' << sum(1, 100)
       << '\n';  // should work no problem, right?
  cout << sum(1, 1000000)
       << '\n';  // what should this be? Don't assume it's right, check!

  cout << prod(2, 5) << '\n';  // 2*3*4*5 = 120
  cout << prod(3, 10) << '\n';
  cout << prod(3, 20) << '\n';  // just note whether you think these are right
  cout << prod(3, 30) << '\n';  // if it overflows, you don't have to fix it
  cout << prod(3, 100) << '\n';
  cout << sumsq(1, 5) << '\n';
  cout << "countPrimes(1,100): " << countPrimes(1, 100) << '\n';
  cout << "countPrimes(1,1000000): " << countPrimes(1, 1000000) << '\n';
  cout << "isPrime(1001)=" << isPrime(1001) << '\n';
  cout << "gcd(12, 18)=" << gcd(12, 18) << '\n';
  cout << "gcd(1025, 3025)=" << gcd(1025, 3025) << '\n';
  cout << "hypot(3,4)=" << hypot(3, 4) << '\n';
  cout << "hypot(4,5)=" << hypot(4, 5) << '\n';
  cout << "diffsq(3,4)=" << diffsq(3, 4) << '\n';
  cout << "mean(1,4)=" << mean2(1, 4) << '\n';
  cout << "mean(1,4,5)=" << mean3(1, 4, 5) << '\n';
  cout << "max(1,5)=" << max(1, 5) << '\n';
  cout << "min(2,5)=" << min(2, 5) << '\n';
  cout << "isEven(5)=" << isEven(5) << '\n';
  cout << "perimeter of tri=" << perimeter3(0, 0, 3, 0, 3, 3) << '\n';
  cout << pythagTriple(3, 4) << endl;

  // array problems
  int arr[] = {1, 4, 3, 2};
  cout << "arr avg=" << mean(arr, 4) << '\n';            // should be 2.5
  cout << "arr max=" << max(arr, 4) << '\n';             // should be 4
  cout << "arr max=" << min(arr, 4) << '\n';             // should be 1
  cout << "arr prod=" << prod(arr, 4) << '\n';           // should be 24
  cout << "arr sum=" << sum(arr, 4) << '\n';             // should be 10
  cout << "count evens=" << countEvens(arr, 4) << '\n';  // should be 10

  int arr2[] = {5, 6, 7, 8, 9, 10, 2, 1};
  cout << "arr avg=" << mean(arr2, 8) << '\n';
  cout << "arr max=" << max(arr2, 8) << '\n';
  cout << "arr max=" << min(arr2, 8) << '\n';
  cout << "arr prod=" << prod(arr2, 8) << '\n';
  cout << "arr sum=" << sum(arr2, 8) << '\n';

  double arr3[6] = {1, 2, 3, 4, 5, 6};
  demean(arr3, sizeof(arr3) / sizeof(double));
  print(arr3, 6);

  double arr7[] = {2.5, 2.8, 3.1, 4.2, 9.6, 7.1, -7.3, -7.6};
  round(arr7, sizeof(arr7) / sizeof(double));
  print(arr7, sizeof(arr7) / sizeof(double));

  cout << "countevens=" << countEvens(arr6, 7) << '\n';
  addToEach(arr6, 7, 3);
  print(arr6, sizeof(arr6) / sizeof(double));

  int r1[] = {1, 2, 3, 4, 5, 6, 7};
  reverse(r1, 7);
  print(r1, 7);

  int r2[] = {1, 2, 3, 4, 5, 6, 7, 8};
  reverse(r2, 8);
  print(r2, 8);
}
