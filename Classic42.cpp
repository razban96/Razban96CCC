#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;

#ifndef COMP_PROG_ROOT
#define COMP_PROG_ROOT "."
#endif

#ifdef COMP_PROG_ROOT
const string inputPath = string(COMP_PROG_ROOT) + "/input.txt";
const string outputPath = string(COMP_PROG_ROOT) + "/output.txt";
#else
const string inputPath = "input.txt";
const string outputPath = "output.txt";
#endif

static ifstream fin(inputPath);
static ofstream fout(outputPath);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!fin.is_open()) {
        cerr << "Could not open input file: " << inputPath << '\n';
        return 1;
    }

    int N;
    if (fin >> N) {
        for (int i = 0; i < N; ++i) {

        }
    }

    return 0;
}   