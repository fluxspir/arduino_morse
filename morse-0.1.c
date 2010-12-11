#include <wiring_private.h>
#include <serialio.h>

#define DELAY 250 
#define OUTPUT_LED 1
#define OUTPUT_BUZZ 2
#define OUTPUT_SELECTED OUTPUT_LED
#define LED_PIN 13


char sentence[100] = "david malo" ;

/*
 * OUTPUT TYPE
 */

// use LED on pin 13 to output
void out_high() {
	if (OUTPUT_SELECTED == OUTPUT_LED)
	{
		digitalWrite(LED_PIN, HIGH) ;
	}
}
void out_low() {
	if (OUTPUT_SELECTED == OUTPUT_LED)
	{
		digitalWrite(LED_PIN, LOW) ;
	}
}

/*
 * make a dot
 */
void dot() {
	out_high() ;
	delay(DELAY) ;
	out_low() ;
	delay(DELAY) ;
}

/*
 * make a dash
 */
void dash() {
	out_high() ;
	delay( 3 * DELAY ) ;
	out_low() ;
	delay(DELAY) ;
}

/*
 * end of a letter
 */
void el() {
	delay( 2 * DELAY) ;
}


// A
void A() {
	dot() ;
	dash() ;
	el() ;
}	
// B
void B() {
	dash() ;
	dot() ;
	dot() ;
	dot() ;
	el() ;
}
// C
void C() {
	dash() ;
	dot() ;
	dash() ;
	dot() ;
	el() ;
}
// D
void letter_D() {
	dash() ;
	dot() ;
	dot() ;
	el() ;
}
// E
void E() {
	dot() ;
	el() ;
}
// F
void F() {
	dot() ;
	dot() ;
	dash() ;
	dot() ;
	el() ;
}
// G
void G() {
	dash() ;
	dash() ;
	dot() ;
	el() ;
}
// H
void H() {
	dot() ;
	dot() ;
	dot() ;
	dot() ;
	el() ;
}
// I
void I() {
	dot() ;
	dot() ;
	el() ;
}
// J
void J() {
	dot() ;
	dash() ;
	dash() ;
	dash() ;
	el() ;
}
// K
void K() {
	dash() ;
	dot() ;
	dash() ;
	el() ;
}
// L
void L() {
	dot() ;
	dash() ;
	dot() ;
	dot() ;
	el() ;
}
// M
void M() {
	dash() ;
	dash() ;
	el() ;
}
// N
void N() {
	dash() ;
	dot() ;
	el() ;
}
// O
void O() {
	dash() ;
	dash() ;
	dash() ;
	el() ;
}
// P
void P() {
	dot() ;
	dash() ;
	dash() ;
	dot() ;
	el() ;
}
// Q
void Q() {
	dash() ;
	dash() ;
	dot() ;
	dash() ;
	el() ;
}
// R
void R() {
	dot() ;
	dash() ;
	dot() ;
	el() ;
}
// S
void S() {
	dot() ;
	dot() ;
	dot() ;
	el() ;
}
// T
void T() {
	dash() ;
	el() ;
}
// U
void U() {
	dot() ;
	dot() ;
	dash() ;
	el() ;
}
// V
void V() {
	dot() ;
	dot() ;
	dot() ;
	dash() ;
	el() ;
}
// W
void W() {
	dot() ;
	dash() ;
	dash() ;
	el() ;
}
// X
void X() {
	dash() ;
	dot() ;
	dot() ;
	dash() ;
	el() ;
}
// Y
void Y() {
	dash() ;
	dot() ;
	dash() ;
	dash() ;
	el() ;
}
// Z
void Z() {
	dash() ;
	dash() ;
	dot() ;
	dash() ;
	el() ;
}

// SPACE
void space() {
	delay( 4 * DELAY ) ;
}

/*
 * NUMBERS
 */

void one() {
	dot() ;
	dash() ;
	dash() ;
	dash() ;
	dash() ;
	el() ;
}

void two() {
	dot() ;
	dot() ;
	dash() ;
	dash() ;
	dash() ;
	el() ;
}

void three() {
	dot() ;
	dot() ;
	dot() ;
	dash() ;
	dash() ;
	el() ;
}

