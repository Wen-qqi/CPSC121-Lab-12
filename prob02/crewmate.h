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

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef CREWMATE_H
#define CREWMATE_H

// ========================= YOUR CODE HERE =========================
// Define the Crewmate class here, which inherits from the Astronaut
// base class. Refer to the README for instructions.
// ===================================================================
class Crewmate : public Astronaut {
 public:
  Crewmate()
      : Astronaut("no name", graphics::Color(0, 0, 0)),
        is_alive_(true),
        task_count_(0) {}
  Crewmate(const std::string& name, const graphics::Color& color)
      : Astronaut(name, color), is_alive_(true), task_count_(0) {}
  bool GetIsAlive() const;
  int GetTaskCount() const;
  void SetIsAlive(bool is_alive);
  void DoTask(const std::string& task_name);
  graphics::Color GetColor();
  std::string GetIconFilename();

 private:
  bool is_alive_;
  int task_count_;
};

#endif  // CREWMATE_H
