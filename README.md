# Push_swap

## 📌 Project Overview

`push_swap` is a sorting algorithm project from the 42 school curriculum. It challenges you to sort a stack of integers using a limited set of operations and two stacks (A and B), while aiming for the **minimum number of operations**.

---

## ⚙️ Allowed Operations

You can use only these instructions to sort:

- `sa`, `sb`, `ss`: Swap the top two elements of stack A, B, or both.
- `pa`, `pb`: Push the top element from one stack to another.
- `ra`, `rb`, `rr`: Rotate stack A, B, or both upwards.
- `rra`, `rrb`, `rrr`: Reverse rotate stack A, B, or both downwards.

---

## 🧠 What I Did

### 1. **Parsing and Error Checking**
- Validated all input arguments.
- Checked for:
  - Non-digit characters
  - Integer overflows
  - Duplicate values
- Supported inputs both as:
  - Space-separated string in one argument (e.g. `"2 3 1"`)
  - Multiple arguments (e.g. `2 3 1`)

### 2. **List Management**
- Converted input into a singly linked list (`t_Node`).
- Stored both `data` (original value) and `index` (for radix sort).
- Wrote utility functions for list operations: append, size, free, etc.

### 3. **Sorting Algorithms**
- **For 2–5 elements**: Hardcoded efficient sorting strategies using allowed operations only.
- **For >5 elements**: Implemented **Radix Sort** based on index and bit manipulation.

### 4. **Indexing**
- Created a copy of input values in an array.
- Sorted it to assign an index to each value.
- Stored the index in the `t_Node` struct to use in radix sort.

### 5. **Radix Sort**
- Calculated the maximum number of bits required.
- For each bit, performed `rotate_a` or `push_b` based on that bit.
- Pushed everything back from stack B to A after each pass.

---

## 🧪 Testing

- Verified sorted output using the official `checker_linux` binary.
- Ensured memory leaks were handled (especially for split arguments).
- Tested with 2 to 500+ unique values using multiple permutations.

---

## ✅ How to Use

```bash
make                # Compiles the push_swap binary
./push_swap [args]  # Example: ./push_swap 2 1 3 6 5 8
