/**
 * Problem0014 - Longest Common Prefix
 *
 * https://github.com/agileshaw/LeetCode
 **/

char * longestCommonPrefix(char ** strs, int strsSize){
    char* prefix;
    int i, j = 0, flag = 0;

    if (strsSize == 0)
        return "";
    else if (strsSize == 1)
        return strs[0];

    prefix = malloc(sizeof(char)*(strlen(strs[0])+1));
    while ((j < strlen(strs[0])) && !flag) {
        for (i = 1; i < strsSize; i++) {
            if (j >= strlen(strs[i]) || strs[0][j] != strs[i][j]) {
                flag = 1;
                break;
            }
        }
        if(!flag) {
            prefix[j] = strs[0][j];
            j++;
        }
    }
    prefix[j] = '\0';

    return prefix;
}
