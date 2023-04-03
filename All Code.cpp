/*
    title: A program to identify a given line is a comment or not
    author: Md. Abid Hasan Roni Bokshi
    university roll: 2623
    reg no: 706
*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    while (true)
    {
        string line;
        getline(cin, line);
        int l = line.length();
        if (line[0] == '/' && line[1] == '/')
        {
            cout << "This is a Single line comment" << endl;
        }
        else if (line[0] == '/' && line[1] == '*')
        {
            if (line[0] == '/' && line[1] == '*' && line[l - 2] == '*' && line[l - 1] == '/')
                cout << "This is a Multi line comment" << endl;
            else if (line[0] == '/' && line[1] == '*')
            {
                while (getline(cin, line))
                {
                    int p = line.length();
                    if (line[p - 2] == '*' && line[p - 1] == '/')
                    {
                        cout << "This is a Multi line comment" << endl;
                        break;
                    }
                }
            }
        }
        else
        {
            cout << "This is Not a comment" << endl;
        }
    }
    return 0;
}

/*
    title: A program to check whether the input is a keyword and identifier
    author: Md. Abid Hasan Roni Bokshi
    university roll: 2623
    reg no: 706
*/

#include <cstring>
#include <iostream>
using namespace std;
bool isIdentifier(string str)
{
    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_'))
        return false;
    for (int i = 1; i < str.length(); i++)
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_'))
            return false;
    }
    return true;
}
int main()
{
    while (true)
    {
        string str;
        cin >> str;
        if (!str.compare("if") || !str.compare("else") || !str.compare("while") ||
            !str.compare("do") || !str.compare("break") || !str.compare("continue") ||
            !str.compare("int") || !str.compare("double") || !str.compare("float") ||
            !str.compare("return") || !str.compare("char") || !str.compare("register") ||
            !str.compare("main") || !str.compare("case") || !str.compare("char") ||
            !str.compare("sizeof") || !str.compare("long") || !str.compare("short") ||
            !str.compare("typedef") || !str.compare("volatile") || !str.compare("union") ||
            !str.compare("struct") || !str.compare("switch") || !str.compare("enum") ||
            !str.compare("extern") || !str.compare("unsigned") || !str.compare("void") ||
            !str.compare("auto") || !str.compare("static") || !str.compare("struct") ||
            !str.compare("default") || !str.compare("goto"))
            cout << '"' + str + '"' << " is a Keyword" << endl;
        else if (isIdentifier(str))
            cout << '"' + str + '"' << " is an Identifier" << endl;
        else
            cout << '"' + str + '"' << " is not a valid keyword or identifier" << endl;
    }
    return 0;
}

/*
    title: A program to detect operators from the input.
    author: Md. Abid Hasan Roni Bokshi
    university roll: 2623
    reg no: 706
*/
#include <iostream>
#include <cstring>
using namespace std;
bool findOperator(string ar[], int size, string str)
{
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == str)
            return true;
    }
    return false;
}
int main()
{
    string arithmetic[] = {"+", "-", "*", "/", "%"};
    string indec[] = {"++", "--"};
    string relational[] = {"==", "!=", ">", "<", ">=", "<="};
    string logical[] = {"&&", "||", "!"};
    string bitwise[] = {"&", "|", "~", "^", "<<", ">>"};
    string assignment[] = {"=", "+=", "-=", "=", "/=", "%=", "<<=", ">>=", "&=", "^=", "|="};
    string str;
    while (true)
    {
        cin >> str;
        if (findOperator(arithmetic, 5, str))
            cout << str << " Arithmetic Operator" << endl;
        else if (findOperator(indec, 2, str))
            cout << str << " increment / decrement Operator " << endl;
        else if (findOperator(relational, 6, str))
            cout << str << " Relational Operator" << endl;
        else if (findOperator(logical, 3, str))
            cout << str << " Logical Operator" << endl;
        else if (findOperator(bitwise, 6, str))
            cout << str << " Bitwise Operator" << endl;
        else if (findOperator(assignment, 11, str))
            cout << str << " Assignment Operator" << endl;
        else
            cout << str << " Not an operator" << endl;
    }
    return 0;
}

/*
    title: A program to detect the type of the number given in the input.
    author: Md. Abid Hasan Roni Bokshi
    university roll: 2623
    reg no: 706
*/
#include <iostream>
#include <regex>
using namespace std;
regex integer("^[0-9]+$");
bool isInteger(string str)
{
    return regex_match(str, integer) ? 1 : 0;
}
regex floatnum("^[0-9]+[.][0-9]+$");
bool isFloatnum(string str)
{
    return regex_match(str, floatnum) ? 1 : 0;
}
regex exponent("^[0-9]+[E][+-]?[0-9]+$");
regex floatexponent("^[0-9]+[.][0-9]+[E][+-]?[0-9]+$");

