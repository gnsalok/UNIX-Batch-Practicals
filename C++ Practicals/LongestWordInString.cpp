#include <iostream>
using namespace std;

void LongestWord(string str){
    string workingWord = "";
    string maxWord = "";

    for (int i = 0; i < str.size(); i++){
        if(str[i] != ' ')
            workingWord += str[i];
        else
            workingWord = "";
        if (workingWord.size() > maxWord.size())
            maxWord = workingWord;
    }
    cout<<"Longest word is : "<<maxWord<<endl;
    cout<<"Size of longest word is: "<<maxWord.size();
}

int main(){
    string str;
    cout << "Enter a string:";
    getline(cin, str);

    LongestWord(str);
    cout <<endl;
    return 0;
}
