#pragma once
#include <string>
#include "string_view.hpp"

// set below define to 1 to recreate IntelliSense problem
#define TRIGGER_PROBLEM 1

#if TRIGGER_PROBLEM == 1
inline std::string render(nonstd::string_view input) {
#else
inline std::string render(std::string input) {
#endif
  (void)input;
  return "";
}

std::string some_function() {
    std::string output;

    // The string below causes the problem.
    // IntelliSense doesn't crash with a smaller string.
    output = render(
            R"RAW(
static void sdlfkj sdlkfj sdlfkjs dflkjsd flksjdf lksdflkjsdflkjsdflkjsdf lsdflkjsdflkjsdf
{
  dfslkjs dflksdjf lsdfj lsd fjlksdjfl skjflk slfsd
  sfdlkjsdlf jsdlfkjsldkfjlsd fjlsdfjlsdjflksdjf slkj sdlfks
  {
    sdfds;
  }
  sdfkjsdlfkjsd
  sdfjsldfjlskdjflskjdflkjsldkjsdfdsf sdflj sdlkj 
  {
    sdfsdf;
  }

  // sdlfkj sdflkjsdf lksdjfl jslkdf

  // sldkfj sldfkj sdlfkj sdlfkjs dflkjsdfl sdflkj sdlkjsdf lskj lsdf
  sdfdsdsf


  //sdflk jsdlfkj slfkjs dlfjsdf
  {

  }
  sdflkjsdf;

}
)RAW");
    return output;
}
