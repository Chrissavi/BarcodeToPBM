#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string code;
void CalculateBarcode();

int main()
{
    cin >> code;
    CalculateBarcode();
    return 0;
}
void CalculateBarcode()
{
    int lenght = code.size();
    int width = lenght;
    int height = 30;
        
    ofstream barcode(code + ".pbm");
    barcode << "P1" << endl;
    barcode << width << " " << height << endl;
    
    for (int i = 0; i < 31; i++)
    {
        barcode << code << endl;
    }
        
}


