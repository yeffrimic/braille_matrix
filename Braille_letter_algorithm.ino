/*
 *This algorithm uses a 2x3 servomotors matrix to make a
 *braille alphabet's letter
 *the data received in serial port
 *you have to put it in this way
 *
 *  POINTS
 *  1  4
 *  2  5
 *  3  6
 *
 *  made by Yeffri J. Salazar 9 agoust 2016
 */

#include <Servo.h>
Servo FirstPoint;
Servo SecondPoint;
Servo ThirdPoint;
Servo FourthPoint;
Servo FifthPoint;
Servo SixthPoint;


void setup() {
  // put your setup code here, to run once:
  FirstPoint.attach(11);
  SecondPoint.attach(10);
  ThirdPoint.attach(9);
  FourthPoint.attach(6);
  FifthPoint.attach(5);
  SixthPoint.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:

}


void ReceiveLetter(char DataIn) {
  switch (DataIn) {

    case 'a':
      CreateLetter(1, 0, 0, 0, 0, 0);
      break;
    case 'b':
      CreateLetter(1, 1, 0, 0, 0, 0);
      break;
    case 'c':
      CreateLetter(1, 0, 0, 1, 0, 0);
      break;

    case 'd':
      CreateLetter(1, 0, 0, 1, 1, 0);
      break;

    case 'e':
      CreateLetter(1, 0, 0, 0, 1, 0);
      break;
    case 'f':
      CreateLetter(1, 1, 0, 1, 0, 0);
      break;
    case 'g':
      CreateLetter(1, 1, 1, 1, 0, 0);
      break;
    case 'h':
      CreateLetter(1, 1, 0, 0, 1, 0);
      break;
    case 'i':
      CreateLetter(0, 1, 0, 1, 0, 0);
      break;
    case 'j':
      CreateLetter(0, 1, 0, 1, 1, 0);
      break;
    case 'k':
      CreateLetter(1, 0, 1, 0, 0, 0);
      break;
    case 'l':
      CreateLetter(1, 1, 1, 0, 0, 0);
      break;
    case 'm':
      CreateLetter(1, 0, 1, 1, 0, 0);
      break;
    case 'n':
      CreateLetter(1, 0, 1, 1, 1, 0);
      break;
    case 'o':
      CreateLetter(1, 0, 1, 0, 1, 0);
      break;
    case 'p':
      CreateLetter(1, 1, 1, 1, 0, 0);
      break;
    case 'q':
      CreateLetter(1, 1, 1, 1, 1, 0);
      break;
    case 'r':
      CreateLetter(1, 1, 1, 0, 1, 0);
      break;
    case 's':
      CreateLetter(0, 1, 1, 1, 0, 0);
      break;
    case 't':
      CreateLetter(0, 1, 1, 1, 1, 0);
      break;
    case 'u':
      CreateLetter(1, 0, 1, 0, 0, 1);
      break;
    case 'v':
      CreateLetter(1, 1, 1, 0, 0, 1);
      break;
    case 'x':
      CreateLetter(1, 0, 1, 1, 0, 1);
      break;
    case 'y':
      CreateLetter(1, 0, 1, 1, 1, 1);
      break;
    case 'z':
      CreateLetter(1, 0, 1, 0, 1, 1);
      break;
    case '1':
      CreateLetter(0, 0, 1,1,1,1); //prefix for number
      delay(500);
      CreateLetter(1, 0, 0, 0, 0, 0); //a
      break;
    case '2':
      CreateLetter(0, 0, 1,1,1,1); //prefix for number
      delay(500);
      CreateLetter(1, 1, 0, 0, 0, 0);
      break;
    case '3':
      CreateLetter(0, 0, 1,1,1,1); //prefix for number
      delay(500);
      CreateLetter(1, 0, 0, 1, 0, 0);
      break;

    case '4':
      CreateLetter(0, 0, 1,1,1,1); //prefix for number
      delay(500);
      CreateLetter(1, 0, 0, 1, 1, 0);
      break;

    case '5':
      CreateLetter(0, 0, 1,1,1,1); //prefix for number
      delay(500);
      CreateLetter(1, 0, 0, 0, 1, 0);
      break;
    case '6':
      CreateLetter(0, 0, 1,1,1,1); //prefix for number
      delay(500);
      CreateLetter(1, 1, 0, 1, 0, 0);
      break;
    case '7':
      CreateLetter(0, 0, 1,1,1,1); //prefix for number
      delay(500);
      CreateLetter(1, 1, 1, 1, 0, 0);
      break;
    case '8':
      CreateLetter(0, 0, 1,1,1,1); //prefix for number
      delay(500);
      CreateLetter(1, 1, 0, 0, 1, 0);
      break;
    case '9':
      CreateLetter(0, 0, 1,1,1,1); //prefix for number
      delay(500);
      CreateLetter(0, 1, 0, 1, 0, 0);
      break;
    case '0':
      CreateLetter(0, 0, 1,1,1,1); //prefix for number
      delay(500);
      CreateLetter(0, 1, 0, 1, 1, 0);
      break;

    case ',':
      CreateLetter(0,1,0,0,0,0);
      break;
    case '.':
      CreateLetter(0,0,1,0,0,0);
      break;
  }
}


void CreateLetter(boolean one, boolean two, boolean three, boolean four, boolean five, boolean six) {
  if (one) {
    FirstPoint.write(90);
  } else {
    FirstPoint.write(0);
  }
  if (two) {
    SecondPoint.write(90);
  } else {
    SecondPoint.write(0);
  }
  if (three) {
    ThirdPoint.write(90);
  } else {
    ThirdPoint.write(0);
  }
  if (four) {
    FourthPoint.write(90);
  } else {
    FourthPoint.write(0);
  }
  if (five) {
    FifthPoint.write(90);
  } else {
    FifthPoint.write(0);
  }
  if (six) {
    SixthPoint.write(90);
  } else {
    SixthPoint.write(0);
  }


}

