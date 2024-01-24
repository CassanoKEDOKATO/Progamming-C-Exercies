#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
const int ARRAY_MAX = 50;
class FileHandle
{
private:
    ifstream fileInput;
    ofstream fileOut;

public:
    bool CheckEvenNumber(int num)
    {
        return num % 2 == 0;
    }
    void ReadFile(vector<int> &vector)
    {
        ifstream fileInput("input3.txt");
        if (fileInput.fail())
        {
            cout << "Failed to open this file." << endl;
            return;
        }

        while (!fileInput.eof())
        {
            int element;
            fileInput >> element;
            vector.push_back(element);
        }
        fileInput.close();
    }
    int WriteFile(vector<int> vector1)

    {
        ofstream fileOut("ketqua.txt");
        for (int i = 0; i < vector1.size(); i++)
        {
            if (CheckEvenNumber(vector1[i]))
            {
                fileOut << vector1[i] <<" ";
            }
        }
        fileOut.close();
    }
};

int main()
{
    FileHandle fileHandle;
    vector<int> vector;
    fileHandle.ReadFile(vector);
    fileHandle.WriteFile(vector);
}