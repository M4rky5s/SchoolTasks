#include <fstream>
#include <iostream>
#include <stdlib.h>
using namespace std;
const char CDfv[] = "Duomenys12_u2.txt";
const char CRfv[] = "Rezultatai12_u2.txt";
//-----------------------------------------------------------------------
void Skaityti(const char fv[], int A[], int & n);
int Pakeitimas(char s);
void Spausdinti(const char fv[], int A[], int n);
//-----------------------------------------------------------------------
int main()
{
  int A[1000]; int n;
  Skaityti(CDfv, A, n);
  Spausdinti (CRfv, A, n);
return 0;
}
//-----------------------------------------------------------------------
int Pakeitimas(char s){
  int x;
  if (s=='0') x = 0;
  else if (s=='1') x = 1;
  else if (s=='2') x = 2;
  else if (s=='3') x = 3;
  else if (s=='4') x = 4;
  else if (s=='5') x = 5;
  else if (s=='6') x = 6;
  else if (s=='7') x = 7;
  else if (s=='8') x = 8;
  else if (s=='9') x = 9;
  return x;
}
void Skaityti(const char fv[], int A[], int & n)
{
  n = 100;
  for (int i = 0; i <= n; i++) A[i] = 0;
  int k; int X[1000]; int k1; int x1;
  char s;
  ifstream fd(CDfv);
  fd >> k;
  for (int i = 1; i <= k; i++){
    fd >> k1; x1 = 100 - k1 + 1;
    for (int j = 0; j <= n; j++) X[j] = 0;
    for (int j = 1; j <= k1; j++){
     fd >> s;
    X[x1] = Pakeitimas(s);
    x1 = x1 + 1;
    }
    int x2 = 0; int x3;
    for (int j = 100; j > 0; j--){  x3 = A[j] + X[j] + x2;
     if (x3 > 9) {
     A[j] = x3 % 10;
     x2 = x3 / 10;
     }
     else {A[j] = x3;
     x2 = 0;}
    }
  }

  fd.close();
}
//-----------------------------------------------------------------------
void Spausdinti(const char fv[], int A[], int n) {
  ofstream fr(CRfv);
  int i = 0;
  while (A[i] == 0) i++;
  for (int j = i; j <=100; j++)
    fr << A[j];
  fr.close();
}
