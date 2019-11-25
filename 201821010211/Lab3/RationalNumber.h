// Lab 3: RationalNumber.h
// RationalNumber class definition.
#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H

class RationalNumber
{
public:
   RationalNumber( int = 0, int = 1 ); // default constructor
  RationalNumber operator+( const RationalNumber & ) const;
聽聽RationalNumber operator-( const RationalNumber & ) const;
聽聽RationalNumber operator*( const RationalNumber & ) const;
聽聽RationalNumber operator/( const RationalNumber & ) const;
  RationalNumber operator==( const RationalNumber & ) const;
聽聽bool operator!=( const RationalNumber & ) const;
聽聽bool operator<( const RationalNumber & ) const;
聽聽bool operator<=( const RationalNumber & ) const;
聽聽bool operator>( const RationalNumber & ) const;
聽聽bool operator>=( const RationalNumber & ) const;
   /* Write prototype for operator + */
   /* Write prototype for operator - */
   /* Write prototype for operator * */
   /* Write prototype for operator / */

   // relational operators
   /* Write prototype for operator > */
   /* Write prototype for operator < */
   /* Write prototype for operator >= */
   /* Write prototype for operator <= */

   // equality operators
   /* Write prototype for operator == */
   /* Write prototype for operator != */

   void printRational() const; // display rational number
private:
   int numerator; // private variable numerator
   int denominator; // private variable denominator
   void reduction(); // function for fraction reduction
}; // end class RationalNumber

#endif


