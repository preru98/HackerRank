#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the gradingStudents function below.
 */
vector<int> gradingStudents(vector<int> grades)
{

    int size=grades.size();
    cout<<size;
    vector<int> roundedGrades(size);
    int quotient,decisionFactor;
    for(int i=0;i<size;i++)
    {
        if(grades[i]<38)
           roundedGrades[i]=grades[i];

        else if(grades[i]>=38)
        {
            quotient=grades[i]/5;
            decisionFactor=(quotient+1)*5;
            if((decisionFactor-grades[i])<3)
               roundedGrades[i]=decisionFactor;
            else
                roundedGrades[i]=grades[i];
        }

    }
    return roundedGrades;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++) {
        int grades_item;
        cin >> grades_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
