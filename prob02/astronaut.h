// Wen Fan
// CPSC 121L - 11
// April 29, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <string>

#include "cpputils/graphics/image.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef ASTRONAUT_H
#define ASTRONAUT_H

// ========================= YOUR CODE HERE =========================
// Define the Astronaut class here. Refer to the README for instructions.
// ===================================================================
class Astronaut {
 public:
  Astronaut(const std::string& name, const graphics::Color& color);
  std::string GetName() const;
  graphics::Color GetColor() const;
  std::string GetIconFilename() const;

 private:
  std::string name_;
  graphics::Color color_;
};
#endif  // ASTRONAUT_H