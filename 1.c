/*COMPETITIVE CODING (Story Problem)
1. Thief in jail
A thief is trying to escape from a jail. He has to cross N walls each with varying heights (every height is greater than 0). He climbs X feet every time. But, due to the slippery nature of those walls, every time he slips back by Y feet. Now the task is to calculate the total number of jumps required to cross all walls and escape from the jail.
Examples:
Input-1: heights[] = {11, 11} X = 10; Y = 1;
Output: 4
Input-2: heights[] = {11, 10, 10, 9} X = 10; Y= 1; Output: 5
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of walls : ");
    scanf("%d",&n);

    int height[n];
    int x,y;
    printf("\nEnter the limit of max climb he can make at once without slipping(in feet) : ");
    scanf("%d",&x);

    printf("\nEnter the limit of max slip he can make at once(in feet) : ");
    scanf("%d",&y);

    int tj=0;

    printf("\nEnter the height of each walls : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &height[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(height[i]>x)
        {
           while(height[i]>x)
        {
            if(height[i]>x)
            {
                height[i]=height[i]-x+y;
                tj++;
            }
            tj++;
        }
        }
        else{
            tj++;
        } 
    }

    printf("Total jumps he will have to make to climb in order to escape the jail is %d ", tj);
}
