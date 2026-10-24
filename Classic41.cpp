#include <bits/stdc++.H>
using namespace std;

#ifndef COMP_PROG_ROOT
#define COMP_PROG_ROOT "."
#endif

static ifstream fin(string(COMP_PROG_ROOT) + "/input.txt");
static ofstream fout(string(COMP_PROG_ROOT) + "/output.txt");

static void level1() {
    if (int n; fin >> n) {
        string line;
        getline(fin, line); // Consume leftover newline after reading n

        stringstream ss;
        for (int i = 0; i < n && getline(fin, line); ++i) {
            ss.clear();
            ss.str(line);

            int x, sum = 0;
            while (ss >> x) {
                sum += x;
            }
            fout << sum << "\n";
        }
    }
}

static void level2() {
    if (int n; fin >> n) {
        string line;
        getline(fin, line);

        stringstream ss;
        for (int i = 0; i < n && getline(fin, line); ++i) {
            ss.clear();
            ss.str(line);

            int x, space = 0, time = 0;
            while (ss >> x) {
                if (!x) time++;
                else time += abs(x);

                if (x < 0) space--;
                else if (x > 0) space++;
            }
            fout << space << ' ' << time << '\n';
        }
    }
}

static void level3() {
    if (int n; fin >> n) {
        vector<int> paces;
        int position, time, m;
        bool sign;

        while (n--) {
            fin >> position >> time;
            fout << 0 << ' ';
            if (position < 0) sign = false;
            else sign = true;
            position = abs(position);

            for (int i = 1; i <= position; ++i) {
                m = min(i, position - i + 1);
                if (sign) {
                    paces.push_back(max(1, 6 - m));
                } else {
                    paces.push_back(min(-1, -(6 - m)));
                }
            }

            for (const int pace: paces)
                fout << pace << ' ';
            fout << "0\n";
            paces.clear();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!fin.is_open() || !fout.is_open()) {
        cerr << "Could not open input.txt or output.txt in the project root.\n";
        return 1;
    }
    level3();

    return 0;
}
