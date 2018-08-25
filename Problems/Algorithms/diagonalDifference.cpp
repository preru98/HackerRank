#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.

int diagonalDifference(vector<vector<int>> arr)
{
    int size=arr.size();                        //No. of rows
    int primaryDiagonalSum=0,secondaryDiagonalSum=0;
    int sizeinternal=arr[0].size();             //No. of columns
    int Difference;


 /*
    for(int i=0;i<size;i++)                     //debugging code
  {                                             //Printing the elements of array
      for(int j=0;j<sizeinternal;j++)
        cout<<arr[i][j]<<" ";

      cout<<endl;
  }
  */

  for(int i=0;i<size;i++)
  {
      //cout<<arr[i][i]<<" ";
      primaryDiagonalSum+=arr[i][i];
      //cout<<arr[i][size-1-i];
      secondaryDiagonalSum+=arr[i][size-1-i];
  }
    Difference=abs(primaryDiagonalSum-secondaryDiagonalSum);
    cout<<Difference;


return Difference;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
