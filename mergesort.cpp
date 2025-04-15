#include <iostream>
using namespace std;

 //create main a
 int arr[20], B[20];
 int n;

 void input()
{
      while (true)
      {
          cout << "Masukkan Panjang element array : ";
          cin >> n;
  
          if (n <= 20)
          {
              break;
          }
          else
          {
              cout << "\nMaksimal panjang array adalah 20";
          }
      }
  
      cout << "\n------------------------" << endl;
      cout << "\nInputkan Isi element array" << endl;
      cout << "\n------------------------" << endl;

      for (int i = 0; i < n; i++)
     {
         cout << "Array index ke- " << i << " : ";
         cin >> arr[i];
     }
 }

// create main function mergersort
void mergeSort(int low, int high)
{
   
   if (low >= high)
   {
        return;
   }
   
   int mid = (low + high)/2; //steps 2

   //step 3
   //fungsi rekursi - memanggil diri sendiri
   mergeSort(low, mid);
   mergeSort(mid + 1, high);

   //step 4
   int i = low;
   int j = mid + 1;
   int k = low;

   
