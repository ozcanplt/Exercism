typedef enum {
   PERFECT_NUMBER = 1,
   ABUNDANT_NUMBER = 2,
   DEFICIENT_NUMBER = 3,
   ERROR = -1
} kind;

int classify_number(int number)
{   
    if (number <= 0)
    {
        return ERROR;
    }
    int sum = 0;
    for (int i = 1; i <= number/2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if (sum == number)
    {
        return PERFECT_NUMBER;
    }
    else if (sum > number)
    {
        return ABUNDANT_NUMBER;
    }
    else
    {
        return DEFICIENT_NUMBER;
    } 
}
