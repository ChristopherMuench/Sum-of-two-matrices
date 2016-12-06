/*
Program that allows the user to fill 2 static matrices,
calculates the sum of the matrices, assigns the result to a third matrix,
and then prints the matrices to the screen.
Author: Christopher Muench
Date: 09/26/16
Language: C++
Compiler: G++ (MinGW)
*/
#include <iostream>

using namespace std;

int main(void)
{
    //initialize necessary variables
    int userMatrix1[2][2];
    int userMatrix2[2][2];
    int sumMatrix[2][2];
    int row = 0;
    int col = 0;

    //enter nested for loops for user to populate matrices 1 and 2
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col <2; col++)
        {
          //populates matrix 1
          cout <<"Please enter an integer value for matrix 1: "<<endl;
          cin >> userMatrix1[row][col];

          //populates matrix 2
          cout <<"Please enter another integer value for matrix 2: "<<endl;
          cin >> userMatrix2[row][col];
        }
    }


    //enter nested for loops to add and print the matrix containing the sums
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {
          //add userMatrix1 and userMatrix2 together to get sumMatrix values
          sumMatrix[row][col] = userMatrix1[row][col] + userMatrix2[row][col];

          //display value of matrix 1 at the current row and column
          cout<<"value at row "<<row<<" column "<<col<<" of matrix 1 is: "
          <<userMatrix1[row][col]<<endl;

          //display value of matrix 2 at the current row and column
          cout<<"value at row "<<row<<" column "<<col<<" of matrix 2 is: "
          <<userMatrix2[row][col]<<endl;

          //display value of sumMatrix at current row and column
          //<should be value of matrix 1 plus matrix 2 at that position
          cout<<"value at row "<<row<<" column "<<col<<" of sum matrix is: "
          <<sumMatrix[row][col]<<endl;

        }
    }
//Terminate program
return 0;
}

