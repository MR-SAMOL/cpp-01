// #include<iostream>
// using namespace std;
// int main(){
//     int age = 20;
//     float score = 99.9;
//     string name ="Hello ";// can not space and operater!! 
//     char gender = 'M';
//     bool check = true;
//     return 0;
// }
//                  Note!!
//   ==>   int        can not write number ! example 1age
//                  with int can not display old value
//                  with like this int age =20
//                                     age = 30
//                 but the new value is display!!
//                 ==> with cinst int [it show the old value]
//                pow () is the function ស្វ័យគុណ use #include<math.h>
    

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {5, 3, 8, 1, 4};

    // Sort the numbers in ascending order
    sort(numbers.begin(), numbers.end());

    // Print sorted numbers
    for (int n : numbers) {
        cout << n << " ";
    }

    return 0;
}
