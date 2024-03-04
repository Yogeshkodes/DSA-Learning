#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  
  /*
  Number Pattern to print
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    6 6 6 6 6 6

  for (int row = 1; row <=num; row++) {
    for (int col = 1; col <=row; col++) {
      cout << row;
    }
    cout << endl;
  }
*
  /*
  Number Pattern to print
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5

    for (int row = 1; row <= num; row++) {
      for (int col = 1; col <= row; col++) {
        cout << col;
      }
      cout << endl;
    }
  */
  /*
  Pyramid Rectangle Pattern

    
    for (int row = 0; row < num; row++) {
      for (int col = 0; col < row; col++) {
        cout << "* ";
      }

      cout << endl;
    }
  */

  /*
  Rectangel box print
   * * *
   * * *
   * * *


  for (int row = 0; row < num; row++) {
    for (int col = 0; col < num; col++) {
      cout << "* ";
    }

    cout << endl;
  }
*/

  return 0;
}