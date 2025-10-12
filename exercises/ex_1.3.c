// "The C Programming Language" - Exercise 1.3 - Rev 001

#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version */

int main() {

  /* Initially, we want to print a Title for our users
   * so that they will understand what the application
   * is doing. Do not forget the newline character! */
  printf("Fahrenheit-Celsius Conversion Table\n");
  printf("-----------------------------------\n");

  /* We will instead, for more accurate accounting of the
   * temperature values provide these as floating-point decimal
   * types, or, float */
  float fahr, celsius;

  /* The integer types remain as they do not need modification
   * for precision */
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  while (fahr <= upper) {

    /* We can now utilize the floating-point decimal
     * which will give us rounded approximations and
     * _.01 type values in return, this is where we
     * can use a more precise formula for better
     * results. Note that we are specifying that each
     * portion of the evaluation's operands are working
     * with the .0, or float so that celsius is
     * calculated more accurately and is provided the
     * floating-point decimal value expected. */
    celsius = (5.0/9.0) * (fahr-32.0);

    /* More readable results are provided with the 3.0 & 6.1f
     * space references provided to the printf statement below
     * we only want the raw integer value of our Fahrenheit
     * temperature while the Celsius temperature has a single
     * tenths or tens digit after the decimal for appromimations
     * up to the next whole number based on that single digit
     * representation of a part of a whole, mathematically
     * speaking. */
    printf("%3.0f | %6.1f\n", fahr, celsius);

    /* Finally, we increment our Fahrenheit value by our
     * step or increment value before we re-evaluate the
     * while condition */
    fahr += step;
  }

  /* To end our program, we will provide an exit code
   * of zero, a properly ended application. */
  return 0;
}

