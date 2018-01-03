//
// Created by Wang, Ji on 1/3/18.
//

#include "LeetCode.h"
#include <iostream>
#include <map>



LeetCode::LeetCode() = default;

LeetCode::~LeetCode() = default;
/*
    LC205: Iomorphic String
    Given two strings s and t, determine if they are isomorphic.
    Two strings are isomorphic if the characters in s can be replaced to get t.

    All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

    For example,
        Given "egg", "add", return true.
        Given "foo", "bar", return false.
        Given "paper", "title", return true.

    Note:
        You may assume both s and t have the same length.
*/

bool LeetCode::lc205_isIsomorphic(string s, string t) {
    if ( s.length() != t.length())
        return false;

    map<char, char> m1;

    for( int i=0; i<s.size(); i++)
    {
        if ( (m1[s[i]] != 0)  && (m1[s[i]] != t[i]))
        {
            return false;
        }
        else
        {
            m1[s[i]] = t[i];
        }
    }
    return true;
}
void LeetCode::lc205_test() {
    cout << lc205_isIsomorphic("foo", "bar") << endl;
    cout << lc205_isIsomorphic("egg", "add") << endl;
    cout << lc205_isIsomorphic("paper", "title") << endl;
}