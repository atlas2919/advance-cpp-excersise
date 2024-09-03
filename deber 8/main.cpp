#include "Complex.h"


int main() {
   Complex x;
   Complex y{4.3, 8.2};
   Complex z{3.3, 1.1};

   cout << "x: " << x.toString() << "\ny: " << y.toString()
      << "\nz: " << z.toString();

   x = y + z;
   cout << "\n\nx = y + z:\n" << x.toString() << " = " << y.toString() << " + " << z.toString();

   x = y - z;
   cout << "\n\nx = y - z:\n" << x.toString() << " = " << y.toString() << " - " << z.toString();

   x = y * z;
   cout << "\n\nx = y * z:\n" << x.toString() << " = " << y.toString() << " + " << z.toString();

   x = y / z;
   cout << "\n\nx = y / z:\n" << x.toString() << " = " << y.toString() << " + " << z.toString();

   cout << "\n\nComparando magnitudes: \n";
   if(y > z){
    cout << y.toString() << " tiene mayor magnitud que: " << z.toString() << endl;
   }
   else{
    cout << z.toString() << " tiene mayor magnitud que: " << y.toString() << endl;
   }

   return 0;
}

