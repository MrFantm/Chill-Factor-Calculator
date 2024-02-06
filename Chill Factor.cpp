#include <iostream>
#include <math.h>

using namespace std;

int main() {

   //Initializes Variables
   float temp, windVelocity, chillFactor, velocityExp;
   string name, location;
   
   //Take input from user
   cout << "Hello! Please enter your first name!\n";
   cin >> name;
   cout << "Thanks, " << name << "! Please enter the name of the town/city where you currently reside. \n";
   cin >> location;
      
   //Takes the temperature and velocity from the user's input
   cout << "Great job " << name << "! Now enter the current temperature (in Fahrenheit)\n";
   cin >> temp;
   cout << "Great! Now input the current wind velocity (in MPH) \n";
   cin >> windVelocity;
   
   //Sets exponential value for velocity
   velocityExp = pow(windVelocity, 0.16);
   
   
   //Calculates the chill factor and displays the ouput to the user
   chillFactor = (0.6215 * temp) - (35.75 * velocityExp) + (0.4275 * temp) * (velocityExp) + 35.74;
   cout << "\n" << name << " the chill factor in " << location << " is " << chillFactor << ".\n\n";
   
   cin >> name;
   return 0;
}