void four() {
	dot() ;
	dot() ;
	dot() ;
	dot() ;
	dash() ;
	el() ;
}

void five() {
	dot() ;
	dot() ;
	dot() ;
	dot() ;
	dot() ;
	el() ;
}

void six() {
	dash() ;
	dot() ;
	dot() ;
	dot() ;
	dot() ;
	el(); 
}

void seven() {
	dash() ;
	dash() ;
	dot() ;
	dot() ;
	dot() ;
	el() ;
}

void eight() {
	dash() ;
	dash() ;
	dash() ;
	dot() ;
	dot() ;
	el() ;
}

void nine() {
	dash() ;
	dash() ;
	dash() ;
	dash() ;
	dot() ;
	el() ;
}

void zero() {
	dash() ;
	dash() ;
	dash() ;
	dash() ;
	dash() ;
	el() ;
}

void point() {
	dot() ;
	dash() ;
	dot() ;
	dash() ;
	dot() ;
	dash() ;
	el() ;
}

void comma() {
	dash() ;
	dash() ;
	dot() ;
	dot() ;
	dash() ;
	dash() ;
	el() ;
}

void question() {
	dot() ;
	dot() ;
	dash() ;
	dash() ;
	dot() ;
	dot() ;
	el() ;
}

void exclam() {
	dash() ;
	dot() ;
	dash() ;
	dot() ;
	dash() ;
	dash() ;
	dash() ;
	dash() ;
	dash() ;
	dot() ;
	el() ;
}


void get_sentence() {

	// ask user to write a sentence
	int len_sent=101 ;
	do
	{
		scanf("%s", &sentence) ;
		len_sent = strlen(sentence) ;
	} while (0 < len_sent > 99) ;
	return sentence ;
}

void convert_letter(actual_letter) {
	switch (actual_letter)
	{
		case 65 :
			A() ;
			break ;
		case 66 :
			B() ;
			break ;
		case 67 :
			C() ;
			break ;
		case 68 :
			letter_D() ;
			break ;
		case 69 :
			E() ;
			break ;
		case 70 :
			F() ;
			break ;
		case 71 :
			G() ;
			break ;
		case 72 :
			H() ;
			break ;
		case 73 :
			I() ;
			break ;
		case 74 :
			J() ;
			break ;
		case 75 :
			K() ;
			break ;
		case 76 :
			L() ;
			break ;
		case 77 :
			M() ;
			break ;
		case 78 :
			N() ;
			break ;
		case 79 :
			O() ;
			break ;
		case 80 :
			P() ;
			break ;
		case 81 :
			Q() ;
			break ;
		case 82 :
			R() ;
			break ;
		case 83 :
			S() ;
			break ;
		case 84 :
			T() ;
			break ;
		case 85 :
			U() ;
			break ;
		case 86 :
			V() ;
			break ;
		case 87 :
			W() ;
			break ;
		case 88 :
			X() ;
			break ;
		case 89 :
			Y() ;
			break ;
		case 90 :
			Z() ;
			break ;
		case 32 :
			space() ;
			break ;
		case 49 :
			one() ;
			break ;
		case 50 :
			two() ;
			break ;
		case 51 :
			three() ;
			break ;
		case 52 :
			four() ;
			break ;
		case 53 :
			five() ;
			break ;
		case 54 :
			six() ;
			break ;
		case 55 :
			seven() ;
			break ;
		case 56 :
			eight() ;
			break ;
		case 57 :
			nine() ;
			break ;
		case 48 :
			zero() ;
			break ;
		case 46 :
			point() ;
			break ;
		case 44 :
			comma() ;
			break ;
		case 63 :
			question() ;
			break ;
		case 33 :
			exclam() ;
			break ;
		default :	
			break ;

	}
}

void main(int argc, char *argv[] ) {

	init() ;
	
	pinMode(13, OUTPUT) ;

	while (1) {
		/*
		 * my_sentence[] = get_sentence() ;
		 */
		// change the sentence to uppercase
		int i, ch ;
		for (i=0;i<strlen(sentence);i++)
		{
			ch = toupper(sentence[i]) ;
			sentence[i] = ch ;
		}
		
		// begin morse code
		char *c = sentence;
		while (*c) 
		{
			convert_letter(*c) ;
			c++ ;
		}
	}

}
	
