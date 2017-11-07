#include "test.h"

void TestSuite::runLinkedListTests() {
  int success = 0;
  std::cout << "Test 1: size of empty list is zero: ";
  if (TestSuite::testEmptyList()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 2: size returns correct value after 1 addFront: ";
  if (TestSuite::addOneToFront()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 3: size returns correct value after 1 removeFront: ";
  if (TestSuite::removeOneFromFront()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 4: size returns correct value after 1 addBack: ";
  if (TestSuite::addOneToFront()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 5: size returns correct value after 1 removeBack: ";
  if (TestSuite::removeOneFromBack()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 6: false returned after emptying list from front: ";
  if (TestSuite::testFalseOnAdd1Remove2Front()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 7: false returned after emptying list from back: ";
  if (TestSuite::testFalseOnAdd1Remove2Back()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 8: removeFront() removes first in list: ";
  if (TestSuite::testIfFrontIsRemoved()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 9: removeBack() removes last in list: ";
  if (TestSuite::testIfBackIsRemoved()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 10: add front one to list and search returns true: ";
  if (TestSuite::addOneFrontAndTestSearch()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 11: add back one to list and search returns true: ";
  if (TestSuite::addOneBackAndTestSearch()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 12: size returns correct value after 100 addFront: ";
  if (TestSuite::add100ToFront()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 13: size returns correct value after 100 addFront and 50 removeFront: ";
  if (TestSuite::add100ThenRemove50Front()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 14: size returns correct value after 100 addBack: ";
  if (TestSuite::add100ToBack()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 16: size returns correct value after 100 addBack and 50 removeBack: ";
  if (TestSuite::add100ThenRemove50Back()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 17: remove front does not remove back: ";
  if (TestSuite::testIfRemoveFrontRemovesBack()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 18: remove back does not remove front: ";
  if (TestSuite::testIfRemoveBackRemovesFront()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 19: remove front removes a node: ";
  if (TestSuite::testIfRemoveFrontRemovesAny()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 20: remove back removes a node: ";
  if (TestSuite::testIfRemoveBackRemovesAny()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 21: add front 100 nodes and search front, middle, end: ";
  if (TestSuite::add100FrontAndTestSearch()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 22: add back 100 nodes and search front, middle, end: ";
  if (TestSuite::add100BackAndTestSearch()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 23: add front 100 nodes and search outside of range: ";
  if (TestSuite::testFailedSearchAddFront()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 24: add back 100 nodes and search outside of range: ";
  if (TestSuite::testFailedSearchAddBack()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 25: 100 removeFront to remove 100 nodes: ";
  if (TestSuite::testHowRemoveFrontsToCleatList()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Test 26: 100 removeBack to remove 100 nodes: ";
  if (TestSuite::testHowRemoveBacksToCleatList()) {
    std::cout << "PASSED" << '\n';
    success++;
  } else {
    std::cout << "FAILED" << '\n';
  }

  std::cout << "Tests complete: " << success << " of " << NUM_OF_TESTS << " passed." << '\n';
}

bool TestSuite::testEmptyList() {
  LinkedListOfInts testList;
  std::vector<int> v = testList.toVector();
  if (v.size() == 0 && v.empty()) {
    return true;
  } else {
    std::cout << "returned size " << v.size() << ": ";
    return false;
  }
}

bool TestSuite::addOneToFront() {
  LinkedListOfInts testList;
  testList.addFront(1);
  std::vector<int> v = testList.toVector();
  if (v.size() == 1) {
    return true;
  } else {
    std::cout << "returned size " << v.size() << ": ";
    return false;
  }
}

bool TestSuite::removeOneFromFront() {
  LinkedListOfInts testList;
  testList.addFront(1);
  testList.removeFront();
  std::vector<int> v = testList.toVector();
  if (v.size() == 0) {
    return true;
  } else {
    std::cout << "returned size " << v.size() << ": ";
    return false;
  }
}

bool TestSuite::addOneToBack() {
  LinkedListOfInts testList;
  testList.addBack(1);
  std::vector<int> v = testList.toVector();
  if (v.size() == 1) {
    return true;
  } else {
    std::cout << "returned size " << v.size() << ": ";
    return false;
  }
}

bool TestSuite::removeOneFromBack() {
  LinkedListOfInts testList;
  testList.addBack(1);
  testList.removeBack();
  std::vector<int> v = testList.toVector();
  if (v.size() == 0) {
    return true;
  } else {
    std::cout << "returned size " << v.size() << ": ";
    return false;
  }
}

bool TestSuite::testFalseOnAdd1Remove2Front() {
  LinkedListOfInts testList;
  testList.addFront(1);
  testList.removeFront();
  return !testList.removeFront();
}

bool TestSuite::testFalseOnAdd1Remove2Back() {
  LinkedListOfInts testList;
  testList.addBack(1);
  testList.removeBack();
  return !testList.removeBack();
}

bool TestSuite::testIfFrontIsRemoved() {
  LinkedListOfInts testList;
  testList.addFront(1);
  testList.addFront(2);
  testList.removeFront();
  std::vector<int> v = testList.toVector();
  for (int i = 0 ; i < (signed) v.size(); i++) {
    if (v.at(i) == 2) {
      return false;
    }
  }
  return true;
}

bool TestSuite::testIfBackIsRemoved() {
  LinkedListOfInts testList;
  testList.addBack(1);
  testList.addBack(2);
  testList.removeBack();
  std::vector<int> v = testList.toVector();
  for (int i = 0 ; i < (signed) v.size(); i++) {
    if (v.at(i) == 2) {
      return false;
    }
  }
  return true;
}

bool TestSuite::addOneFrontAndTestSearch() {
  LinkedListOfInts testList;
  testList.addFront(1);
  std::vector<int> v = testList.toVector();
  if (testList.search(1) && v.at(0) == 1) return true;
  return false;
}

bool TestSuite::addOneBackAndTestSearch() {
  LinkedListOfInts testList;
  testList.addBack(1);
  std::vector<int> v = testList.toVector();
  if (testList.search(1) && v.at(0) == 1) return true;
  return false;
}

bool TestSuite::add100ToFront() {
  LinkedListOfInts testList;
  for (int i = 0; i < 100; i++) {
    testList.addFront(i);
  }
  std::vector<int> v = testList.toVector();
  if (testList.size() == 100 && v.size() == 100) {
    return true;
  } else {
    std::cout << v.size() << "/100 added: ";
    return false;
  }
}

bool TestSuite::add100ThenRemove50Front() {
  LinkedListOfInts testList;
  for (int i = 0; i < 100; i++) {
    testList.addFront(i);
  }
  for (int i = 0; i < 50; i++) {
    testList.removeFront();
  }
  std::vector<int> v = testList.toVector();
  if (v.size() == 50) {
    return true;
  } else {
    std::cout << "vector size " << v.size() << ": ";
    return false;
  }
}

bool TestSuite::add100ToBack() {
  LinkedListOfInts testList;
  for (int i = 0; i < 100; i++) {
    testList.addBack(i);
  }
  std::vector<int> v = testList.toVector();
  if (testList.size() == 100 && v.size() == 100) {
    return true;
  } else {
    std::cout << v.size() << "/100 added: ";
    return false;
  }
}

bool TestSuite::add100ThenRemove50Back() {
  LinkedListOfInts testList;
  for (int i = 0; i < 100; i++) {
    testList.addBack(i);
  }
  for (int i = 0; i < 50; i++) {
    testList.removeBack();
  }
  std::vector<int> v = testList.toVector();
  if (v.size() == 50) {
    return true;
  } else {
    std::cout << "vector size " << v.size() << ": ";
    return false;
  }
}

bool TestSuite::testIfRemoveBackRemovesFront() {
  LinkedListOfInts testList;
  testList.addBack(1);
  testList.addBack(2);
  testList.removeBack();
  std::vector<int> v = testList.toVector();
  if (v.size() != 1) return false;
  if (v.at(0) == 2) return false;
  return true;
}

bool TestSuite::testIfRemoveFrontRemovesBack() {
  LinkedListOfInts testList;
  testList.addFront(1);
  testList.addFront(2);
  testList.removeFront();
  std::vector<int> v = testList.toVector();
  if (v.size() != 1) return false;
  if (v.at(0) == 2) return false;
  return true;
}

bool TestSuite::testIfRemoveBackRemovesAny() {
  LinkedListOfInts testList;
  testList.addBack(1);
  testList.addBack(2);
  testList.removeBack();
  std::vector<int> v = testList.toVector();
  if (v.size() == 1) return true;
  return false;
}

bool TestSuite::testIfRemoveFrontRemovesAny() {
  LinkedListOfInts testList;
  testList.addFront(1);
  testList.addFront(2);
  testList.removeFront();
  std::vector<int> v = testList.toVector();
  if (v.size() == 1) return true;
  return false;
}

bool TestSuite::add100FrontAndTestSearch() {
  bool testPassed = true;
  LinkedListOfInts testList;
  for (int i = 0; i < 100; i++) {
    testList.addFront(i);
  }
  if (!testList.search(0)) {
    testPassed = false;
  }

  if (!testList.search(49)) {
    testPassed = false;
  }

  if (!testList.search(99)) {
    testPassed = false;
  }

  return testPassed;
}

bool TestSuite::add100BackAndTestSearch() {
  LinkedListOfInts testList;
  bool testPassed = true;
  for (int i = 0; i < 100; i++) {
    testList.addBack(i);
  }
  if (!testList.search(0)) {
    testPassed = false;
  }

  if (!testList.search(49)) {
    testPassed = false;
  }

  if (!testList.search(99)) {
    testPassed = false;
  }

  return testPassed;
}

bool TestSuite::testFailedSearchAddFront() {
  LinkedListOfInts testList;
  for (int i = 0; i < 100; i++) {
    testList.addFront(100);
  }
  if (testList.search(200)) {
    return false;
  }

  if (testList.search(0)) {
    return false;
  }

  if (testList.search(-100)) {
    return false;
  }

  return true;
}

bool TestSuite::testFailedSearchAddBack() {
  LinkedListOfInts testList;
  for (int i = 0; i < 100; i++) {
    testList.addBack(100);
  }
  if (testList.search(200)) {
    return false;
  }

  if (testList.search(0)) {
    return false;
  }

  if (testList.search(-100)) {
    return false;
  }

  return true;
}

bool TestSuite::testHowRemoveBacksToCleatList() {
  LinkedListOfInts testList;
  int removes = 0;
  bool removeBackResult = true;
  for (int i = 0; i < 100; i++) {
    testList.addBack(i);
  }
  while (removeBackResult) {
    removeBackResult = testList.removeBack();
    removes++;
    if(removes == 1000) {
      break;
    }
  }
  if (removes == 100) {
    return true;
  } else {
    std::cout << removes << " removes used: ";
    return false;
  }
}

bool TestSuite::testHowRemoveFrontsToCleatList() {
  LinkedListOfInts testList;
  int removes = 0;
  bool removeBackResult = true;
  for (int i = 0; i < 100; i++) {
    testList.addFront(i);
  }
  while (removeBackResult) {
    removeBackResult = testList.removeFront();
    removes++;
    if(removes == 1000) {
      break;
    }
  }
  if (removes == 100) {
    return true;
  } else {
    std::cout << removes << " removes used: ";
    return false;
  }
}
