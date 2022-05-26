#pragma once

#ifndef _FINDTWOIDENTICAL_
#define _FINDTWOIDENTICAL_

#include <iostream>

#include "./Elem.hpp"

bool FindTwoIdentical(Elem* begin) {
  Elem* beginIner;

  while (begin != NULL)
  {
    beginIner = begin->next;

    while (beginIner != NULL)
    {
      if (begin->info == beginIner->info)
        return true;

      beginIner = beginIner->next;
    }

    begin = begin->next;
  }

  return false;
}

bool FindTwoIdenticalIner_rec(Elem* beginIner, Elem* begin) {
  if (beginIner != NULL)
  {
    if (begin->info == beginIner->info)
      return true;

    return FindTwoIdenticalIner_rec(beginIner->next, begin);
  }

  return false;
}

bool FindTwoIdentical_rec(Elem* begin) {
  Elem* beginIner;

  if (begin != NULL)
  {
    if (FindTwoIdenticalIner_rec(begin->next, begin)) {
      return true;
    }

    return FindTwoIdentical_rec(begin->next);
  }

  return false;
}

#endif // !_FINDTWOIDENTICAL_
