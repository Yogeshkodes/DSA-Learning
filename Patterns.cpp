#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  /*

    for (int row = 0; row < n; row++) {
      for (int col = 0; col < n - row; col++) {
        if (col == 0 || col == n - row - 1) {
          cout << "*";
        } else {
          if (row == 0 || row == n - 1) {
            cout << "*";
          } else {
            cout << " ";
          }
        }
      }
      cout << endl;
    }
  */
  /*
    for (int row = 0; row < n; row++) {
      for (int col = 0; col < 2 * row + 1; col++) {
        if(col % 2 == 1 ){
          cout << "*";
        }else{
          cout << row + 1;
        }

       }
      cout << endl;
      }
  */





  /*
  int n;
  cin >> n;

  int num = n / 2;

  for (int row = 0; row < num; row++) {

    // stars
    for (int col = 0; col < num - row; col++) {
      cout << "*";
    }

    // SPACES

    for (int col = 0; col < 2 * row + 1; col++) {
      cout << " ";
    }

    // STARS
    for (int col = 0; col < num - row; col++) {
      cout << "*";
    }

    cout << endl;
  }

  for (int row = 0; row < num; row++) {
    // STARS
    for (int col = 0; col < row + 1; col++) {
      cout << "*";
    }

    // SPACES

    for (int col = 0; col < 2 * num - 2 * row - 1; col++) {
      cout << " ";
    }

    // STARS

    for (int col = 0; col < row + 1; col++) {
      cout << "*";
    }
    cout << endl;
  }
*/

  /*
    for (int row = 0; row < num; row++) {
      for (int col = 0; col < num - row - 1; col++) {
        cout << " ";
      }

      for (int col = 0; col < row + 1; col++) {
        if (col == 0 || col == row + 1 - 1) {
          cout << "* ";
        } else {
          cout << "  ";
        }
      }
      cout << endl;
    }

     for (int row = 0; row < num; row++) {
        for (int col = 0; col < row; col++) {
          cout << " ";
        }
        int totalCol = num - row;
        for (int col = 0; col < totalCol; col++) {
          if (col == 0 || col == totalCol - 1) {
            cout << "* ";
          } else {
            cout << "  ";
          }
        }
        cout << endl;
      }
  */
  // for (int row = 0; row < num; row++) {
  //   for (int col = 0; col < row; col++) {
  //     cout << " ";
  //   }
  //   int totalCol = num - row;
  //   for (int col = 0; col < totalCol; col++) {
  //     if (col == 0 || col == totalCol - 1) {
  //       cout << "* ";
  //     } else {
  //       cout << "  ";
  //     }
  //   }
  //   cout << endl;
  // }




  /*
    for (int row = 0; row < num; row++) {
      for (int col = 0; col < row; col++) {
        cout << " ";
      }
      for (int col = 0; col < num - row; col++) {
        cout << "* ";
      }
      cout << endl;
    }
  */
  /*
  for (int row = 0; row < num; row++) {
    for (int col = 0; col < num - row - 1; col++) {
      cout << " ";
    }

    for (int col = 0; col < row + 1; col++) {
      if (col == 0 || col == row + 1 - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
*/
  /*
  int n;
  cin >> n;

  int num = n / 2;

  for (int row = 0; row < num; row++) {
    for (int col = 0; col < num - row - 1; col++) {
      cout << " ";
    }

    for (int col = 0; col < row + 1; col++) {
      cout << "* ";
    }
    cout << endl;
  }

  for (int row = 0; row < num; row++) {
    for (int col = 0; col < row; col++) {
      cout << ' ';
    }

    for (int col = 0; col < num - row; col++) {
      cout << "* ";
    }
    cout << endl;
  }
  */
  /*
  for (int row = 0; row < num; row++) {
    for (int col = 0; col < row; col++) {
      cout << ' ';
    }

    for (int col = 0; col < num - row; col++) {
      cout << "* ";
    }
    cout << endl;
  }
*/
  /*
    FOllowing pattern with star and space
       *
      * *
     * * *





    for (int row = 0; row < num; row++) {
      for (int col = 0; col < num - row - 1; col++) {
        cout << " ";
      }

      for (int col = 0; col < row + 1; col++) {
        cout << "* ";
      }
      cout << endl;
    }
  */

  /*row odd and even quiet complex
    1
    01
    101
    0101
    10101

    int start = 1;
    for (int row = 0; row < num; row++) {

      if (row % 2 == 0)
        start = 1;
      else
        start = 0;

      for (int col = 0; col < row + 1; col++) {
        cout << start;
        start = 1 - start;
      }

      cout << endl;
    }
  */
  /*
  This one was tricky and to print first sided pyramid and then half of inverted
  pyramid
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
    for (int row = 0; row < 2 * num - 1; row++) {

      int star = row;
      if (row > num)
        star = 2 * num - row;
      for (int col = 0; col < star; col++) {

        cout << "*";
      }
      cout << endl;
    }
  */
  /*
    diamond pattern print
      *
     ***
    *****
    *****
     ***
      *

    for (int row = 0; row < num; row++) {
      for (int col = 0; col < num - row - 1; col++) {
        cout << ' ';
      }

      for (int col = 0; col < 2 * row + 1; col++) {
        cout << "*";
      }
      cout << endl;
    }

    for (int row = 0; row < num; row++) {
      for (int col = 0; col < row; col++) {
        cout << ' ';
      }
      for (int col = 0; col < 2 * num - (2 * row + 1); col++) {
        cout << '*';
      }

      cout << endl;
    }
  */
  /*
    inverted pyramid hardest for me
    ***********
     *********
      *******
       *****
        ***
         *

    for (int row = 0; row < num; row++) {
      for (int col = 0; col < row; col++) {
        cout << ' ';
      }
      for (int col = 0; col < 2 * num - (2 * row + 1); col++) {
        cout << '*';
      }

      cout << endl;
    }
  */
  /*
       *
      ***
     *****
    *******
    *********
    ***********
    Puramid and spaces pattern

    for (int row = 0; row < num; row++) {
      for (int col = 0; col < num - row - 1; col++) {
        cout << ' ';
      }

      for (int col = 0; col < 2 * row + 1; col++) {
        cout << "*";
      }
      cout << endl;
    }
  */
  /*

  1 2 3 4 5 6
  1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2
  1


  inverted numbers pattern
  for (int row = 0; row < num; row = row + 1) {
    for (int col = 0; col < num - row; col = col + 1) {
      cout << col + 1;
    }



    cout << endl;
  }

  */

  /*
    inverted pyramid pattern

    * * * * * *
    * * * * *
    * * * *
    * * *
    * *
    *

    for(int row=0;row<num;row=row+1){
      for(int col=0 ; col<num-row;col++){
        cout << "*";
      }
      cout << endl;
    }

  */
  
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
