# Age_calculator_.c
How to make a Age Calculator in " C " Language

# 📅 Age Calculator with Leap Year Detection

A C program that calculates your age based on birth year, tells you how old you'll turn this year, and detects if you were born in a leap year!

## 📋 Table of Contents
- [How It Works](#how-it-works)
- [Complete Code](#complete-code)
- [Step by Step Explanation](#step-by-step-explanation)
- [Sample Outputs](#sample-outputs)
- [How to Run](#how-to-run)
- [Key Concepts Learned](#key-concepts-learned)

---

## How It Works

The program:
1. Asks for your birth year
2. Calculates your age in the current year (2026)
3. Tells you how old you'll turn on your birthday
4. Checks if you were born in a **leap year** (February 29 exists)
5. Handles future years (if you enter a year after 2026)

---

## Complete Code

```c
#include <stdio.h>
#define CURRENTYEAR 2026

int main()
{
    int yearborn, age;
    printf("what year were you born?\n");
    scanf("%d", &yearborn);
    
    if(yearborn > CURRENTYEAR)
    {
        printf("really you haven't been born yet\n");
        printf("want to try again with different year\n");
        printf("what year were you born\n");
        printf("%d", yearborn);
    }
    else
    {
        age = CURRENTYEAR - yearborn;
        printf("\nso, this year you will turn %d on your birthday!", age);
        
        if((yearborn % 4) == 0)
        {
            printf("\n you were born in a leap year--cool!\n");
        }    
    }                

    return 0;
}



Step by Step Explanation
Step 1: Include Header File
c

#include <stdio.h>

    Includes Standard Input Output library

    Required for printf() (output) and scanf() (input)

Step 2: Define Constant
c

#define CURRENTYEAR 2026

    Creates a constant named CURRENTYEAR with value 2026

    Cannot be changed during program execution

    Makes it easy to update the year in one place

Step 3: Main Function
c

int main()
{

    Entry point of the program

    int means the function returns an integer

Step 4: Declare Variables
c

int yearborn, age;

    yearborn - stores the user's birth year

    age - stores calculated age

    Both are integer type

Step 5: Get User Input
c

printf("what year were you born?\n");
scanf("%d", &yearborn);

    printf() asks for birth year

    \n creates a new line

    scanf() reads the number entered

    %d format specifier for integers

    &yearborn stores input in yearborn variable

Step 6: Check for Future Birth Year
c

if(yearborn > CURRENTYEAR)
{
    printf("really you haven't been born yet\n");
    printf("want to try again with different year\n");
    printf("what year were you born\n");
    printf("%d", yearborn);
}

Purpose: Prevents calculating age for unborn people

Logic:

    If birth year > 2026 (e.g., 2030)

    Program tells user they haven't been born yet

    Shows the invalid year they entered

    Does NOT calculate age

Step 7: Calculate Age (Valid Birth Year)
c

else
{
    age = CURRENTYEAR - yearborn;
    printf("\nso, this year you will turn %d on your birthday!", age);
}

Runs when: Birth year ≤ 2026

Calculation:

    age = 2026 - yearborn

    Example: 2026 - 2000 = 26 years old

Step 8: Leap Year Detection
c

if((yearborn % 4) == 0)
{
    printf("\n you were born in a leap year--cool!\n");
}

What is a leap year?

    Occurs every 4 years (except century years not divisible by 400)

    February has 29 days

    Examples: 2000, 2004, 2008, 2012, 2016, 2020, 2024

How it works:

    % is the modulo operator (remainder after division)

    yearborn % 4 calculates remainder when yearborn is divided by 4

    If remainder = 0, year is divisible by 4 → leap year

    Examples:

        2000 % 4 = 0 → Leap year ✓

        2001 % 4 = 1 → Not leap year ✗

        2002 % 4 = 2 → Not leap year ✗

        2003 % 4 = 3 → Not leap year ✗

Step 9: Return Statement
c

return 0;

    Indicates successful program completion

    Returns 0 to the operating system

Step 10: Closing Brace
c

}

    Closes the main function

Flowchart
text

           START
             ↓
    Define CURRENTYEAR = 2026
             ↓
    Ask: "What year were you born?"
             ↓
    Read input → yearborn
             ↓
    yearborn > 2026? ---YES---> "You haven't been born yet!"
             ↓ NO                ↓
    age = 2026 - yearborn        END
             ↓
    "You will turn (age) this year"
             ↓
    yearborn % 4 == 0? ---YES---> "Born in leap year!"
             ↓ NO                ↓
             ↓                    ↓
           END ←------------------↓

Sample Outputs
Example 1: Born in 2000 (Leap Year)
text

what year were you born?
2000

so, this year you will turn 26 on your birthday!
you were born in a leap year--cool!

Example 2: Born in 2001 (Not Leap Year)
text

what year were you born?
2001

so, this year you will turn 25 on your birthday!

Example 3: Future Year (2030)
text

what year were you born?
2030
really you haven't been born yet
want to try again with different year
what year were you born
2030

Example 4: Born in 2020 (Recent Leap Year)
text

what year were you born?
2020

so, this year you will turn 6 on your birthday!
you were born in a leap year--cool!

Example 5: Born in 1996 (Leap Year)
text

what year were you born?
1996

so, this year you will turn 30 on your birthday!
you were born in a leap year--cool!

Leap Year Reference Table
Birth Year	Leap Year?	Age in 2026
2000	✓ Yes	26
2001	✗ No	25
2002	✗ No	24
2003	✗ No	23
2004	✓ Yes	22
2005	✗ No	21
2006	✗ No	20
2007	✗ No	19
2008	✓ Yes	18
