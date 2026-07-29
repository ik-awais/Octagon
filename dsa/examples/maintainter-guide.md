# 🚀 Pull Request Review & Management Guide

This guide outlines the standard workflow for reviewing, managing, and merging Pull Requests (PRs) effectively while avoiding conflicts.

---

## 🔍 Reviewing Pull Requests
1. Go to the **Pull Requests** tab in the repository.
2. Click on a PR to open it.
3. Click the **"Files changed"** tab to view the additions and modifications.
4. **Checklist for Review:**
   - [ ] Is the file in the correct folder?
   - [ ] Does the content match the issue requirements?
   - [ ] Is the commit message formatted correctly?
   - [ ] Are there any typos or broken markdown?

---

## 🛠️ Requesting Changes
If something needs fixing before the PR can be merged:
1. Click **"Review changes"** (located at the top right of the *Files changed* tab).
2. Select **"Request changes"**.
3. Write a specific, kind, and constructive comment explaining exactly what needs to be fixed.
4. Click **"Submit review"**.

> 💡 *Note: The collaborator will fix the issues and push again to the same branch. The PR will update automatically.*

---

## ✅ Approving a Pull Request
Once everything looks good and passes the checklist:
1. Click **"Review changes"**.
2. Select **"Approve"**.
3. Optionally, leave a positive or encouraging comment.
4. Click **"Submit review"**.

---

## 🔀 Merging Pull Requests
After the PR has been approved:
1. Scroll down to the bottom of the PR page.
2. Click **"Merge pull request"**.
3. *Tip:* Use **"Squash and merge"** to keep a clean, linear history for simple tasks.
4. Click **"Confirm merge"**.
5. Click **"Delete branch"** to keep the repository clean and tidy.

---

## ⚠️ Avoiding Merge Conflicts
These issues are designed so each collaborator edits a different file, which eliminates conflicts in Sprint 1. To keep this pattern, follow these guidelines:

* **Assign one file per person per issue.**
* If two people must edit the same file, have them coordinate the order: *Person A merges first, then Person B pulls `main` before pushing.*
* Always use `git pull origin main` before every push.

### 🔧 Resolution Sequence
If a conflict does occur, send the collaborator this exact command sequence to resolve it safely:

```bash
git checkout main
git pull origin main
git checkout their-branch
git merge main

# Resolve conflicts in your code editor
git add .
git commit -m "chore: resolve merge conflict with main"
git push origin their-branch