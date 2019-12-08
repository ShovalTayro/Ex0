# Ex0
My math
The package My-math contains methods for performing basic numeric operations on Monom and Polynom such as: derivative, add, multiply, subtract etc.
Monom is a mathematical expression of the form "ax^b" when a is the coefficient of the Monom and he is Double type variable, and b is the power of the Monom and he an Integer type variable.
Polynom is a mathematical connection created by connecting or subtracting Monomies (one Monom also can be called polynom) we have defined a Polynom without "()" in or between Monomies.
All methods summary:
Monom_Comperator() – compare between two Monomies by their power , and set the Monom with the biggest power first.
Monom(double a, int b) - this constructor get two variables a & b.
The constructor set 'a' to be the coefficient of the Monom, and 'b' to be the power of the Monom.
public Monom(Monom ot)- copy constructor.
double get_coefficient()-Returns the  coefficient of the Monom.
int get_power()- Returns the  power of the Monom.
Monom derivative()- this method returns the derivative of Monom ax^b. returns b*ax^b-1.
double f(double x) - this method returns the value of the Monom in x.
boolean isZero()- return true if the Monom coefficient is 0.
Monom(String s)- this constructor check a given string if he is a Monom of the shape "+ax^b" or "-ax^b". if the given string is in this shape the constructor will build a new Monom, else throw error.
void add(Monom m)- This method add between two Monomies. if they have the same power, else throw error.
void multiply(Monom d) - This method multiply between two Monomies.
String toString()- returns the Monom as a String "ax^b"
boolean isMonom(String s)- method that checked if a given String is a Monom.
boolean isNumber(char index)- check if a given index is real number between 0 to 9.
void substarct(Monom m1)- This method substract between two Monomies. if they have the same power, else throw error.
boolean equals(Monom m)- This method check if two given Monomies are equals.
The criterions are :1) their power should be the same, 2) the difference between the coefficients can't be more then epsilon.
void set_coefficient(double a)- set thee coefficient of the Monom to be 'a'.
void set_power(int p)- set the power of the Monom to be 'p'.
public Polynom()- Zero (empty polynom).
Polynom(String s)¬- check if the String represent a Polynom.
if it is a Polynom it builds Polynom - represent in linked-list, else throw error.
double f(double x)- This method returns the value of a Polynom in index x.
void add(Polynom_able p1)- this method add between two Polynomials.
if Polynom doesn't have p1 power we add this Monom to "this Polynom".
void add(Monom m1) - This method add Monom m1 to Polynom .
void substract(Polynom_able p1) - This method substract between two Polynomials.
void substract(Monom m)- In this method we substract Monom m from Polynom.
void multiply(Polynom_able p1)- This method multiply "this Polynom" && p1
we multiply every Monom in p1 with every Monom from "this Polynom" using the method of multiple Monom m1 with Monom m2.
boolean equals(Polynom_able p1)- Check if two Polynomials are equals.
boolean isZero()- this method return true if a certain Polynom is from one of the forms {"0" , "0x^b+0x^b2" , "0-0x^b3" etc.}, else return false.
Double root(double x0, double x1, double eps) – this method returns us the index 'x' , that f(x)<=epsilon.
Polynom_able copy() - Deep copy of Polynom.
Polynom_able derivative() - This method derivative Polynom.
The derivative using the derivative from Monom class. we derivative every Monom from the polynom. the derivative is from "ax^b" ---- "bax^b-1".
double area(double x0, double x1, double eps)- this method returns us the area between the polynom and  the x axis ,using Riemann's Integral : https://en.wikipedia.org/wiki/Riemann_integral.
Iterator<Monom> iteretor()- method that help us go through every Monom in the polynom.
void multiply(Monom m1)- Multiply Polynom with Monom m1 using the method multiply between two Monomies.
 String toString() -  represent the Polynom as a String.
