#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
class FileHandle
{
private:
    ifstream fileInput;
    ofstream fileOut;

public:
    int UCLN(int a, int b)
    {
        if (b == 0)
            return a;
        return UCLN(b, a % b);
    }
    int BCNN(int a, int b)
    {
        int ucln = UCLN(a, b);
        return a * b / ucln;
    }
    int Find_UCLN(vector<int> vector, int n)
    {
        int result = vector[0];
        for (int i = 1; i < n; i++)
        {
            result = UCLN(result, vector[i]);
        }
        return result;
    }
    int Find_BCNN(vector<int> vector, int n)
    {
        int result = vector[0];
        for (int i = 1; i < n; i++)
        {
            result = BCNN(result, vector[i]);
        }
        return result;
    }
    void ReadFile(vector<int> &vector)
    {
        ifstream fileInput("input4.txt");
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
    int WriteFile(int ucln, int bcnn)
    {
        ofstream fileUCLN("UCLN.txt");
        fileUCLN << ucln << endl;
        fileUCLN.close();

        ofstream fileBCNN("BCNN.txt");
        fileBCNN << bcnn << endl;
        fileBCNN.close();


    }
};

int main()
{
    FileHandle fileHandle;
    vector<int> vector;
    fileHandle.ReadFile(vector);
    int valueUCLN = fileHandle.Find_UCLN(vector, vector.size());
    int valueBCNN = fileHandle.Find_BCNN(vector, vector.size());
    cout << valueBCNN;
    fileHandle.WriteFile(valueUCLN, valueBCNN);
}