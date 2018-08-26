#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>vect{1,2,3,4,5};
    for (int i=0; i < vect.size(); i++)
          cout <<vect[i];
         cout << "\n";
           //for left
//    rotate(vect.begin(),vect.begin()+2,vect.end());
//       cout << "Old vector :";
//    for (int i=0; i < vect.size(); i++)
//        cout <<vect[i];
           cout << "\n";
           //for right
     rotate(vect.begin(),vect.begin()+vect.size()-2,vect.end()); 
      for (int i=0; i < vect.size(); i++)
        cout <<vect[i];     
         return 0;
 }
