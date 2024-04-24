// Wen Fan
// CPSC 121L - 11
// April 29, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "impostor.h"

#include <iostream>

#include "crewmate.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement the member
// functions declared in the header, only if you didn't implement
// them inline in the header.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Impostor class.
// ===================================================================
void Impostor::Kill(Crewmate& crewmate) const {
  crewmate.SetIsAlive(false);
  std::cout << GetName() << " killed " << crewmate.GetName() << "\n";
}