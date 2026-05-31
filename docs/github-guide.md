# GitHub Collaboration Guide — Octagon Team

## Prerequisites

- Git installed
- GitHub account created
- Collaborator invitation accepted

---

## Clone

Cloning downloads a full copy of the repository to your local machine.

```bash
git clone https://github.com/ik-awais/Octagon.git
cd Octagon
```

---

## Branch

A branch is an isolated workspace. Always create a new branch before making changes. **Never work directly on `main`.**

```bash
# Create and switch to a new branch
git checkout -b your-name/feature-name

# Example
git checkout -b ali/add-intro
```

---

## Commit

A commit saves a snapshot of your changes with a message describing what you did.

```bash
# Stage all changed files
git add .

# Or stage a specific file
git add members/ali.md

# Commit with a message
git commit -m "docs: add Ali's introduction file"
```

### Commit Message Format

```
type: short description
```

| Type | Use For |
|------|---------|
| `feat` | New features |
| `fix` | Bug fixes |
| `docs` | Documentation changes |
| `style` | Formatting, no logic change |
| `refactor` | Code restructuring |
| `chore` | Maintenance tasks |

**Examples:**

```
docs: add personal introduction for Ali
feat: add hello world program in C++
chore: update .gitignore
```

---

## Push

Push sends your local branch to GitHub.

```bash
git push origin your-branch-name

# Example
git push origin ali/add-intro
```

If pushing a new branch for the first time:

```bash
git push --set-upstream origin ali/add-intro
```

---

## Pull

Pull downloads the latest changes from GitHub into your current local branch.

```bash
git pull origin main
```

> Always pull from `main` before starting new work to stay up to date.

---

## Pull Request (PR)

A Pull Request is a formal request to merge your branch into `main`. It allows the team to review your code before it is merged.

**Steps:**

1. Push your branch to GitHub.
2. Go to the repository on GitHub.
3. Click **"Compare & pull request"**.
4. Write a clear title and description.
5. Assign **ik-awais** as reviewer.
6. Click **"Create pull request"**.

---

## Merge

Merging combines your branch into `main`. The maintainer (**ik-awais**) will merge your PR after approval.

---

## Fetch

Fetch downloads remote changes without applying them. Useful to check what others have done.

```bash
git fetch origin
```

---

## Syncing Your Branch with Main

Before opening a PR, sync your branch with the latest `main` to avoid conflicts.

```bash
git checkout main
git pull origin main
git checkout your-branch-name
git merge main
```

If conflicts appear, open the affected file(s), resolve the conflict markers, then:

```bash
git add .
git commit -m "chore: resolve merge conflict"
git push origin your-branch-name
```