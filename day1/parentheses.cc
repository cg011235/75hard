#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool check_parentheses(const string& str) {
  stack<char> st;

  for (char c : str) {
    if (c == '(') {
      st.push(c);
    } else if (c == ')') {
      if (st.empty()) return false;
      st.pop();
    }
  }
  return st.empty();
}
