// Wen Fan
// CPSC 121L - 11
// April 29, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi
//
// Lab 12-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

#ifndef STAR_H
#define STAR_H

class Star {
 public:
  // ====================== YOUR CODE HERE ======================
  // Define the following members for the Star class:
  //
  //   1. One member variable representing the name of the star,
  //      and one representing the solar radius of the star.
  //   2. A constructor, which initializes the name of the star,
  //      and the radius of the star. The constructor should
  //      print that the star was born to the terminal.
  //   3. A destructor that prints to the terminal that the star
  //      was destroyed (i.e. went supernova), and print how many
  //      times the volume of the sun that the star was.
  //   4. An accessor function, `GetName` for the star's name.
  // ============================================================
  Star(std::string star_name, double solar_radius)
      : star_name_(star_name), solar_radius_(solar_radius) {
    std::cout << "The star " << star_name << " was born" << std::endl;
  }

  ~Star() {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The star " << GetName() << " has gone supernova."
              << "It was ";
    std::cout << std::pow(solar_radius_, 3);
    std::cout << " times the volume of our sun.";
    std::cout << std::endl;
  }

  std::string GetName() {
    return star_name_;
  }

 private:
  std::string star_name_;
  double solar_radius_;
};
#endif