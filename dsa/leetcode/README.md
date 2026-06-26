# ⚔️ LeetCode Challenge

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

This is the Octagon LeetCode space. Every member attempts problems independently, references semi-solutions for guidance, and pushes their final solutions into their own directory.

> **Semi-solutions are hints, not answers. Attempt first. Peek later.**

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## 📁 Directory Structure

```
dsa/leetcode/
├── easy/
│   ├── solutions/        ← semi-solutions (reference only)
│   ├── ik-awais/            ← your personal attempt folder
│   ├── Arshkhattak/
│   └── ...
├── medium/
│   ├── solutions/
│   └── ...
└── hard/
    ├── solutions/
    └── ...
```

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## 📌 How It Works

### Step 1 — A semi-solution is dropped in `solutions/`

The maintainer pushes a reference file to the relevant difficulty's `solutions/` folder.
These are **partial solutions** — they show the approach but leave certain implementation to you.

Example:
```
dsa/leetcode/easy/solutions/1.cpp   ← reference for problem 1
```

### Step 2 — You create your own directory

Inside `easy/`, `medium/`, or `hard/`, create a folder named after your **GitHub username or preferred name**.
You only need to do this once per difficulty level.

```bash
# Example for ik-awais solving an easy problem
mkdir dsa/leetcode/easy/ik-awais
```

### Step 3 — Attempt the problem yourself

Open the LeetCode problem. Solve it without looking at the semi-solution first.

### Step 4 — Reference the semi-solution if stuck

Only after a genuine attempt, open the corresponding file in `solutions/`.
Use it as a nudge, not a copy-paste.

### Step 5 — Push your solution with the correct filename

Your file must be named using the **question number from the solutions directory**.

```
Format:   <username>_<question_number>.cpp
Example:  ik-awais_1.cpp
```

So if the semi-solution is `easy/solutions/1.cpp`, your file goes to:
```
easy/ik-awais/awais_1.cpp
```

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## 🔁 Git Workflow

```bash
# 1. Pull latest main before starting
git checkout main
git pull origin main
# (Makes sure you have the latest problems and semi-solutions)

# 2. Create your branch
git checkout -b leetcode/<username>/<difficulty>-q<number>
# Example: git checkout -b leetcode/awais/easy-q1
# (Keeps your work isolated from others)

# 3. Add your solution file in your directory
# Place it at: dsa/leetcode/easy/awais/awais_1.cpp

# 4. Stage and commit
git add dsa/leetcode/easy/awais/awais_1.cpp
git commit -m "feat(leetcode): ik-awais - easy q1 solution"
# (Saves a snapshot with a clear description)

# 5. Push and open a PR
git push origin leetcode/ik-awais/easy-q1
# Then go to GitHub → Compare & pull request
```

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## 📋 Naming Quick Reference

| Semi-solution file         | Your file (inside your folder)     |
|----------------------------|------------------------------------|
| `easy/solutions/1.cpp`     | `easy/ik-awais/ik-awais_1.cpp`     |
| `medium/solutions/3.cpp`   |`medium/coder-Retro/coder-Retro.cpp`|
| `hard/solutions/2.cpp`     | `hard/velanora/velanora_2.cpp`     |

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## 👥 Members

| GitHub Username         | Folder Name   |
|-------------------------|-------------- |
| ik-awais                |Muhanmmad Awais|
| coder-Retro             | kaido         |
| Arshkhattak             | areeba        |
| p250045-SSR             | —             |
| SyedaEasha              | easha         |
| talhazahoor39-collab    | talha         |
| velanora                | velanora      |
| waleeja07-wk            | waleeja       |

> If you prefer your GitHub username over a nickname, either works; just stay consistent across all three difficulty folders.

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## ⚠️ Rules

- Never push directly to `main` (you can't...it's banned :D)
- Never modify files inside `solutions/` — those are read-only references
- One file per problem per person
- Your file must compile before you push it

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

<p align="center">Octagon · 2026</p>