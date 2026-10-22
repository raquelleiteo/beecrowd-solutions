# beecrowd Solutions

My solutions to problems from the [beecrowd](https://judge.beecrowd.com/) online judge, written in C++.

This repository is part of my study plan for competitive programming: building the habit of solving problems, improving my problem-solving skills and preparing for programming contests and technical interviews.

## Structure

Solutions are organized by beecrowd category:

```
01-beginner/
02-ad-hoc/
03-strings/
04-data-structures/
05-mathematics/
06-paradigms/
07-graphs/
08-geometry/
```

Each file is named `<problem-id>.cpp` and starts with a short header:

```cpp
// beecrowd 1018 - Banknotes
// https://judge.beecrowd.com/en/problems/view/1018
// Idea: integer division by each banknote value, the remainder goes to the next one
```

## Compiling and running

```bash
g++ -std=c++17 -Wall 01-beginner/1018.cpp -o solution
./solution
```

## Progress

| # | Problem | Category | Key idea |
|---|---|---|---|
| 1018 | [Banknotes](https://judge.beecrowd.com/en/problems/view/1018) | Beginner | integer division and modulo, greedy |
| 1019 | [Time Conversion](https://judge.beecrowd.com/en/problems/view/1019) | Beginner | integer division and modulo |

## Commit convention

| Type | Use |
|---|---|
| `feat` | new accepted solution |
| `fix` | correction to a solution |
| `refactor` | code improvement without changing behavior |
| `docs` | README and comments |
| `chore` | configuration and organization |
