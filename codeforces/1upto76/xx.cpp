#include<bits/stdc++.h>
using namespace std;
typedef  long long  ll;
ll mod = pow(10, 9) + 7;
typedef unsigned long long  ull;
int gcdExtended(int a, int b, int *x, int *y);

// Function to find modulo inverse of b. It returns
// -1 when inverse doesn't
int modInverse(int b, int m)
{
  int x, y; // used in extended GCD algorithm
  int g = gcdExtended(b, m, &x, &y);

  // Return -1 if b and m are not co-prime
  if (g != 1)
    return -1;

  // m is added to handle negative x
  return (x % m + m) % m;
}
int gcdExtended(int a, int b, int *x, int *y)
{
  // Base Case
  if (a == 0)
  {
    *x = 0, *y = 1;
    return b;
  }

  int x1, y1; // To store results of recursive call
  int gcd = gcdExtended(b % a, a, &x1, &y1);

  // Update x and y using results of recursive
  // call
  *x = y1 - (b / a) * x1;
  *y = x1;

  return gcd;
}
string decimalToBinary(int n)
{
  //finding the binary form of the number and
  //coneverting it to string.
  string s = bitset<64> (n).to_string();

  //Finding the first occurance of "1"
  //to strip off the leading zeroes.
  const auto loc1 = s.find('1');

  if (loc1 != string::npos)
    return s.substr(loc1);

  return "0";
}
int binaryToDecimal(string n)
{
  string num = n;
  int dec_value = 0;

  // Initializing base value to 1, i.e 2^0
  int base = 1;

  int len = num.length();
  for (int i = len - 1; i >= 0; i--) {
    if (num[i] == '1')
      dec_value += base;
    base = base * 2;
  }

  return dec_value;
}
/*ll factorial(ll n);
ll factorial(ll n)
{ ll ans = 1;
  while (n != 1)
  {
    ans = ((ans % mod ) * (n % mod)) % mod;

    n--;

  }
  return ans;

}*/
ull sumbincoef( int N, int k ) {
  ull   bincoef = 1, sum = 1;
  int i;
  for ( i = 1 ; i < k ; ++i ) {
    bincoef = (bincoef * (N - i + 1) / i);
    sum += bincoef;
  }
  return sum;
}

bool is_prime(ll n) {
  // Assumes that n is a positive natural number
  // We know 1 is not a prime number
  if (n == 1) {
    return false;
  }

  ll i = 2;
  // This will loop from 2 to int(sqrt(x))
  while (i * i <= n) {
    // Check if i divides x without leaving a remainder
    if (n % i == 0) {
      // This means that n has a factor in between 2 and sqrt(n)
      // So it is not a prime number
      return false;
    }
    i += 1;
  }
  // If we did not find any factor in the above loop,
  // then n is a prime number
  return true;
}
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
int nCrModp(int n, int r, int p)
{
  // Optimization for the cases when r is large
  if (r > n - r)
    r = n - r;

  // The aay C is going to store last row of
  // pascal triangle at the end. And last entry
  // of last row is nCr
  int C[r + 1];
  memset(C, 0, sizeof(C));

  C[0] = 1; // Top row of Pascal Triangle

  // One by constructs remaining rows of Pascal
  // Triangle from top to bottom
  for (int i = 1; i <= n; i++) {

    // Fill entries of current row using previous
    // row values
    for (int j = min(i, r); j > 0; j--)

      // nCj = (n-1)Cj + (n-1)C(j-1);
      C[j] = (C[j] + C[j - 1]) % p;
  }
  return C[r];
}
typedef unsigned long long  ull;

typedef unsigned int ui;

bool is_palindrome(string s)
{
  int n = s.size();


  for (int i = 0; i < (int)n / 2; i++)
  {
    if (s[i] == s[n - 1 - i])
    {

    }
    else
    {
      return false;
    }
  }
  return true;



}
const int N = 200000 + 10;
ll factorialNumInverse[N + 1];

// array to precompute inverse of 1! to N!
ll naturalNumInverse[N + 1];

// array to store factorial of first N numbers
ll fact[N + 1];

// Function to precompute inverse of numbers
void InverseofNumber(ll p)
{
  naturalNumInverse[0] = naturalNumInverse[1] = 1;
  for (int i = 2; i <= N; i++)
    naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p;
}
// Function to precompute inverse of factorials
void InverseofFactorial(ll p)
{
  factorialNumInverse[0] = factorialNumInverse[1] = 1;

  // precompute inverse of natural numbers
  for (int i = 2; i <= N; i++)
    factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p;
}

// Function to calculate factorial of 1 to N
void factorial(ll p)
{
  fact[0] = 1;

  // precompute factorials
  for (int i = 1; i <= N; i++) {
    fact[i] = (fact[i - 1] * i) % p;
  }
}

// Function to return nCr % p in O(1) time
ll Binomial(ll N, ll R, ll p)
{
  // n C r = n!*inverse(r!)*inverse((n-r)!)
  ll ans = ((fact[N] * factorialNumInverse[R])
            % p * factorialNumInverse[N - R])
           % p;
  return ans;
}


int main()
{ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  mt19937 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());


  int t = 1;
  cin >> t;
  while (t > 0)
  {
    int n;
    cin >> n;
    vector <int> a(n);
    ll mini = 1e16;
    int id;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (mini > a[i])
      {
        mini = a[i];
        id = i;
      }
    }
    cout << n - 1 << endl;
    ll mod1 = 1e9 + 9;
    for (int i = 0; i < n ; i++)
    { if (i != id)
      { if (i % 2 == 0)
          cout << i + 1 << " " << id + 1 << " " << mod << " " << a[id] << endl;
        else
        {
          cout << i + 1 << " " << id + 1 << " " << mod1 << " " << a[id] << endl;
        }
      }

    }



    t--;
  }


}