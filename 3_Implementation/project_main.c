#include "code.h"
void main()
{
    int i, j, a1, a2, b, c; int x = 0, d, e, r;
    char o;
    printf("Enter Number Of Passengers: ");
    fflush(stdin);
    scanf("%d", &j);
  
    // Calling details() function with
    // argument number of passenger
    details(j);
    printf("Enter The Source Place: ");
    fflush(stdin);
    gets(source);
    printf("Enter The Destination Place: ");
    gets(des);
    printf("\t\tThe Following Trains "
           "Are Available.....\n");
    printf("\t\t1. Rajdhani Express.."
           ".......10:00 "
           "a.m........Sealdah Station\n");
    printf("\t\t2. Satabdi Express..."
           ".......05:00 "
           "p.m........Howrah Station\n");
    printf("\t\t3. Humsafar Express..."
           ".......11:00 "
           "p.m........Kolkata Chitpur"
           " Station\n");
    printf("\t\t4. Garib-Rath Express"
           ".........05:00 "
           "p.m........Sealdah Station\n");
    printf("\t\t5. Duronto Express..."
           ".........07:00 "
           "a.m.........Santraganchi"
           "Station\n");
    scanf("%d", &i);
    do {
        switch (i) {
        case 1: {
            strcpy(train,
                   "Rajdhani Express");
            strcpy(station,
                   "Sealdah Station");
            time1 = 10;
            time2 = 00;
            a1 = 2099;
            a2 = 1560;
  
            // Calling cal() function
            // with the three argument
            // and return value
           int d = cal(a1, a2, j);
            printf("Total Bill Amount:"
                   " %d\n",
                   d);
        }; break;
        case 2: {
            strcpy(train,
                   "Satabdi Express");
            strcpy(station,
                   "Howrah Station");
            time1 = 05;
            time2 = 00;
            a1 = 1801;
            a2 = 981;
  
            // Calling cal() function with
            // three argument & return value
            d = cal(a1, a2, j);
            printf("Total Bill Amount:"
                   "%d\n",
                   d);
        }; break;
        case 3: {
            strcpy(train,
                   "Humsafar Express");
            strcpy(station,
                   "Kolkata Chitpur Express");
            time1 = 11;
            time2 = 00;
            a1 = 2199;
            a2 = 1780;
  
            // Calling cal() function with
            // three argument & return value
            d = cal(a1, a2, j);
            printf("Total Bill Amount: %d\n", d);
        }; break;
        case 4: {
            strcpy(train, "Garib-Rath Express");
            strcpy(station, "Sealdah Station");
            time1 = 05;
            time2 = 00;
            a1 = 1759;
            a2 = 1200;
  
            // Calling cal() function with
            // three argument & return value
            d = cal(a1, a2, j);
            printf("Total Bill Amount: %d\n", d);
        }; break;
        case 5: {
            strcpy(train, "Duronto Express");
            strcpy(station, "Santraganchi Station");
            time1 = 07;
            time2 = 00;
            a1 = 2205;
            a2 = 1905;
  
            // Calling cal() function with
            // three argument & return value
            d = cal(a1, a2, j);
            printf("Total Bill Amount: %d\n", d);
        }; break;
        default:
            printf("Enter Correct choice.....\n");
            x = 1;
            break;
        }
    } while (x);
    printf("Now Book Your Seats......\n");
  
    // Calling seat() function with number
    // of passenger
    seat(j);
  
    // Calling bill() function with
    // the number of passenger
    // and amount argument
    bill(d, j);
}