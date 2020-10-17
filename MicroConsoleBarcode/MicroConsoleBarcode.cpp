#include "MicroConsoleBarcode.h"


int main()
{
    cin >> Usercode;
    cout << Usercode << endl;
    strcpy_s(InternalCode, Usercode.c_str());

    for (int i = 0; i < 14; i++)
        cout << InternalCode[i];

    cout << InternalCode[0] << endl;
    cout << InternalCode[1] << endl;
    cout << InternalCode[2] << endl;
    cout << InternalCode[3] << endl;
    cout << InternalCode[4] << endl;
    cout << InternalCode[5] << endl;
    cout << InternalCode[6] << endl;
    cout << InternalCode[7] << endl;



    /*
    for (int i = 0; i < 3; i++)
    {
        std::cin >> Array;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << Array << endl;
    }
    */
    //CalculateBarcode();
    return 0;
}

void ExtractCode()
{
    for (int i = 0; i < 14; i++)
    {
        switch (InternalCode[i])
        {
        case(0):
            break;
        case(1):
            break;
        case(2):
            break;
        case(3):
            break;
        case(4):
            break;
        case(5):
            break;
        case(6):
            break;
        case(7):
            break;
        case(8):
            break;
        case(9):
            break;
        }
    }    
    
}
/*
void CalculateBarcode()
{
    int width = 13;
    int height = 30;
    
    for (int i = 0; i < 14; i++)
    {
        switch (Array[i])
        {
        case(Array[0]):
            break;
        }
            

    }


    ofstream barcode("test.pbm");
    barcode << "P1" << endl;
    barcode << width << " " << height << endl;
    
    // multiplies code to get human-readable height
    for (int i = 0; i < width + 1; i++)
    {
        barcode << Array << endl;
    }
        
}
*/

