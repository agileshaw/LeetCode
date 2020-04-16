/**
 * Problem0678 - Valid Parenthesis String
 *
 * https://github.com/agileshaw/LeetCode
 **/

bool checkValidString(char * s){
    int lower = 0, upper = 0, i;

    if (!strlen(s))
        return true;

    for (i = 0; i < strlen(s); i++) {
        if (s[i] == '(') {
            lower++;
            upper++;
        } else if (s[i] == ')') {
            if (lower > 0)
                lower--;
            upper--;
            if (upper < 0)
                return false;
        } else if (s[i] == '*') {
            if (lower > 0)
                lower--;
            upper++;
        }
    }

    if (lower == 0)
        return true;
    return false;
}
