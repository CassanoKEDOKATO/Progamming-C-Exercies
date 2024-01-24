#include <bits/stdc++.h>
using namespace std;
class FileHandle
{
private:
    ifstream fileInput;
    ofstream fileOut;

public:
     void ReadFile()
    {
        ifstream fileInput("input2.txt");
        if (fileInput.fail())
        {
            cout << "Failed to open this file." << endl;
            return;
        }
    
        while (!fileInput.eof())
        {
           char temp[255];
           fileInput.getline(temp,255);
           string line = temp;
           cout<<temp<<endl;
        }
        
        fileInput.close();
    }

};

int main(){
    FileHandle fileHandle;
    fileHandle.ReadFile();
}