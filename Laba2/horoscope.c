#include <stdlib.h>
#include <stdio.h>
//#include <conio.h>
#include "horoscope.h"
#include <string.h>


int firstPersEdited = FALSE;
int secondPersEdited = FALSE;

int main()
{
    int firstPerson[4];
    int secondPerson[4]; 
    // | 0  | 1 |  2  |          3          |
    // | zz |day|month|male = 0; female = 1 |
    while(TRUE)
    {
        switch(Menu())
        {
            case '1':
                DataInput(firstPerson);
                firstPersEdited = TRUE;
                break; 
            case '2':
                DataInput(secondPerson);
                secondPersEdited = TRUE;
                break;
            case '3':
                DetermineZodiac(firstPerson);
                DetermineZodiac(secondPerson);
                printf("First person:\n");
                ShowInfo(firstPerson);
                printf("Second person:\n");
                ShowInfo(secondPerson);
                break;
            case '4':
                if(CheckFriendship(*firstPerson, *secondPerson))
                    printf("These persons can be friends.\n");
                else 
                    printf("These persons can NOT be friends.\n");
                break;
            case '5':
                if(CheckBusiness(*firstPerson, *secondPerson))
                    printf("These people are suitable for each other in business.\n");
                else 
                    printf("These people are NOT suitable for each other in business.\n");
                break;
            case '6':
                if(CheckMarriage(*firstPerson, *secondPerson))
                    printf("These people are suitable for each other in marriage.\n");
                else 
                    printf("These people are NOT suitable for each other in marriage.\n");
                break;
            case '7':
                firstPersEdited = FALSE;
                secondPersEdited = FALSE;
                break;
            case '8':
                printf("\
                ----------------------------------\n\
                \tVersion: 2.0\n\
                \tAuthor: Rotkovich 053503\n\
                ----------------------------------\n");
                break;
            case '9':
                return 0;
            default:
                break;
        }
    }

    system("pause");
}

int CheckFriendship(int first, int second)
{
    if(first % 2 == 0 && second % 2 == 0
    || first % 3 == 0 && second % 3 == 0
    || first % 5 == 0 && second % 5 == 0
    || first % 7 == 0 && second % 7 == 0)
        return TRUE;
    else 
        return FALSE; 
}

int CheckMarriage(int first, int second)
{
    if(first % 2 == 0 && second % 3 == 0
    || first % 3 == 0 && second % 2 == 0
    || first % 5 == 0 && second % 7 == 0
    || first % 7 == 0 && second % 5 == 0)
        return TRUE;
    else 
        return FALSE;
}

int CheckBusiness(int first, int second)
{
    if(first == second)
        return TRUE;
    else if ((first == Aquarius && (second == Pisces || second == Capricorn))
        || (first == Pisces && (second == Aquarius || second == Aries))
        || (first == Aries && (second == Taurus || second == Pisces))
        || (first == Taurus && (second == Aries || second == Gemini))
        || (first == Gemini && (second == Taurus || second == Cancer))
        || (first == Cancer && (second == Leo || second == Gemini))
        || (first == Leo && (second == Cancer || second == Virgo))
        || (first == Virgo && (second == Leo || second == Libra))
        || (first == Libra && (second == Virgo || second == Scorpio))
        || (first == Scorpio && (second == Libra || second == Sagittarius))
        || (first == Sagittarius && (second == Scorpio || second == Capricorn))
        || (first == Capricorn && (second == Sagittarius || second == Aquarius)))
        return TRUE; 
    else 
        return FALSE; 
}

void DetermineZodiac(int* person)
{
    switch (person[2])
    {
    case 1:
        person[0] = (person[1] < 21)? Capricorn : Aquarius;
        break;
    case 2:
        person[0] = (person[1] < 21)? Aquarius : Pisces;
        break;
    case 3:
        person[0] = (person[1] < 21)? Pisces : Aries;
        break;
    case 4:
        person[0] = (person[1] < 21)? Aries : Taurus;
        break;
    case 5:
        person[0] = (person[1] < 21)? Taurus : Gemini;
        break;
    case 6:
        person[0] = (person[1] < 22)? Gemini : Cancer;
        break;
    case 7:
        person[0] = (person[1] < 23)? Cancer : Leo;
        break;
    case 8:
        person[0] = (person[1] < 24)? Leo : Virgo;
        break;
    case 9:
        person[0] = (person[1] < 24)? Virgo : Libra;
        break;
    case 10:
        person[0] = (person[1] < 24)? Libra : Scorpio;
        break;
    case 11:
        person[0] = (person[1] < 23)? Scorpio : Sagittarius;
        break;
    case 12:
        person[0] = (person[1] < 22)? Sagittarius : Capricorn;
        break;
    }
}

