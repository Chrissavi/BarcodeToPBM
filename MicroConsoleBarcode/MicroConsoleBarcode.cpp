#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string code;
void CalculateBarcode();

int main()
{
    // Please use for now only "1"s and "0"s. -- 1 is black | 0 is white
    cin >> code;
    CalculateBarcode();
    return 0;
}
void CalculateBarcode()
{
    int width = code.size();
    int height = 30;
        
    ofstream barcode(code + ".pbm");
    barcode << "P1" << endl;
    barcode << width << " " << height << endl;
    
    // multiplies code to get human-readable height
    for (int i = 0; i < width + 1; i++)
    {
        barcode << code << endl;
    }
        
}


