#include<iostream>
#include<vector>
using namespace std;

string plusMult(vector <int> A)
{
  unsigned int Reven = 0, Rodd =0;
  unsigned int tempEven =1;
  unsigned int tempOdd = 0;
  for(int i=0; i < A.size(); i++)
  {
    if(i %2 == 0){
    if(i != tempEven)
    {
      if( i+2 < A.size())
      {
        Reven += (A[i] * A[i+2]);
        tempEven = i+2;
      }
      else
      {
        Reven += A[i];
      }
    }
    }
  if(i %2 != 0){
    if(i != tempOdd)
    {
      if( i+2 < A.size())
      {
        Rodd += (A[i] * A[i+2]);
        tempOdd = i+2;
      }
      else
      {
        Rodd += A[i];
      }
    }
  }
  }
  cout << "\n" <<Reven << "\n" << Rodd << "\n";
  Reven = Reven % 2; 
  Rodd = Rodd % 2; 
  string result = " ";
  if(Rodd > Reven)
  {
    result = "ODD";
  }
  if(Reven > Rodd)
  {
    result = "EVEN";
  }
  if(Reven == Rodd)
  {
    result = "NEUTRAL";
  }
  return result;
}


int main() {

  vector <int> list;
  list.push_back(1);
  list.push_back(3);
  list.push_back(5);
  list.push_back(7);
  list.push_back(13);
  list.push_back(12);
  list.push_back(25);
  list.push_back(14);
  list.push_back(33);

  for(size_t num: list){
    cout << num << " ";
  }

  cout << plusMult(list);

  return 0;
}