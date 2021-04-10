#include "declensionOfNumber.h"


char* NumberDeclension(int number, int size, int cases)
{
    char* num = NULL; 
    int len = 0, temp_size;
    if(size >= 1)
    {
        switch(number % 10)
        {
            case 1:
            {
                /*char temp[10] = (cases == 0)? "Один" : (cases == 1)? "Одного" : (cases == 2)? "Одному":
                 (cases == 3)? "Одного" : (cases == 4)? "Одним" : "Одном"; */ 
                /*= (cases == 0)? 4 : (cases == 1 || cases == 2 || cases == 3)? 6 : 5;*/

                switch(cases)
                {
                    case Im:
                        temp_size = 8;
                        char temp[] = "Один";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                        temp_size = 12;
                        char temp1[] = "Одного";
                        Add(&num, &len, temp1, temp_size);
                    break;
                    case Dat:
                        temp_size = 12;
                        char temp2[] = "Одному";
                        Add(&num, &len, temp2, temp_size);
                    break;
                    case Vin:
                        temp_size = 12;
                        char temp3[] = "Одного";
                        Add(&num, &len, temp3, temp_size);
                    break;
                    case Tvor:
                        temp_size = 10;
                        char temp4[] = "Одним";
                        Add(&num, &len, temp4, temp_size);
                    break;
                    case Pred:
                        temp_size = 10;
                        char temp5[] = "Одном";
                        Add(&num, &len, temp5, temp_size);
                    break;
                }
                break;
            }
            case 2:
                switch(cases)
                {
                    case Vin:
                    case Im:
                        temp_size = 6;
                        char temp[] = "Два";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                    case Pred:
                        temp_size = 8;
                        char temp21[] = "Двух";
                        Add(&num, &len, temp21, temp_size);
                    break;
                    case Dat:
                        temp_size = 8;
                        char temp22[] = "Двум";
                        Add(&num, &len, temp22, temp_size);
                    break;
                    case Tvor:
                        temp_size = 10;
                        char temp24[] = "Двумя";
                        Add(&num, &len, temp24, temp_size);
                    break;
                }
            break;
            case 3:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 6;
                        char temp3[] = "Три";
                        Add(&num, &len, temp3, temp_size);
                    break;
                    case Rod:
                    case Pred:
                        temp_size = 8;
                        char temp31[] = "Трех";
                        Add(&num, &len, temp31, temp_size);
                    break;
                    case Dat:
                        temp_size = 8;
                        char temp32[] = "Трем";
                        Add(&num, &len, temp32, temp_size);
                    break;
                    case Tvor:
                        temp_size = 10;
                        char temp34[] = "Тремя";
                        Add(&num, &len, temp34, temp_size);
                    break;
                }
            break;
            case 4:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 12;
                        char temp46[] = "Четыре";
                        Add(&num, &len, temp46, temp_size);
                    break;
                    case Rod:
                    case Pred:
                        temp_size = 14;
                        char temp41[] = "Четырех";
                        Add(&num, &len, temp41, temp_size);
                    break;
                    case Dat:
                        temp_size = 14;
                        char temp42[] = "Четырем";
                        Add(&num, &len, temp42, temp_size);
                    break;
                    case Tvor:
                        temp_size = 16;
                        char temp44[] = "Четырьмя";
                        Add(&num, &len, temp44, temp_size);
                    break;
                }
            break;
            case 5:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 8;
                        char temp56[] = "Пять";
                        Add(&num, &len, temp56, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 8;
                        char temp51[] = "Пяти";
                        Add(&num, &len, temp51, temp_size);
                    break;
                    case Tvor:
                        temp_size = 10;
                        char temp54[] = "Пятью";
                        Add(&num, &len, temp54, temp_size);
                    break;
                }
            break;
            case 6:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 10;
                        char temp63[] = "Шесть";
                        Add(&num, &len, temp63, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 10;
                        char temp61[] = "Шести";
                        Add(&num, &len, temp61, temp_size);
                    break;
                    case Tvor:
                        temp_size = 12;
                        char temp64[] = "Шестью";
                        Add(&num, &len, temp64, temp_size);
                    break;
                }
            break;
            case 7:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 8;
                        char temp77[] = "Семь";
                        Add(&num, &len, temp77, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 8;
                        char temp71[] = "Семи";
                        Add(&num, &len, temp71, temp_size);
                    break;
                    case Tvor:
                        temp_size = 10;
                        char temp74[] = "Семью";
                        Add(&num, &len, temp74, temp_size);
                    break;
                }
            break;
            case 8:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 12;
                        char temp88[] = "Восемь";
                        Add(&num, &len, temp88, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 12;
                        char temp81[] = "Восьми";
                        Add(&num, &len, temp81, temp_size);
                    break;
                    case Tvor:
                        temp_size = 14;
                        char temp84[] = "Восьмью";
                        Add(&num, &len, temp84, temp_size);
                    break;
                }
            break;
            case 9:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 12;
                        char temp99[] = "Девять";
                        Add(&num, &len, temp99, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 12;
                        char temp91[] = "Девяти";
                        Add(&num, &len, temp91, temp_size);
                    break;
                    case Tvor:
                        temp_size = 14;
                        char temp94[] = "Девятью";
                        Add(&num, &len, temp94, temp_size);
                    break;
                }
            break;
        }
    }
    if(size >= 2)
    {
        switch((number % 100 - number % 10) / 10)
        {
            case 1:
            {
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 12;
                        char temp[] = "Десять";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 12;
                        char temp1[] = "Десяти";
                        Add(&num, &len, temp1, temp_size);
                    break;
                    case Tvor:
                        temp_size = 14;
                        char temp4[] = "Десятью";
                        Add(&num, &len, temp4, temp_size);
                    break;
                }
                break;
            }
            case 2:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 16;
                        char temp22[] = "Двадцать";
                        Add(&num, &len, temp22, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 16;
                        char temp21[] = "Двадцати";
                        Add(&num, &len, temp21, temp_size);
                    break;
                    case Tvor:
                        temp_size = 18;
                        char temp24[] = "Двадцатью";
                        Add(&num, &len, temp24, temp_size);
                    break;
                }
            break;
            case 3:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 16;
                        char temp33[] = "Тридцать";
                        Add(&num, &len, temp33, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 16;
                        char temp31[] = "Тридцати";
                        Add(&num, &len, temp31, temp_size);
                    break;
                    case Tvor:
                        temp_size = 18;
                        char temp34[] = "Тридцатью";
                        Add(&num, &len, temp34, temp_size);
                    break;
                }
            break;
            case 4:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 10;
                        char temp44[] = "Сорок";
                        Add(&num, &len, temp44, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Tvor:
                    case Pred:
                        temp_size = 12;
                        char temp41[] = "Сорока";
                        Add(&num, &len, temp41, temp_size);
                    break;
                }
            break;
            case 5:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 18;
                        char temp55[] = "Пятьдесят";
                        Add(&num, &len, temp55, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 20;
                        char temp51[] = "Пятидесяти";/*"Пятидесяти";*/
                        Add(&num, &len, temp51, temp_size);
                    break;
                    case Tvor:
                        temp_size = 24;
                        char temp54[] = "Пятьюдесятью";
                        Add(&num, &len, temp54, temp_size);
                    break;
                }
            break;
            case 6:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 20;
                        char temp66[] = "Шестьдесят";
                        Add(&num, &len, temp66, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 22;
                        char temp61[] = "Шестидесяти";
                        Add(&num, &len, temp61, temp_size);
                    break;
                    case Tvor:
                        temp_size = 26;
                        char temp64[] = "Шестьюдесятью";
                        Add(&num, &len, temp64, temp_size);
                    break;
                }
            break;
            case 7:
                switch(cases)
                {
                    case Vin:
                    case Im:
                        temp_size = 18;
                        char temp77[] = "Семьдесят";
                        Add(&num, &len, temp77, temp_size);
                    break;
                    case Pred:
                    case Rod:
                    case Dat:
                        temp_size = 20;
                        char temp72[] = "Семидесяти";
                        Add(&num, &len, temp72, temp_size);
                    break;
                    case Tvor:
                        temp_size = 24;
                        char temp74[] = "Семьюдесятью";
                        Add(&num, &len, temp74, temp_size);
                    break;
                }
            break;
            case 8:
                switch(cases)
                {   
                    case Vin:
                    case Im:
                        temp_size = 22;
                        char temp88[] = "Восемьдесят";
                        Add(&num, &len, temp88, temp_size);
                    break;
                    case Pred:
                    case Rod:
                    case Dat:
                        temp_size = 24;
                        char temp82[] = "Восьмидесяти";
                        Add(&num, &len, temp82, temp_size);
                    break;
                    case Tvor:
                        temp_size = 28;
                        char temp84[] = "Восьмьюдесятью";
                        Add(&num, &len, temp84, temp_size);
                    break;
                }
            break;
            case 9:
                switch(cases)
                {
                    case Vin:
                    case Im:
                        temp_size = 18;
                        char temp99[] = "Девяносто";
                        Add(&num, &len, temp99, temp_size);
                    break;
                    case Dat:
                    case Tvor:
                    case Rod:
                    case Pred:
                        temp_size = 18;
                        char temp91[] = "Девяноста";
                        Add(&num, &len, temp91, temp_size);
                    break;
                }
            break;
        }
    }

    if(size >= 3)
    {
        switch((number % 1000 - number % 100) / 100)
        {
            case 1:
            {
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 6;
                        char temp[] = "Сто";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                    case Dat:
                    case Tvor:
                    case Pred:
                        temp_size = 6;
                        char temp1[] = "Ста";
                        Add(&num, &len, temp1, temp_size);
                    break;
                }
                break;
            }
            case 2:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 12;
                        char temp[] = "Двести";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                        temp_size = 14;
                        char temp2[] = "Двухсот";
                        Add(&num, &len, temp2, temp_size);
                    case Dat:
                        temp_size = 16;
                        char temp3[] = "Двумстам";
                        Add(&num, &len, temp3, temp_size);
                    case Pred:
                        temp_size = 16;
                        char temp4[] = "Двухстах";
                        Add(&num, &len, temp4, temp_size);
                    break;
                    case Tvor:
                        temp_size = 20;
                        char temp5[] = "Двумястами";
                        Add(&num, &len, temp5, temp_size);
                    break;
                }
            break;
            case 3:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 12;
                        char temp[] = "Триста";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                        temp_size = 14;
                        char temp1[] = "Трехсот";
                        Add(&num, &len, temp1, temp_size);
                    case Dat:
                        temp_size = 16;
                        char temp2[] = "Тремстам";
                        Add(&num, &len, temp2, temp_size);
                    case Pred:
                        temp_size = 16;
                        char temp3[] = "Трехстах";
                        Add(&num, &len, temp3, temp_size);
                    break;
                    case Tvor:
                        temp_size = 20;
                        char temp4[] = "Тремястами";
                        Add(&num, &len, temp4, temp_size);
                    break;
                }
            break;
            case 4:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 18;
                        char temp[] = "Четыреста";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                        temp_size = 20;
                        char temp1[] = "Четырехсот";
                        Add(&num, &len, temp1, temp_size);
                    case Dat:
                        temp_size = 22;
                        char temp3[] = "Четыремстам";
                        Add(&num, &len, temp3, temp_size);
                    case Pred:
                        temp_size = 22;
                        char temp2[] = "Четырехстах";
                        Add(&num, &len, temp2, temp_size);
                    break;
                    case Tvor:
                        temp_size = 26;
                        char temp4[] = "Четырьмястами";
                        Add(&num, &len, temp4, temp_size);
                    break;
                }
            break;
            case 5:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 14;
                        char temp[] = "Пятьсот";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                        temp_size = 14;
                        char temp1[] = "Пятиста";
                        Add(&num, &len, temp1, temp_size);
                    case Dat:
                        temp_size = 16;
                        char temp2[] = "Пятистам";
                        Add(&num, &len, temp2, temp_size);
                    case Pred:
                        temp_size = 16;
                        char temp3[] = "Пятистах";
                        Add(&num, &len, temp3, temp_size);
                    break;
                    case Tvor:
                        temp_size = 20;
                        char temp4[] = "Пятьюстами";
                        Add(&num, &len, temp4, temp_size);
                    break;
                }
            break;
            case 6:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 16;
                        char temp[] = "Шестьсот";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                        temp_size = 16;
                        char temp1[] = "Шестисот";
                        Add(&num, &len, temp1, temp_size);
                    case Dat:
                        temp_size = 18;
                        char temp3[] = "Шестистам";
                        Add(&num, &len, temp3, temp_size);
                    case Pred:
                        temp_size = 18;
                        char temp2[] = "Шестистах";
                        Add(&num, &len, temp2, temp_size);
                    break;
                    case Tvor:
                        temp_size = 22;
                        char temp4[] = "Шестьюстами";
                        Add(&num, &len, temp4, temp_size);
                    break;
                }
            break;
            case 7:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 14;
                        char temp[] = "Семьсот";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                        temp_size = 14;
                        char temp1[] = "Семисот";
                        Add(&num, &len, temp1, temp_size);
                    case Dat:
                        temp_size = 16;
                        char temp2[] = "Семистам";
                        Add(&num, &len, temp2, temp_size);
                    case Pred:
                        temp_size = 16;
                        char temp3[] = "Семистах";
                        Add(&num, &len, temp3, temp_size);
                    break;
                    case Tvor:
                        temp_size = 20;
                        char temp4[] = "Семьюстами";
                        Add(&num, &len, temp4, temp_size);
                    break;
                }
            break;
            case 8:
                switch(cases)
                {   
                    case Im:
                    case Vin:
                        temp_size = 18;
                        char temp[] = "Восемьсот";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                        temp_size = 18;
                        char temp1[] = "Восьмисот";
                        Add(&num, &len, temp1, temp_size);
                    case Dat:
                        temp_size = 20;
                        char temp3[] = "Восьмистам";
                        Add(&num, &len, temp3, temp_size);
                    case Pred:
                        temp_size = 20;
                        char temp2[] = "Восьмистах";
                        Add(&num, &len, temp2, temp_size);
                    break;
                    case Tvor:
                        temp_size = 24;
                        char temp4[] = "Восьмьюстами";
                        Add(&num, &len, temp4, temp_size);
                    break;
                }
            break;
            case 9:
                switch(cases)
                {
                    case Im:
                    case Vin:
                        temp_size = 18;
                        char temp[] = "Девятьсот";
                        Add(&num, &len, temp, temp_size);
                    break;
                    case Rod:
                        temp_size = 18;
                        char temp1[] = "Девятисот";
                        Add(&num, &len, temp1, temp_size);
                    case Dat:
                        temp_size = 20;
                        char temp3[] = "Девятистам";
                        Add(&num, &len, temp3, temp_size);
                    case Pred:
                        temp_size = 20;
                        char temp2[] = "Девятистах";
                        Add(&num, &len, temp2, temp_size);
                    break;
                    case Tvor:
                        temp_size = 24;
                        char temp4[] = "Девятьюстами";
                        Add(&num, &len, temp4, temp_size);
                    break;
                }
            break;
        }
    }
    return num;
}
