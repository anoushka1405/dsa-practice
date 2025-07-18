/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& A) {
        int result = 0;
        for (int num : A) {
            result ^= num; 
        }
        return result; 
    }

int main(){
   vector<int> A = {1,1,2,3,3,4,4};
   cout<<singleNumber(A);
   return 0;
}
