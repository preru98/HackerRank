#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
    string convertedString;
    int size=s.length();
    cout<<size;
    cout<<s;
    convertedString.resize(size-2);
    string hh,mm,ss,ds;
    hh.resize(2);
    mm.resize(2);
    ss.resize(2);
    ds.resize(2);
    hh[0]=s[0];
    hh[1]=s[1];
    mm[0]=s[3];
    mm[1]=s[4];
    ss[0]=s[6];
    ss[1]=s[7];
    ds[0]=s[8];
    ds[1]=s[9];


    for(int i=0;i<s.length();i++)                   //string traversal
    {
        //cout<<i;
        //cout<<s[i];
        cout<<s.at(i);
    }


     if(!(ds.compare("AM")))
     {
         if(!(hh.compare("12")))
         {
             convertedString[0]='0';
             convertedString[1]='0';
         }
         else
         {
             convertedString[0]=s[0];
             convertedString[1]=s[1];
         }
     }


     else if(!(ds.compare("PM")))
     {
         if(!(hh.compare("12")))
         {
             convertedString[0]='1';
             convertedString[1]='2';
         }
         else
         {   hh=to_string(stoi(hh)+12);
             convertedString[0]=hh[0];
             convertedString[1]=hh[1];
         }
     }


       for(int i=2;i<s.length()-2;i++)
           convertedString[i]=s[i];

    return convertedString;



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