void ShowInfo(int* person)
{
    char zodiac[15];
    switch (person[0])
    {
    case Aquarius:
        strcpy(zodiac, "Aquarius");
        break;
    case Pisces:
        strcpy(zodiac, "Pisces");
        break;
    case Aries:
        strcpy(zodiac, "Aries");
        break;
    case Taurus:
        strcpy(zodiac, "Taurus");
        break;
    case Gemini:
        strcpy(zodiac, "Gemini");
        break;
    case Cancer:
        strcpy(zodiac, "Cancer");
        break;
    case Leo:
        strcpy(zodiac, "Leo");
        break;
    case Virgo:
        strcpy(zodiac, "Virgo");
        break;
    case Libra:
        strcpy(zodiac, "Libra");
        break;
    case Scorpio:
        strcpy(zodiac, "Scorpio");
        break;
    case Sagittarius:
        strcpy(zodiac, "Sagittarius");
        break;
    case Capricorn:
        strcpy(zodiac, "Capricorn");
        break;
    } 
    printf("Data of birth: %d.%d -- %s\n", person[1], person[2], zodiac);
}

void DataInput(int* person)
{
    int correctInput = FALSE;
    printf("Enter data of birth in format\"31 12\": ");
    do
    {
        if(scanf("%d %d", &person[1], &person[2]) != 2)
        {
            printf("Uncorrect input. Try again in format \"day month\":\n");
            while(getchar() != '\n') {}  
        }
        else  
        {
            if(person[1] > 31 || person[2] > 12 || person[1] < 1 || person[2] < 1)
                printf("Uncorrect input.\n");
            else  
                correctInput = TRUE; 
        }
    } while (!correctInput);
    printf("Choose gender:\n\
    1. Male. \n\
    2. Female. \n");
    int input = 0;
    do
    {
        if(scanf("%d", &input) != 1)
        {
            correctInput = FALSE;
            while(getchar() != '\n') {}  
        }
        else  
        {
            correctInput = ((char)input == '1' || (char)input == '2')? TRUE : FALSE; 
        }
        //input = getch();
    } while (!correctInput);
    person[3] = input - 49; // '0' = 48;
    
}

char Menu()
{
    int correctInput = FALSE;
    int input = 0;
    printf("\
    _________________________________________________\n\
    1. Edit information about first person.\n\
    2. Edit information about second person.\n\
    3. Determine the zodiac signs of persons.\n\
    4. Check if friendthip is possible.\n\
    5. Check if they are suitable for each other in business.\n\
    6. Check if they can live in marriage.\n\
    7. Restart program.\n\
    8. Information about developer.\n\
    9. Exit.\n\
    _________________________________________________\n");
    do
    {
        //input = getch();
        if(scanf("%d", &input) != 1)
        {
            correctInput = FALSE;
            while(getchar() != '\n') {}
            printf("Incorrect input\n");
        }
        else
        {
            if(input < 49 || input > 57)
                printf("%c - is not valid input. U chould enter a number from 1 to 9.\n", (char)input); 
            else 
                correctInput = TRUE;
        } 
    } while(!correctInput);

    if((char)input == '1' || (char)input == '2')
    {
        if((char)input == '1' && !firstPersEdited)
        {
            return '1';
        }
        else if ((char)input == '2' && !secondPersEdited)
        {
            return '2'; 
        }
        else 
        {
            correctInput = FALSE;
            int tempInput = 0;
            printf("U have already entered information about this person, do u want to change it?\n\
            1. Yes.\n\
            2. No. \n");
            do
            {
                //tempInput = getch();
                if(scanf("%d", &tempInput) != 1)
                {
                    correctInput = FALSE;
                    while(getchar() != '\n') {}
                }
                else if(tempInput < 49 || tempInput > 50)
                    printf("%d - is not valid input. U chould enter 1 or 2.\n", input); 
                else 
                    correctInput = TRUE; 
            } while (!correctInput);
            return ((char)tempInput == '1')? (char)input : '0';
        }
    }
    else if ((char)input >= '3' && (char)input <= '6')
    {
        if(secondPersEdited && firstPersEdited)
        {
            return (char)input;
        }
        else 
        {
            printf("U don't enter information about both partners.\n");
            return '0';
        }
    }
    else 
    {
        return (char)input; 
    }
}
