#pragma once

#ifndef _PRINT_
#define _PRINT_

#include <iostream>

#include "./Elem.hpp"

using namespace std;

void Print(Elem* begin) {
  while (begin != NULL)
  {
    cout << begin->info << "\t";
    begin = begin->next;
  }
  
  cout << endl;
}

void Print_rec(Elem* begin)
{
  if (begin != NULL)
  {
    cout << begin->info << "\t";

    Print_rec(begin->next);
  } else {
    cout << endl;
  }
}

#endif // !_PRINT_
