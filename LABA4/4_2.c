#include "strFunctions.h"

int main()
{
    char buff[128];
    int nums[100], quantity = 0;
    FILE *fp;
    fp = fopen("1.txt", "r+");
    if(!fp)
        return 0;
    while(fgets(buff, 128, fp))
    {
        char* x = GetWords(buff, ' ');
        while(x)
        {
            if(is_eight_digit(x))
            {
                nums[quantity] = ToDecimal(x);
                quantity++;
            }
            x = GetWords(NULL, ' ');
        }
    }
    fprintf(fp, "\nResult:\n");
    int i;
    for(i = 0; i < quantity; i++)
    {
        fprintf(fp, "%d ", nums[i]);
    }
    fclose(fp);
    return 0;
}
