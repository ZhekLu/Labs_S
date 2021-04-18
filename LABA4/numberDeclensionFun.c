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
                        if(!Add(&num, &len, temp, temp_size))
                            return NULL;
                    break;
                    case Rod:
                        temp_size = 12;
                        char temp1[] = "Одного";
                        if(!Add(&num, &len, temp1, temp_size))
                            return NULL;
                    break;
                    case Dat:
                        temp_size = 12;
                        char temp2[] = "Одному";
                        if(!Add(&num, &len, temp2, temp_size))
                            return NULL;
                    break;
                    case Vin:
                        temp_size = 12;
                        char temp3[] = "Одного";
                        if(!Add(&num, &len, temp3, temp_size))
                            return NULL;
                    break;
                    case Tvor:
                        temp_size = 10;
                        char temp4[] = "Одним";
                        if(!Add(&num, &len, temp4, temp_size))
                            return NULL;
                    break;
                    case Pred:
                        temp_size = 10;
                        char temp5[] = "Одном";
                        if(!Add(&num, &len, temp5, temp_size))
                            return NULL;
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
                        if(!Add(&num, &len, temp, temp_size))
                            return NULL;
                    break;
                    case Rod:
                    case Pred:
                        temp_size = 8;
                        char temp21[] = "Двух";
                        if(!Add(&num, &len, temp21, temp_size))
                            return NULL;
                    break;
                    case Dat:
                        temp_size = 8;
                        char temp22[] = "Двум";
                        if(!Add(&num, &len, temp22, temp_size))
                            return NULL;
                    break;
                    case Tvor:
                        temp_size = 10;
                        char temp24[] = "Двумя";
                        if(!Add(&num, &len, temp24, temp_size))
                            return NULL;
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
                        if(!Add(&num, &len, temp3, temp_size))
                            return NULL;
                    break;
                    case Rod:
                    case Pred:
                        temp_size = 8;
                        char temp31[] = "Трех";
                        if(!Add(&num, &len, temp31, temp_size))
                            return NULL;
                    break;
                    case Dat:
                        temp_size = 8;
                        char temp32[] = "Трем";
                        if(!Add(&num, &len, temp32, temp_size))
                            return NULL;
                    break;
                    case Tvor:
                        temp_size = 10;
                        char temp34[] = "Тремя";
                        if(!Add(&num, &len, temp34, temp_size))
                            return NULL;
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
                        if(!Add(&num, &len, temp46, temp_size))
                            return NULL;
                    break;
                    case Rod:
                    case Pred:
                        temp_size = 14;
                        char temp41[] = "Четырех";
                        if(!Add(&num, &len, temp41, temp_size))
                            return NULL;
                    break;
                    case Dat:
                        temp_size = 14;
                        char temp42[] = "Четырем";
                        if(!Add(&num, &len, temp42, temp_size))
                            return NULL;
                    break;
                    case Tvor:
                        temp_size = 16;
                        char temp44[] = "Четырьмя";
                        if(!Add(&num, &len, temp44, temp_size))
                            return NULL;
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
                        if(!Add(&num, &len, temp56, temp_size))
                            return NULL;
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 8;
                        char temp51[] = "Пяти";
                        if(!Add(&num, &len, temp51, temp_size))
                            return NULL;
                    break;
                    case Tvor:
                        temp_size = 10;
                        char temp54[] = "Пятью";
                        if(!Add(&num, &len, temp54, temp_size))
                            return NULL;
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
                        if(!Add(&num, &len, temp63, temp_size))
                            return NULL;
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 10;
                        char temp61[] = "Шести";
                        if(!Add(&num, &len, temp61, temp_size))
                            return NULL;
                    break;
                    case Tvor:
                        temp_size = 12;
                        char temp64[] = "Шестью";
                        if(!Add(&num, &len, temp64, temp_size))
                            return NULL;
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
                        if(!Add(&num, &len, temp77, temp_size))
                            return NULL;
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 8;
                        char temp71[] = "Семи";
                        if(!Add(&num, &len, temp71, temp_size))
                            return NULL;
                    break;
                    case Tvor:
                        temp_size = 10;
                        char temp74[] = "Семью";
                        if(!Add(&num, &len, temp74, temp_size))
                            return NULL;
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
                        if(!Add(&num, &len, temp88, temp_size))
                            return NULL;
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 12;
                        char temp81[] = "Восьми";
                        if(!Add(&num, &len, temp81, temp_size))
                            return NULL;
                    break;
                    case Tvor:
                        temp_size = 14;
                        char temp84[] = "Восьмью";
                        if(!Add(&num, &len, temp84, temp_size))
                            return NULL;
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
                        if(!Add(&num, &len, temp99, temp_size))
                            return NULL;
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 12;
                        char temp91[] = "Девяти";
                        if(!Add(&num, &len, temp91, temp_size))
                            return NULL;
                    break;
                    case Tvor:
                        temp_size = 14;
                        char temp94[] = "Девятью";
                        if(!Add(&num, &len, temp94, temp_size))
                            return NULL;
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
                        if(!Add(&num, &len, temp, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 12;
                        char temp1[] = "Десяти";
                        if(!Add(&num, &len, temp1, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 14;
                        char temp4[] = "Десятью";
                        if(!Add(&num, &len, temp4, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp22, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 16;
                        char temp21[] = "Двадцати";
                        if(!Add(&num, &len, temp21, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 18;
                        char temp24[] = "Двадцатью";
                        if(!Add(&num, &len, temp24, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp33, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 16;
                        char temp31[] = "Тридцати";
                        if(!Add(&num, &len, temp31, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 18;
                        char temp34[] = "Тридцатью";
                        if(!Add(&num, &len, temp34, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp44, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                    case Dat:
                    case Tvor:
                    case Pred:
                        temp_size = 12;
                        char temp41[] = "Сорока";
                        if(!Add(&num, &len, temp41, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp55, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 20;
                        char temp51[] = "Пятидесяти";
                        if(!Add(&num, &len, temp51, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 24;
                        char temp54[] = "Пятьюдесятью";
                        if(!Add(&num, &len, temp54, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp66, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                    case Dat:
                    case Pred:
                        temp_size = 22;
                        char temp61[] = "Шестидесяти";
                        if(!Add(&num, &len, temp61, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 26;
                        char temp64[] = "Шестьюдесятью";
                        if(!Add(&num, &len, temp64, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp77, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Pred:
                    case Rod:
                    case Dat:
                        temp_size = 20;
                        char temp72[] = "Семидесяти";
                        if(!Add(&num, &len, temp72, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 24;
                        char temp74[] = "Семьюдесятью";
                        if(!Add(&num, &len, temp74, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp88, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Pred:
                    case Rod:
                    case Dat:
                        temp_size = 24;
                        char temp82[] = "Восьмидесяти";
                        if(!Add(&num, &len, temp82, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 28;
                        char temp84[] = "Восьмьюдесятью";
                        if(!Add(&num, &len, temp84, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp99, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Dat:
                    case Tvor:
                    case Rod:
                    case Pred:
                        temp_size = 18;
                        char temp91[] = "Девяноста";
                        if(!Add(&num, &len, temp91, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                    case Dat:
                    case Tvor:
                    case Pred:
                        temp_size = 6;
                        char temp1[] = "Ста";
                        if(!Add(&num, &len, temp1, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                        temp_size = 14;
                        char temp2[] = "Двухсот";
                        if(!Add(&num, &len, temp2, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Dat:
                        temp_size = 16;
                        char temp3[] = "Двумстам";
                        if(!Add(&num, &len, temp3, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Pred:
                        temp_size = 16;
                        char temp4[] = "Двухстах";
                        if(!Add(&num, &len, temp4, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 20;
                        char temp5[] = "Двумястами";
                        if(!Add(&num, &len, temp5, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                        temp_size = 14;
                        char temp1[] = "Трехсот";
                        if(!Add(&num, &len, temp1, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Dat:
                        temp_size = 16;
                        char temp2[] = "Тремстам";
                        if(!Add(&num, &len, temp2, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Pred:
                        temp_size = 16;
                        char temp3[] = "Трехстах";
                        if(!Add(&num, &len, temp3, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 20;
                        char temp4[] = "Тремястами";
                        if(!Add(&num, &len, temp4, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                        temp_size = 20;
                        char temp1[] = "Четырехсот";
                        if(!Add(&num, &len, temp1, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Dat:
                        temp_size = 22;
                        char temp3[] = "Четыремстам";
                        if(!Add(&num, &len, temp3, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Pred:
                        temp_size = 22;
                        char temp2[] = "Четырехстах";
                        if(!Add(&num, &len, temp2, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 26;
                        char temp4[] = "Четырьмястами";
                        if(!Add(&num, &len, temp4, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                        temp_size = 14;
                        char temp1[] = "Пятиста";
                        if(!Add(&num, &len, temp1, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Dat:
                        temp_size = 16;
                        char temp2[] = "Пятистам";
                        if(!Add(&num, &len, temp2, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Pred:
                        temp_size = 16;
                        char temp3[] = "Пятистах";
                        if(!Add(&num, &len, temp3, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 20;
                        char temp4[] = "Пятьюстами";
                        if(!Add(&num, &len, temp4, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                        temp_size = 16;
                        char temp1[] = "Шестисот";
                        if(!Add(&num, &len, temp1, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Dat:
                        temp_size = 18;
                        char temp3[] = "Шестистам";
                        if(!Add(&num, &len, temp3, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Pred:
                        temp_size = 18;
                        char temp2[] = "Шестистах";
                        if(!Add(&num, &len, temp2, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 22;
                        char temp4[] = "Шестьюстами";
                        if(!Add(&num, &len, temp4, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                        temp_size = 14;
                        char temp1[] = "Семисот";
                        if(!Add(&num, &len, temp1, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Dat:
                        temp_size = 16;
                        char temp2[] = "Семистам";
                        if(!Add(&num, &len, temp2, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Pred:
                        temp_size = 16;
                        char temp3[] = "Семистах";
                        if(!Add(&num, &len, temp3, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 20;
                        char temp4[] = "Семьюстами";
                        if(!Add(&num, &len, temp4, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                        temp_size = 18;
                        char temp1[] = "Восьмисот";
                        if(!Add(&num, &len, temp1, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Dat:
                        temp_size = 20;
                        char temp3[] = "Восьмистам";
                        if(!Add(&num, &len, temp3, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Pred:
                        temp_size = 20;
                        char temp2[] = "Восьмистах";
                        if(!Add(&num, &len, temp2, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 24;
                        char temp4[] = "Восьмьюстами";
                        if(!Add(&num, &len, temp4, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
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
                        if(!Add(&num, &len, temp, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Rod:
                        temp_size = 18;
                        char temp1[] = "Девятисот";
                        if(!Add(&num, &len, temp1, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Dat:
                        temp_size = 20;
                        char temp3[] = "Девятистам";
                        if(!Add(&num, &len, temp3, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    case Pred:
                        temp_size = 20;
                        char temp2[] = "Девятистах";
                        if(!Add(&num, &len, temp2, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                    case Tvor:
                        temp_size = 24;
                        char temp4[] = "Девятьюстами";
                        if(!Add(&num, &len, temp4, temp_size))
                        {
                            free(num); 
                            return NULL;
                        }
                    break;
                }
            break;
        }
    }
    return num;
}
