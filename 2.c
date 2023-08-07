/*
A company has N interns, interned from 1 to N. Each intern has been given a 
device which generates password (number) everyday that will be used as a password for 
authorization at the office door every day in the morning. The internship for 50 days 
numbered from 0 to 49. 
Initially on the first day number in the device of k intern will be 5000*k.
From the second day (i.e. i=1) new number will be generated everyday in each device in the following way:
Day (i) = Day (i-1)+ 5000+i;

Find the label of the intern from the given password.
Input specification:
Input-1: N, number of interns
Input-2: P, password used

Output:

Returns the label of the intern for whom the password will be used.

Example-1:
Input1:2 
Input2: 5000 
Output: 1

Example-2:
Input1: 10
Input2: 25003
Output: 3
*/

#include <stdio.h>
#include <stdlib.h>

int findlabel(int n,int pwd)
{
    int cp=0;
    for(int i =1; i<=n ; i++)
    {
        cp=0;
        for(int j=0;j<50;j++)
        {
            if(j== 0)
            {
                cp = 5000*i;
                if(cp == pwd)
                {
                    return i;
                }
            }
            else{
                cp = cp + 5000 +j;
                if(cp == pwd)
                {
                    return i;
                }
            }
        }
    }

    return -1;
}

int main()
{
    int n;
    printf("Enter the number of interns working : \n");
    scanf("%d",&n);

    int pwd;

    printf("Enter the password : ");
    scanf("%d",&pwd);

    int label= findlabel( n, pwd);
    if(label == -1)
    {
        printf("Intern not found.");
    }
    else{
        printf("Intern found at label %d", label);
    }

}