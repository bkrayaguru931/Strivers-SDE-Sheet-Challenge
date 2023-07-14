bool isPal(int s, int e, string& str) {
    while (s < e) {
        if (str[s] != str[e])
            return false;
        s++;
        e--;
    }
    return true;
}

int minCharsforPalindrome(string str) {
    int n = str.size();
    int i = n - 1;

    while (i > 0) {
        if (str[i] == str[0]) {
            if (isPal(0, i, str))
                return n - 1 - i;
        }
        i--;
    }

    return n - 1;
}
