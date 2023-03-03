#include <stdio.h>
#include <time.h>

struct Date {
   int day;
   int month;
   int year;
};

int main() {
   struct Date currentDate, finalDate;
   time_t t = time(NULL);
   struct tm tm = *localtime(&t);
   
   // Store current date in the structure
   currentDate.day = tm.tm_mday;
   currentDate.month = tm.tm_mon + 1;
   currentDate.year = tm.tm_year + 1900;
   
   // Add 45 days to the current date
   finalDate.day = currentDate.day + 45;
   finalDate.month = currentDate.month;
   finalDate.year = currentDate.year;

   if (finalDate.day > 31) { // Check for month end
      finalDate.day -= 31;
      finalDate.month++;
   }

   if (finalDate.month > 12) { // Check for year end
      finalDate.month -= 12;
      finalDate.year++;
   }

   // Display the final date
   printf("Current Date: %d-%d-%d\n", currentDate.day, currentDate.month, currentDate.year);
   printf("Final Date: %d-%d-%d\n", finalDate.day, finalDate.month, finalDate.year);

   return 0;
}
