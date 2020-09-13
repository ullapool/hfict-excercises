#include <iostream>
#include "stringutil.h"
#include <string>
#include <algorithm>

using namespace std;

string StringUtil::lcs (string input1, string input2)
{
unsigned int maxlength = 0;  //Speicherung des längsten identischen Substrings als Zahl
string result = "";          //Speicherung des längstens identischen Substrings als String

for (unsigned int i = 0; i < input1.length(); i++)
{
    for (unsigned int j = maxlength+1; j <= input1.length() - i; j++)
    {
        //cout << input1.substr(i,j) << endl;
        string temp = input1.substr(i, j);  //Temp String aus Substring erstellen (i = Position, j = Anzahl Zeichen)
     //cout << temp << endl;
        if (input2.find(temp) != string::npos)//npos: Until the end of the string -
                                              //Enweder er findet etwas, oder er gibt NPOS zurück.
        {
           //if (temp.length() > maxlength)
           //{
                maxlength = temp.length();  //Ich merke mir die länge und ich brauche keine if Abfrage, weil alle Substrings länger als Maxlength sind. (Siehe for j)
                //cout << temp << endl;     //Aufbau vom Result
                result = temp;              //Ich merke mit den längeren Substring
            //}
        } else {
            break; //Wenn der Substring nicht gefunden wird, dann brauchen wir den grösseren Substring nicht auch noch testen. z.B.: Wird A nicht gefunden dann brauchen wir auch nicht Ab suchen.
        }
    }
    if (maxlength >= input1.length()-i){
        break; //Wenn die maximale Länge grösser ist der restliche Teil von input1 ab position i, können wir keinen grösseren Substring mehr finden.
    }
}
return result;
}
