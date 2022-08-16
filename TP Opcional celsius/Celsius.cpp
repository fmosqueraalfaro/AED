#include <iostream>
#include <cassert>

// AreNear: R3 -> Bool / AreNear (x,y,z) = {V si |X - Y| =< Z }
                                        // {F Sino		   }

double celsius (double);

bool AreNear(double, double, double = 0.001);


int main(){

    //celsius
      assert ( celsius (32)  == 0);
      assert ( celsius (5) < (-15));
      assert ( celsius (41) > 5 );
      assert ( -0.6 < celsius (31)  and  celsius (31) < -0.5);
      assert (0.5 < celsius (33) and celsius (33) < 0.6);

    //AreNear
      assert ( AreNear (32, 32, 0));
      assert ( AreNear (celsius (33), 0.54, 0.1));
      assert ( AreNear (celsius (5), -15 , 0.1));
      assert ( AreNear (celsius (75), 23.888));
 }

 double celsius ( double f) {return (5.0/9.0)*(f-32);}

 bool AreNear (double a, double b, double c ) {return ((a + c) >= b) and (a - c) <= b;}
