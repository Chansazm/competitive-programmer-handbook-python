ios::sync_with_stdio(0);
cin.tie(0);

#include <bits/stdc++.h>
using namespace std;

    int main(String[] args)
    {
        
       
        /*Capture the data*/
        scanf("Enter the litres of gasoline you want: ");
        int gas =sc.nextInt();
        System.out.println("Enter the type of gasoline \nR->regular \nU->unleaded \nS->super unleaded \nN->none");
        char type = sc.next().charAt(0);
        /*Convert the character inputs to lowercase*/
        type = Character.toUpperCase(type);
        scanf("Car wash desired? (Y or N)");
        char wash = sc.next().charAt(0);
        /*into lowercase conversion*/
        wash = Character.toUpperCase(wash);
        String s1 = "" ,s2 = "";
        /*Find out the gas kind*/
        double total = 0.0;
        if(type == 'R')
        {
            total = total + gas* 16.25;
            s1 = "Regular";
        }
        else if(type == 'U')
        {
            total = total + gas*17.63 ;
            s1 = "Unleaded";
        }
        else if(type == 'S')
        {
            total = total + gas*19.50 ;
            s1 = "Super Unleaded";
        }
        else if(type == 'N')
        {
            total = total + gas*0 ;
            s1 = "No gas taken";
        }
        
        double fees = 0.0;
        /*Verify if wash has been ordered*/
        if(wash == 'Y')
        {
            if(total >= 200)
            {
                fees = total + 40.0;
                s2 = "Yes";
            }
            else
            {
                fees = total + 70.0;
                s2 = "Yes";
            }
        }
        else
        {
            fees = total;
            s2 = "No";
        }
        /*show the output*/
        printf("%s\n","\n    Billing Details:");
        printf("%s\nLitres of Gasoline: " + gas);
        printf("%s\nType of Gasoline: " + s1);
        printf("%s\nCar Wash desired: " + s2);
        printf("%sTotal Cost: K" + fees);
        
    }
}