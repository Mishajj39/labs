#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

const int n_max = 2000;
const int n_max2 = 2000;

bool Read(int& cnt, string words[n_max]);

void Write(int cnt, string words[n_max]);

void CW(int cnt, string words[n_max]);

void Alfabet(int& cnt, string words[n_max], string words2[n_max]);

void Sort(int& cnt, string words2[n_max]);

bool Read2(int& cnt, string words3[n_max2]);

void Prov(int& cnt, string words3[n_max2], string words4[n_max2]);

void sortStringsAlphabetically(string arr[n_max2], int size);

bool Read3(int& cnt, string words5[n_max2]);

void BB(int& cnt, string words5[n_max2], string words6[n_max2]);