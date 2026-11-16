#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // input number of mountains and heights
    int n;
    if (!(cin >> n))
        return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    // widths and total canvas width
    vector<int> w(n);
    int totalWidth = 0;
    for (int i = 0; i < n; ++i)
    {
        w[i] = 2 * a[i] - 1; // width of mountain
        totalWidth += w[i];
    }
    if (n >= 2)
        totalWidth += n; // one space between mountains

    int maxH = 0;
    for (int h : a)
        if (h > maxH)
            maxH = h;

    // initialize canvas: maxH rows, each row is totalWidth spaces
    vector<string> canvas(maxH, string(totalWidth, ' ')); // make area to draw

    // compute left (start) position for each mountain
    vector<int> left(n);
    int pos = 0;
    for (int i = 0; i < n; ++i) // check left positions
    {
        left[i] = pos;
        pos += w[i];
        if (i != n - 1)
            pos += 1; // one space separator
    }

    // draw mountains onto canvas
    for (int i = 0; i < n; ++i)
    {
        int h = a[i];
        int L = left[i];
        // for each level of this mountain (0 = top)
        for (int level = 0; level < h; ++level)
        {
            // row index in canvas: top of mountain at row = maxH - h
            int row = (maxH - h) + level;
            int leading = h - 1 - level;
            int inside = level * 2;
            int slashPos = L + leading;
            int backslashPos = slashPos + 1 + inside;
            if (slashPos >= 0 && slashPos < totalWidth)
                canvas[row][slashPos] = '/';
            if (backslashPos >= 0 && backslashPos < totalWidth)
                canvas[row][backslashPos] = '\\';
        }
    }

    // print canvas, trimming trailing spaces on each line
    for (int r = 0; r < maxH; ++r)
    {
        string &line = canvas[r];
        int last = (int)line.size() - 1;
        while (last >= 0 && line[last] == ' ') // remove trailing spaces
            --last;
        if (last < 0)
        {
            cout << '\n';
        }
        else
        {
            cout << line.substr(0, last + 1) << '\n';
        }
    }
    return 0;
}
