/**
*	@file test.h
*	@author Kevin Ray
*	@date 11/01/2017
*	@brief A header file for test class
*/

#ifndef TEST_H
#define TEST_H

#include "LinkedListOfInts.h"
#include <iostream>
#include <vector>

class TestSuite  {

  public:

    void runLinkedListTests();


  private:
    bool testEmptyList();
    bool addOneToFront();
    bool removeOneFromFront();
    bool addOneToBack();
    bool removeOneFromBack();
    bool testFalseOnAdd1Remove2Front();
    bool testFalseOnAdd1Remove2Back();
    bool testIfFrontIsRemoved();
    bool testIfBackIsRemoved();
    bool addOneBackAndTestSearch();
    bool addOneFrontAndTestSearch();
    bool add100ToFront();
    bool add100ThenRemove50Front();
    bool add100ToBack();
    bool add100ThenRemove50Back();
    bool testIfRemoveFrontRemovesBack();
    bool testIfRemoveBackRemovesFront();
    bool testIfRemoveBackRemovesAny();
    bool testIfRemoveFrontRemovesAny();
    bool add100FrontAndTestSearch();
    bool add100BackAndTestSearch();
    bool testFailedSearchAddFront();
    bool testFailedSearchAddBack();
    bool testHowRemoveBacksToCleatList();
    bool testHowRemoveFrontsToCleatList();
    const int NUM_OF_TESTS =  26;
};

#endif
