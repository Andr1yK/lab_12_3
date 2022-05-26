#pragma once

#ifndef _CREATE_
#define _CREATE_

#include <iostream>

#include "./Elem.hpp"

using namespace std;

void Create(Elem *&first, Elem *&last, int value)
{
  Elem *tmp = new Elem;
  
  tmp->info = value;
  tmp->next = NULL;

  if (last != NULL)
    last->next = tmp;

  tmp->prev = last;
  last = tmp;

  if (first == NULL)
    first = tmp;
}

#endif // !_CREATE_
