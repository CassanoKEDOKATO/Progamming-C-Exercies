#include <bits/stdc++.h>
using namespace std;
class FileHandle
{
private:
    int id;
    string name;
    int phonenumber;
    string email;
    string adrees;

    ifstream fileInput;
    ofstream fileOut;

public:
    void ReadFile()
    {
        vector<string> values;
        string temp;
        ifstream fileInput("danhba.csv");
        if (fileInput.fail())
        {
            cout << "Failed to open this file." << endl;
            return;
        }

        while (getline(fileInput, temp, ','))
        {
            values.push_back(temp);
        }
        for (const auto &line : values)
        {
            cout << line << endl;
        }

        fileInput.close();
    }
};

int main()
{
    FileHandle fileHandle;
    fileHandle.ReadFile();
}