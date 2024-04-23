// Wen Fan
// CPSC 121L - 11
// April 29, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "crewmate.h"

#include <iostream>

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement the member
// functions declared in the header, only if you didn't implement
// them inline in the header.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Crewmate class.
// ===================================================================
bool Crewmate::GetIsAlive() const { return is_alive_; }

int Crewmate::GetTaskCount() const { return task_count_; }

void Crewmate::SetIsAlive(bool is_alive) { is_alive_ = is_alive; }

void Crewmate::DoTask(const std::string& task_name) {
  task_count_++;
  std::cout << Astronaut::GetName() << " is doing " << task_name << "\n";
}

graphics::Color Crewmate::GetColor() {
  if (GetIsAlive()) {
    return Astronaut::GetColor();
  } else {
    graphics::Color temp_color = Astronaut::GetColor();
    return graphics::Color((temp_color.Red() + 256) / 2,
                           (temp_color.Green() + 256) / 2,
                           (temp_color.Blue() + 256) / 2);
  }
}

std::string Crewmate::GetIconFilename() {
  if (GetIsAlive()) {
    return Astronaut::GetIconFilename();
  } else {
    return "ghost.bmp";
  }
}