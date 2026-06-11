<!-- Octagon | DSA | Data Structures & Algorithms | C++ | Pointers | Arrays | Linked Lists | Stacks | Queues | Trees | Sorting | Searching | FAST NUCES | Artificial Intelligence | ik-awais -->

<div align="center">

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif" width="100%"/>

<!-- ANIMATED TYPING SVG -->
<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=700&size=28&duration=3000&pause=800&color=A78BFA&center=true&vCenter=true&width=700&lines=%F0%9F%A7%A0+Data+Structures+%26+Algorithms" alt="Title"/>

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=500&size=15&duration=2800&pause=900&color=A78BFA&center=true&vCenter=true&width=700&lines=Pointers+%E2%80%A2+Arrays+%E2%80%A2+Linked+Lists+%E2%80%A2+Stacks+%E2%80%A2+Queues;Trees+%E2%80%A2+Graphs+%E2%80%A2+Sorting+%E2%80%A2+Searching;FAST+NUCES+%7C+AI+3rd+Semester+%7C+2026" alt="Subtitle"/>

<br/>

[![Back to Octagon](https://img.shields.io/badge/←%20Back%20to-Octagon-6e40c9?style=for-the-badge&logo=github&logoColor=white&labelColor=0d1117)](https://github.com/ik-awais/Octagon)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-a78bfa?style=for-the-badge&logo=cplusplus&logoColor=white&labelColor=0d1117)](https://github.com/ik-awais/Octagon/tree/main/dsa)
[![Topic](https://img.shields.io/badge/Topic-DSA-7c3aed?style=for-the-badge&logo=github&logoColor=white&labelColor=0d1117)](https://github.com/ik-awais/Octagon/tree/main/dsa)
[![Members](https://img.shields.io/badge/Team-8%20Members-8b5cf6?style=for-the-badge&logo=github&logoColor=white&labelColor=0d1117)](https://github.com/ik-awais/Octagon/graphs/contributors)

<br/><br/>

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif" width="100%"/>

</div>

---

## <img src="https://media2.giphy.com/media/QssGEmpkyEOhBCb7e1/giphy.gif?cid=ecf05e47a0n3gi1bfqntqmob8g9aid1oyj2wr3ds3mg700bl&rid=giphy.gif" width="26"> About This Directory

<img align="right" src="https://media.giphy.com/media/M9gbBd9nbDrOTu1Mqx/giphy.gif" width="220"/>

This is the **DSA** workspace for the Octagon team. We study Data Structures and Algorithms here — building intuition for how data is organised, how algorithms work, and how to think about efficiency.

> *"An algorithm must be seen to be believed."* — Donald Knuth

**What we are working on here:**
- 🧠 Understanding how memory and pointers work
- 📦 Building and traversing core data structures
- 🔄 Implementing sorting and searching algorithms
- 🌲 Exploring trees, graphs, and recursion
- ⚡ Developing a sense for time and space complexity

<br clear="right"/>

---

## <img src="https://media.giphy.com/media/iY8CRBdQXODJSCERIr/giphy.gif" width="26"> Tech Stack & Tools

<div align="center">

<a href="https://skillicons.dev">
  <img src="https://skillicons.dev/icons?i=cpp,python,git,github,vscode,linux&theme=dark&perline=6" alt="Tech Stack"/>
</a>

</div>

---

## <img src="https://media.giphy.com/media/W5eoZHPpUx9sapR0eu/giphy.gif" width="26"> Folder Structure

```
📂 dsa/
│
├── 📄 README.md                    ← You are here
│
├── your-completed-file.cpp         ← completed work lives here
│
└── 📂 examples/
    └── template.cpp                ← incomplete files to pick up, complete & push
```

> Files go directly in `dsa/` once completed. `examples/` holds the templates only.

---

## <img src="https://media.giphy.com/media/VgCDAzcKvsR6OM0uWg/giphy.gif" width="26"> Coursework Roadmap

<div align="center">

```
2026 ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━▶

  [STARTED]        [LINEAR DS]        [NON-LINEAR]       [ALGORITHMS]      [ADVANCED]
      │                 │                  │                   │                │
      ▼                 ▼                  ▼                   ▼                ▼
  Pointers          Arrays             Binary Trees        Sorting          Graphs
  Memory            Linked Lists       BST                 Searching        BFS / DFS
  Addresses         Stacks             AVL Trees           Recursion        Hashing
  Arithmetic        Queues             Heaps               Divide &         Dynamic
                    Strings            Traversals          Conquer          Programming
```

</div>

---

## <img src="https://media.giphy.com/media/WFZvB7VIXBgiz3oDXE/giphy.gif" width="26"> Topics We Cover

<img align="right" src="https://media.giphy.com/media/L1R1tvI9svkIWwpVYr/giphy.gif" width="230"/>

**Foundations**

```cpp
int x = 10;
int* ptr = &x;    // ptr holds the memory address of x
cout << *ptr;     // dereference — prints 10
cout << ptr;      // prints address of x (e.g. 0x7ffee...)
int y = 20;
int* ptr2 = &y;
ptr2++;           // moves ptr2 to the next int-sized address (pointer arithmetic)
```

**Linear Data Structures**

```cpp
// Singly Linked List node
struct Node {
    int data;
    Node* next;
};
```

```cpp
// Stack — LIFO (Last In, First Out)
push(10); push(20); push(30);
pop();    // returns 30  ← last element pushed is first out
```

```cpp
// Queue — FIFO (First In, First Out)
enqueue(1); enqueue(2); enqueue(3);
dequeue();  // returns 1  ← first element enqueued is first out
```

<br clear="right"/>

<img align="right" src="https://media.giphy.com/media/f3iwJFOVOwuy7K6FFw/giphy.gif" width="210"/>

**Sorting**

```cpp
// Bubble Sort — ascending order
// Each pass bubbles the largest unsorted element to its correct position
// Time: O(n²) average and worst | Space: O(1)
for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - i - 1; j++)
        if (arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
```

**Searching**

```cpp
// Binary Search — requires a SORTED array
// Time: O(log n) | Space: O(1) iterative
int low = 0, high = n - 1;
while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == target) return mid;        // found
    else if (arr[mid] < target) low = mid + 1; // search right half
    else high = mid - 1;                       // search left half
}
return -1; // not found
```

**Trees**

```cpp
// Binary Tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};
```

<br clear="right"/>

---

## <img src="https://media.giphy.com/media/cj87CxfRtrUifF3Ryk/giphy.gif" width="26"> How to Contribute

<div align="center">
<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&size=14&duration=2500&pause=700&color=A78BFA&center=true&vCenter=true&multiline=true&width=680&height=80&lines=Branch+%E2%86%92+Pick+a+Template+%E2%86%92+Complete+It+%E2%86%92+Test+It;Commit+%E2%86%92+Push+%E2%86%92+Open+a+Pull+Request" alt="Steps Typing"/>
</div>

<br/>

### Step 1 — Create your branch

```bash
git checkout -b your-name/dsa-topic
```

**Examples:**
```bash
git checkout -b ali/linked-list
git checkout -b easha/stack-array
git checkout -b arsh/binary-search-tree
```

---

### Step 2 — Pick a template from `examples/` and complete it

Open the template file, implement the required logic, and save your completed version directly in `dsa/`.

---

### Step 3 — Compile and test before committing

```bash
g++ your-file.cpp -o test
./test
```
> Never commit code that does not compile.

---

### Step 4 — Commit with a clear message

```bash
git add .
git commit -m "feat: implement linked list with insert and delete"
```

**Commit types:**
```
feat   → new implementation
fix    → bug fix in existing code
docs   → notes or comments added
style  → formatting only
```

---

### Step 5 — Push and open a Pull Request

```bash
git push origin your-name/dsa-what-you-are-adding
```

1. Go to [github.com/ik-awais/Octagon](https://github.com/ik-awais/Octagon)
2. Click **"Compare & pull request"**
3. Write what you implemented in the PR description
4. Assign `ik-awais` as reviewer
5. Click **"Create pull request"**

---

### Step 6 — Stay in sync

```bash
git checkout main
git pull origin main
```
> Always do this before starting a new task.

---

## <img src="https://media.giphy.com/media/ZCN6F3FAkwsyOGU2RS/giphy.gif" width="26"> Contribution Rules

<img align="right" src="https://media.giphy.com/media/bGgsc5mWoryfgKBx1u/giphy.gif" width="185"/>

**Branch Naming:**
```
your-name/dsa-topic

Examples:
  ali/linked-list
  easha/stack-array
  arsh/binary-search-tree
```

**The Golden Rules:**
- ✅ Always create a branch before making changes
- ✅ Write clear commit messages
- ✅ Assign `ik-awais` as reviewer on every PR
- ✅ Respond to review comments within 48 hours
- ✅ Run `git pull origin main` before starting new work
- ❌ Never push directly to `main`
- ❌ Never merge your own PR without approval

<br clear="right"/>

---

## <img src="https://media.giphy.com/media/du3J3cXyzhj75IOgvA/giphy.gif" width="26"> Complexity Reference

<div align="center">

| Structure / Algorithm | Access | Search | Insert | Delete | Space |
|:----------------------|:------:|:------:|:------:|:------:|:-----:|
| Array | O(1) | O(n) | O(n) | O(n) | O(n) |
| Singly Linked List | O(n) | O(n) | O(1)* | O(1)* | O(n) |
| Stack | O(n) | O(n) | O(1) | O(1) | O(n) |
| Queue | O(n) | O(n) | O(1) | O(1) | O(n) |
| Binary Search Tree | O(log n) avg | O(log n) avg | O(log n) avg | O(log n) avg | O(n) |
| Bubble Sort | — | — | — | — | O(1) |
| Merge Sort | — | — | — | — | O(n) |
| Quick Sort | — | — | — | — | O(log n) avg |
| Binary Search | — | O(log n) | — | — | O(1) |

> \* Linked List insert/delete is O(1) **only when you already hold a pointer to the target node**. Finding the node first costs O(n).
>
> BST worst case (skewed/unbalanced tree) degrades to O(n) for all operations. Use AVL or Red-Black Trees for guaranteed O(log n).

</div>

---

## <img src="https://media.giphy.com/media/3oKIPnAiaMCws8nOsE/giphy.gif" width="26"> Code of Conduct

This is a safe, respectful, and collaborative learning space.

- ✅ Be kind and constructive in code reviews
- ✅ Ask questions — no question is too basic
- ✅ Help teammates when they are stuck
- ✅ Celebrate each other's wins
- ❌ Never push directly to `main`
- ❌ Never merge a PR without a review

---

<div align="center">

**University:** FAST — National University of Computer & Emerging Sciences (NUCES)
**Program:** Bachelor of Science in Artificial Intelligence
**Semester:** 3rd &nbsp;|&nbsp; **Batch:** 2025

<br/>

[![FAST NUCES](https://img.shields.io/badge/FAST-NUCES-6e40c9?style=for-the-badge&logo=academia&logoColor=white&labelColor=0d1117)](https://www.nu.edu.pk)
[![Back to Octagon](https://img.shields.io/badge/Repo-ik--awais%2FOctagon-7c3aed?style=for-the-badge&logo=github&logoColor=white&labelColor=0d1117)](https://github.com/ik-awais/Octagon)

<br/><br/>

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&size=13&duration=4000&pause=1000&color=6e40c9&center=true&vCenter=true&width=500&lines=Data+Structures+%E2%80%94+The+backbone+of+every+program.;Octagon+%7C+FAST+NUCES+%7C+AI+Cohort+%7C+2025;Think+in+structures.+Code+in+C%2B%2B." alt="Footer Typing"/>

<br/>

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif" width="100%"/>

</div>
