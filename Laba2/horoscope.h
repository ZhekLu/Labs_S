#define TRUE 1
#define FALSE 0
char Menu();
enum Zodiac
{
    //проверка кратности на число = проверка на стихию для функции дружбы.
    Aquarius = 2, //1/vodolei - 21.01 -- 20.02          --- air
    Pisces = 3, //2/riba - 21.02 -- 20.03               --- water
    Aries = 5, //3/oven - 21.03 -- 20.04                --- fire
    Taurus = 7, //4/telec - 21.04 -- 20.05              --- land
    Gemini = 8, //5/blizn - 21.05 -- 21.06              --- air
    Cancer = 9, //6/rak - 22.06 -- 22.07                --- water
    Leo = 25, //7/lev - 23.07 -- 23.08                  --- fire
    Virgo = 49, //8/deva - 24.08 -- 23.09               --- land
    Libra = 64, //9/vesi - 24.09 -- 23.10               --- air
    Scorpio = 81, //10/scorpion - 24.10 -- 22.11        --- water
    Sagittarius = 125, //11/strelec - 23.10 -- 21.12    --- fire
    Capricorn = 343, //12/kozerog - 22.12 -- 20.01      --- land
};

int CheckFriendship(int first, int second); //same element
int CheckMarriage(int first, int second); // air & water || fire & land
int CheckBusiness(int first, int second); //same zz or near
void DataInput(int* person);
void ShowInfo(int* person);
void DetermineZodiac(int* person);