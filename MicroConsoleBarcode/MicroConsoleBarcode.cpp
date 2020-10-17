#include "MicroConsoleBarcode.h"


int main()
{
    string Usercode = "452698712369";
    //cin >> Usercode;
    cout << Usercode << endl;
    strcpy_s(InternalCode, Usercode.c_str());

    cout << InternalCode << endl;
    cout << InternalCode << endl;

    ExtractCode();
    for (int i = 0; i < 14; i++)
        cout << GeneratedInternalCode[i] << endl;

    

    system("pause");

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

    switch (InternalCode[0])
    {
    case('0'):
        strcpy_s(STYLE, ZERO[3].c_str());
        GeneratedInternalCode[0] = ZERO[0];
        break;
    case('1'):
        strcpy_s(STYLE, ONE[3].c_str());
        GeneratedInternalCode[0] = ONE[0];
        break;
    case('2'):
        strcpy_s(STYLE, TWO[3].c_str());
        GeneratedInternalCode[0] = TWO[0];
        break;
    case('3'):
        strcpy_s(STYLE, THREE[3].c_str());
        GeneratedInternalCode[0] = THREE[0];
        break;
    case('4'):
        strcpy_s(STYLE, FOUR[3].c_str());
        GeneratedInternalCode[0] = FOUR[0];
        break;
    case('5'):
        strcpy_s(STYLE, FIVE[3].c_str());
        GeneratedInternalCode[0] = FIVE[0];
        break;
    case('6'):
        strcpy_s(STYLE, SIX[3].c_str());
        GeneratedInternalCode[0] = SIX[0];
        break;
    case('7'):
        strcpy_s(STYLE, SEVEN[3].c_str());
        GeneratedInternalCode[0] = SEVEN[0];
        break;
    case('8'):
        strcpy_s(STYLE, EIGHT[3].c_str());
        GeneratedInternalCode[0] = EIGHT[0];
        break;
    case('9'):
        strcpy_s(STYLE, NINE[3].c_str());
        GeneratedInternalCode[0] = NINE[0];
        break;
    }

    for (int i = 1; i < 7; i++)
    {
        char CurrentStyle = STYLE[i];

        switch (InternalCode[i])
        {
        case('0'):
            if (CurrentStyle == '0')
            {
                GeneratedInternalCode[i] = ZERO[0];
            }
            else
            {
                GeneratedInternalCode[i] = ZERO[1];
            }
            break;
        case('1'):
            if (CurrentStyle == '0')
            {
                GeneratedInternalCode[i] = ONE[0];
            }
            else
            {
                GeneratedInternalCode[i] = ONE[1];
            }
            break;
        case('2'):
            if (CurrentStyle == '0')
            {
                GeneratedInternalCode[i] = TWO[0];
            }
            else
            {
                GeneratedInternalCode[i] = TWO[1];
            }
            break;
        case('3'):
            if (CurrentStyle == '0')
            {
                GeneratedInternalCode[i] = THREE[0];
            }
            else
            {
                GeneratedInternalCode[i] = THREE[1];
            }
            break;
        case('4'):
            if (CurrentStyle == '0')
            {
                GeneratedInternalCode[i] = FOUR[0];
            }
            else
            {
                GeneratedInternalCode[i] = FOUR[1];
            }
            break;
        case('5'):
            if (CurrentStyle == '0')
            {
                GeneratedInternalCode[i] = FIVE[0];
            }
            else
            {
                GeneratedInternalCode[i] = FIVE[1];
            }
            break;
        case('6'):
            if (CurrentStyle == '0')
            {
                GeneratedInternalCode[i] = SIX[0];
            }
            else
            {
                GeneratedInternalCode[i] = SIX[1];
            }
            break;
        case('7'):
            if (CurrentStyle == '0')
            {
                GeneratedInternalCode[i] = SEVEN[0];
            }
            else
            {
                GeneratedInternalCode[i] = SEVEN[1];
            }
            break;
        case('8'):
            if (CurrentStyle == '0')
            {
                GeneratedInternalCode[i] = EIGHT[0];
            }
            else
            {
                GeneratedInternalCode[i] = EIGHT[1];
            }
            break;
        case('9'):
            if (CurrentStyle == '0')
            {
                GeneratedInternalCode[i] = NINE[0];
            }
            else
            {
                GeneratedInternalCode[i] = NINE[1];
            }
            break;
        }
    }
    for (int i = 6; i < 14; i++)
    {
        switch (InternalCode[i])
        {
        case('0'):
            GeneratedInternalCode[i] = ZERO[2];
            break;
        case('1'):
            GeneratedInternalCode[i] = ONE[2];
            break;
        case('2'):
            GeneratedInternalCode[i] = TWO[2];
            break;
        case('3'):
            GeneratedInternalCode[i] = THREE[2];
            break;
        case('4'):
            GeneratedInternalCode[i] = FOUR[2];
            break;
        case('5'):
            GeneratedInternalCode[i] = FIVE[2];
            break;
        case('6'):
            GeneratedInternalCode[i] = SIX[2];
            break;
        case('7'):
            GeneratedInternalCode[i] = SEVEN[2];
            break;
        case('8'):
            GeneratedInternalCode[i] = EIGHT[2];
            break;
        case('9'):
            GeneratedInternalCode[i] = NINE[2];
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

