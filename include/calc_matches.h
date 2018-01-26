#ifndef CALC_MATCHES_H
#define CALC_MATCHES_H
#include "Word.h"
#include <vector>
#include <string>
#include <iostream>

std::vector<int> calc_matches(std::vector<Word>& sw1, std::vector<Word>& sw2, std::vector<char>& seq1, std::vector<char>& seq2, int& weight, int& dc, int& threshold, std::vector<char> pattern, int& wcd);

#endif // CALC_MATCHES_H