bool isExponent(string str)
{
    return (regex_match(str, exponent) || regex_match(str, floatexponent)) ? 1 : 0;
}
int main()
{
    while (true)
    {
        string word;
        cin >> word;
        if (isInteger(word))
        {
            cout << word << " is an integer." << endl;
        }
        else if (isFloatnum(word))
        {
            cout << word << " is a float number." << endl;
        }
        else if (isExponent(word))
        {
            cout << word << " is an exponent number." << endl;
        }
        else
            cout << word << " Not a number " << endl;
    }
    return 0;
}

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

bool isDelimiter(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}')
        return (true);
    return (false);
}
bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == '>' || ch == '<' ||
        ch == '=')
        return (true);
    return (false);
}

int main()
{
    vector<string> lines;
    string line;
    while (getline(cin, line) && line != "end")
        lines.push_back(line);
    vector<string> words;
    bool isFoundQ = 0;
    for (string line : lines)
    {
        string l = "";
        for (int i = 0; i < (int)line.size(); i++)
        {
            char c = line[i];
            if (isDelimiter(c) && !isFoundQ)
            {
                if ((c == '+' || c == '-') && i - 1 > 0 && line[i - 1] == 'E' && (line[i - 2] - '0' >= 0 && line[i - 2] - '0' <= 9))
                {
                    l += line[i];
                    continue;
                }
                if (l != "")
                    words.push_back(l);

                if (c != ' ')
                {
                    l = c;

                    if (isOperator(c))
                    {
                        i++;
                        if (i < (int)line.size() && line[i] != ' ' && isOperator(line[i]))
                        {
                            l += line[i];
                        }
                        else
                        {
                            i--;
                        }
                    }
                    words.push_back(l);
                }
                l = "";
            }
            else
            {
                if (c == '"' && !isFoundQ)
                {
                    isFoundQ = 1;
                    l += c;
                }
                else if (c == '"' && isFoundQ)
                {
                    isFoundQ = 0;
                    l += c;
                    words.push_back(l);
                    l = "";
                }
                else
                {
                    l += c;
                }
            }
        }
        if (l != "")
            words.push_back(l);
    }
    cout << "Total Number of tokens: " << words.size() << endl;
    /*
        cout << "Tokens are: " << endl;
        for (auto word : words)
        {
            cout << word << endl;
        }
    */
    return (0);
}

/*
    Title : A program that remove left recursion from a given grammer
    Author: Md. Abid Hasan Roni Bokshi
    Date : 04-12-2022
*/
#include <stdio.h>
int main()
{
    int n;
    int i, index = 3, alpha = 4;
    printf("Enter the number of Production Rules : ");
    scanf("%d", &n);
    char a, b, non_t, p[10][n];
    for (i = 0; i < n; i++)
        scanf("%s", p[i]);
    for (i = 0; i < n; i++)
    {
        non_t = p[i][0];
        if (non_t == p[i][index])
        {
            a = p[i][index + 1];
            printf("The grammer %s is left recursive\n", p[i]);
            while (p[i][index] != 0 && p[i][index] != '|')
                index++;
            if (p[i][index] != 0)
            {
                b = p[i][index + 1];
                index = index + 2;
                printf("without left recursion is:\n%c->%c", non_t, b);
                while (p[i][index] != 0)
                {
                    b = p[i][index];
                    printf("%c", b);
                    index++;
                }
                printf("%c\'", non_t);

                printf("\n%c\'->", non_t);
                while (p[i][alpha] != '|')
                {
                    printf("%c", p[i][alpha]);
                    alpha++;
                }
                printf("%c\'|ε \n", non_t);
            }
            else
            {
                printf("can't reduce");
            }
        }
        else
        {
            printf("There is no left recursion\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char g[20], first[10], second[10], modifiedg[10], newg[10], tempg[10];
    int i, j = 0, k = 0, l = 0, pos;
    printf("Enter Production as A -> alpha_Beta_1 | alpha_beta_2 :\nA -> ");
    gets(g);
    for (i = 0; g[i] != '|'; i++, j++)
        first[j] = g[i];
    first[j] = '\0';
    for (j = ++i, i = 0; g[j] != '\0'; j++, i++)
        second[i] = g[j];
    second[i] = '\0';
    for (i = 0; i < strlen(first) || i < strlen(second); i++)
    {
        if (first[i] == second[i])
        {
            modifiedg[k] = first[i];
            k++;
            pos = i + 1;
        }
        if (first[i] != second[i])
            break;
    }
    for (i = pos, j = 0; first[i] != '\0'; i++, j++)
        newg[j] = first[i];
    newg[j++] = '|';
    for (i = pos; second[i] != '\0'; i++, j++)
        newg[j] = second[i];
    modifiedg[k] = 'A';
    modifiedg[++k] = '\0';
    newg[j] = '\0';
    printf("\nThe Grammer Without Left Factoring : \n");
    printf(" A -> %s\'\n", modifiedg);
    printf(" A\'-> %s\n", newg);
    return 0;
}

