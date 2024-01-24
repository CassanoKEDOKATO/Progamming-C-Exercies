#include <fstream>
#include <iostream>
using namespace std;
const int ARRAY_MAX = 50;
class FileHandle
{
private:
    ifstream fileInput;
    ofstream fileOut;

public:
    int ReadFile(int *arr, int &size)
    {
        ifstream fileInput("input.txt");
        if (fileInput.fail())
        {
            cout << "Failed to open this file." << endl;
            return -1;
        }
        int i = 0;
        while (!fileInput.eof())
        {
            fileInput >> arr[i];
            i++;
        }
        size = i;
        fileInput.close();
    }
    int WriteFile(int max)
    {
        ofstream fileOut("output.txt");
        fileOut << max << endl;
        fileOut.close();
    }
};
int FindMax(const int arr[], int size)
{
    int MAX = arr[0];
    for (int i = 1; i < size; i++)
    {
        MAX = max(MAX, arr[i]);
    }
    return MAX;
}
int Display(int size, int arr[])
{
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
}
int main()
{
    FileHandle fileHandle;
    int arr[ARRAY_MAX];
    int size = 0;
    fileHandle.ReadFile(arr, size);
    Display(size,arr);
    cout << endl;
    int MAX = FindMax(arr, size);
    cout << "MAX : " << MAX;
    fileHandle.WriteFile(MAX);
}