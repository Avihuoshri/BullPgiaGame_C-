/**
 * A demo program for bull-pgia.
 * 
 * @author Erel Segal-Halevi
 * @since  2019-04
 */


#include <iostream>
using namespace std;

#include "play.hpp"
#include "DummyChoosers.hpp"
#include "DummyGuessers.hpp"
#include "SmartGuesser.hpp"
#include "badkan.hpp"
#include "calculate.hpp"
#define COMMA ,

using namespace bullpgia;

int main() {

	badkan::TestCase testcase;
	int grade=0;
	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0) {

		// BASIC TESTS - DO NOT CHANGE
		ConstantChooser c1234{"1234"}, c12345{"12345"}, c9999{"9999"};
		ConstantGuesser g1234{"1234"}, g12345{"12345"}, g9999{"9999"};
    ConstantChooser c8231{"8231"}, c82315{"82315"}, c8888{"8888"};
		ConstantGuesser g1674{"1674"}, g16861{"16861"}, g7777{"7777"}; 
		ConstantChooser c2233{"2233"}, c56564{"56564"}, c1111{"1111"};
		ConstantGuesser g1986{"1986"}, g1649{"16490"}, g2222{"2222"};
		
		testcase.setname("Calculate bull and pgia")
		.CHECK_OUTPUT(calculateBullAndPgia("1234","1234"), "4,0")      // 4 bull, 0 pgia
		.CHECK_OUTPUT(calculateBullAndPgia("1234","4321"), "0,4")      // 0 bull, 4 pgia
		;

		testcase.setname("Play with dummy choosers and guessers")
		.CHECK_EQUAL(play(c1234, g1234, 4, 100), 1)      // guesser wins in one turn.
		.CHECK_EQUAL(play(c1234, g9999, 4, 100), 101)    // guesser loses by running out of turns 
		.CHECK_EQUAL(play(c1234, g12345, 4, 100), 101)   // guesser loses technically by making an illegal guess (too long).
		.CHECK_EQUAL(play(c12345, g1234, 4, 100), 0)     // chooser loses technically by choosing an illegal number (too long).
		
		
		//Additional Tests of us
		
		.CHECK_EQUAL(play(c8231, g1674, 4, 100), 1)     
		.CHECK_EQUAL(play(c8231, g1649, 4, 100), 101)     
		.CHECK_EQUAL(play(c1234, g12345, 4, 100), 101)   
		.CHECK_EQUAL(play(c12345, g1234, 4, 100), 0) 


		.CHECK_OUTPUT(calculateBullAndPgia("1282","1233"), "2,0")      
		.CHECK_OUTPUT(calculateBullAndPgia("2323","2323"), "4,0")
		.CHECK_OUTPUT(calculateBullAndPgia("2323","1823"), "2,2")
		.CHECK_OUTPUT(calculateBullAndPgia("1666","8732"), "0,0")      
		.CHECK_OUTPUT(calculateBullAndPgia("2498","2333"), "1,0")
		.CHECK_OUTPUT(calculateBullAndPgia("1919","7379"), "0,1")
		.CHECK_OUTPUT(calculateBullAndPgia("1282","1233"), "2,0")      
		.CHECK_OUTPUT(calculateBullAndPgia("6168","2188"), "2,1")
		.CHECK_OUTPUT(calculateBullAndPgia("2017","2019"), "3,0")

		
		
		
		
		
		
		
		
		
		
		
		;

		testcase.setname("Play with smart guesser");
		RandomChooser randy;
		SmartGuesser smarty;
		for (uint i=0; i<5; ++i) {
			testcase.CHECK_EQUAL(play(randy, smarty, 4, 100)<=10, true);  // smarty should always win in at most 10 turns!
		}

    grade = testcase.grade();
	} else {
		testcase.print_signal(signal);
		grade = 0;
	}
	cout << "Your grade is: "  << grade << endl;
	return 0;
}

