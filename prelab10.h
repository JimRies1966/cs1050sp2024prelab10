#ifndef _PRELAB10_H
#define _PRELAB10_H
/*
 * CS1050
 * Spring 2024
 * Prelab 10 Starter File
 * prelab10.h
 *
 * by Jim Ries
 *
 ****** DO NOT CHANGE THIS FILE ******
 */

// Symbolic Constants
#define S1 "I'm not cool and I'm not smart and I can't even parallel park."
#define S2 "\n\n\tMommy's alright.  \t Daddy's alright.  They just seem a little weird.\n\n"
#define S3 "Every cheap hood strikes a bargain with the world.  Ends up making payments on a sofa or a girl."
#define S4 "Now some guys they just give up living.\n  And start dying little by little, piece by piece.      \n"
#define STRINGCOUNT 4

////////////////
// Prototypes //
////////////////

// KillWhiteSpace should take a string, remove the whitespace from that string in-place,
// and return a pointer to the beginning of the resultant string (which really should
// be the same thing that was passed in originally - i.e., s).
char * KillWhiteSpace(char *s);

#endif
