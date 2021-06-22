/*CPP PROGRAM TO ACCESS ARRAY USING POINTERS*/

#include <iostream>

using namespace std;

int main(){
   int arr[5], i;
   cout << "Enter elements: ";
   for(i = 0; i < 5; ++i)
    {
      cin >> arr[i];
    }
   cout << "\nYou entered: ";
   for(i = 0; i < 5; ++i)
    {
      cout << *(arr+i) << " ";
    }
   return 0;
}
