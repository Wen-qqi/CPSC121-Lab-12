// Wen Fan
// CPSC 121L - 11
// April 29, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "astronaut.h"
#include "crewmate.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef IMPOSTOR_H
#define IMPOSTOR_H

// ========================= YOUR CODE HERE =========================
// Define the Impostor class here, which inherits from the Astronaut
// base class. Refer to the README for instructions.
// ===================================================================
class Impostor : public Astronaut {
 public:
  Impostor() : Astronaut("no evil", graphics::Color(256, 0, 0)) {}
  Impostor(const std::string& name, const graphics::Color& color)
      : Astronaut{name, color} {}

  void Kill(Crewmate& crewmate) const;
};

#endif  // IMPOSTOR_H
