#include <stdio.h>
#include <math.h>

int main(void)
{
    //prompts user to enter credit card number
    long long int n ;
    printf("Number: ") ;
    scanf("%lli", &n) ;

    //saving credit card number in another variable because its value keep varying throughout the code
    long long int n_1 = n ;

    int digit, digit_1, digit_3, sum = 0, j = 10, num_of_dig = 0, first_1_dig, first_2_dig ;

    //calculates number of digits in credit card
    do
    {
        n /= 10 ;

        ++num_of_dig ;
    }
    while (n != 0) ;

    n = n_1 ;

    //calculate first two digits of credit card number with 15 number of digits
    if (num_of_dig == 15)
    {
        first_2_dig = n / (pow(10, 13)) ;
    }
    //calculate first digit of credit card number with 13 number of digits
    else if (num_of_dig == 13)
    {
        first_1_dig = n / (pow(10, 12)) ;
    }
    //calculate first two digits and first digit of credit card number with 16 number of digits
    else if (num_of_dig == 16)
    {
        first_2_dig = n / (pow(10, 14)) ;

        first_1_dig = n / (pow(10, 15)) ;
    }

    //checks whether credit card is valid or not
    if ((num_of_dig == 16) && (first_1_dig == 4))
    {
        n = n_1 ;

        //checks for Luhn’s Algorithm
        for (long long int i = 1; i <= pow(10, 8); i *= 10)
        {
            n /= j ;

            j = 10 ;

            j *= 10 ;

            digit = (n % 10) * 2 ;

            do
            {
                digit_1 = digit % 10 ;

                sum += digit_1 ;

                digit /= 10 ;
            }
            while (digit != 0) ;
        }

        n = n_1 ;

        for (long long int i = 1; i <= pow(10, 8); i *= 10)
        {
            digit_3 = n % 10 ;

            sum += digit_3 ;

            n /= 100 ;
        }

        //prints VISA if card follows Luhn’s Algorithm
        if ((sum % 10) == 0)
        {
            printf("VISA\n") ;
        }
        //prints INVALID if card doesn't follow Luhn’s Algorithm
        else
        {
            printf("INVALID\n") ;
        }
    }
    //checks whether credit card is valid or not
    else if ((num_of_dig == 13) && (first_1_dig == 4))
    {
        n = n_1 ;

        //checks for Luhn’s Algorithm
        for (long long int i = 1; i <= pow(10, 6); i *= 10)
        {
            n /= j ;

            j = 10 ;

            j *= 10 ;

            digit = (n % 10) * 2 ;

            do
            {
                digit_1 = digit % 10 ;

                sum += digit_1 ;

                digit /= 10 ;
            }
            while (digit != 0) ;
        }

        n = n_1 ;

        for (long long int i = 1; i <= pow(10, 7); i *= 10)
        {
            digit_3 = n % 10 ;

            sum += digit_3 ;

            n /= 100 ;
        }

        //prints VISA if card follows Luhn’s Algorithm
        if ((sum % 10) == 0)
        {
            printf("VISA\n") ;
        }
        //prints INVALID if card doesn't follow Luhn’s Algorithm
        else
        {
            printf("INVALID\n") ;
        }
    }
    //checks whether credit card is valid or not
    else if ((num_of_dig == 15) && ((first_2_dig == 34) || (first_2_dig == 37)))
    {
        n = n_1 ;

        //checks for Luhn’s Algorithm
        for (long long int i = 1; i <= pow(10, 7); i *= 10)
        {
            n /= j ;

            j = 10 ;

            j *= 10 ;

            digit = (n % 10) * 2 ;

            do
            {
                digit_1 = digit % 10 ;

                sum += digit_1 ;

                digit /= 10 ;
            }
            while (digit != 0) ;
        }

        n = n_1 ;

        for (long long int i = 1; i <= pow(10, 8); i *= 10)
        {
            digit_3 = n % 10 ;

            sum += digit_3 ;

            n /= 100 ;
        }

        //prints AMEX if card follows Luhn’s Algorithm
        if ((sum % 10) == 0)
        {
            printf("AMEX\n") ;
        }
        //prints INVALID if card doesn't follow Luhn’s Algorithm
        else
        {
            printf("INVALID\n") ;
        }
    }
    //checks whether credit card is valid or not
    else if ((num_of_dig == 16) && ((first_2_dig == 51) || (first_2_dig == 52) || (first_2_dig == 53) || (first_2_dig == 54)
                                    || (first_2_dig == 55)))
    {
        n = n_1 ;

        //checks for Luhn’s Algorithm
        for (long long int i = 1; i <= pow(10, 8); i *= 10)
        {
            n /= j ;

            j = 10 ;

            j *= 10 ;

            digit = (n % 10) * 2 ;

            do
            {
                digit_1 = digit % 10 ;

                sum += digit_1 ;

                digit /= 10 ;
            }
            while (digit != 0) ;
        }

        n = n_1 ;

        for (long long int i = 1; i <= pow(10, 8); i *= 10)
        {
            digit_3 = n % 10 ;

            sum += digit_3 ;

            n /= 100 ;
        }

        //prints MASTERCARD if card follows Luhn’s Algorithm
        if ((sum % 10) == 0)
        {
            printf("MASTERCARD\n") ;
        }
        //prints INVALID if card doesn't follow Luhn’s Algorithm
        else
        {
            printf("INVALID\n") ;
        }
    }

    //shows INVALID if the card doesn't satisfy any of the conditions
    else
    {
        printf("INVALID\n") ;
    }

    system("pause");  
    return 0;
}