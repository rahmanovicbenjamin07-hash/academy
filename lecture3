# Merge Sort

Merge Sort is a highly efficient, comparison-based, divide and conquer sorting algorithm. It works by dividing an unsorted list into `n` sublists, each containing one element (a list of one element is considered sorted). 
Then, it repeatedly merges sublists to produce new sorted sublists until there is only one sublist remaining, which will be the sorted list.

## How it Works

The Merge Sort algorithm can be broken down into two main parts:

1.  **Divide:** The unsorted list is recursively divided into two halves until no more divisions are possible (i.e., each sublist contains only one element).

2.  **Conquer (Merge):** The sublists are repeatedly merged in a sorted manner to produce new sorted sublists. This process continues until all sublists are merged into a single sorted list.

## Step-by-Step Example

Let's illustrate Merge Sort with an example list: `[38, 27, 43, 3, 9, 82, 10]`

### 1. Divide Phase

*   **Initial List:** `[38, 27, 43, 3, 9, 82, 10]`
*   **Divide 1:** `[38, 27, 43, 3]` and `[9, 82, 10]`
*   **Divide 2:** `[38, 27]`, `[43, 3]`, `[9, 82]`, `[10]`
*   **Divide 3:** `[38]`, `[27]`, `[43]`, `[3]`, `[9]`, `[82]`, `[10]`

Now we have `n` sublists, each with one element, which are considered sorted.

### 2. Conquer (Merge) Phase

Now we start merging the sublists:

*   **Merge `[38]` and `[27]`:** `[27, 38]`
*   **Merge `[43]` and `[3]`:** `[3, 43]`
*   **Merge `[9]` and `[82]`:** `[9, 82]`
*   **`[10]` remains as is**

*   **Merge `[27, 38]` and `[3, 43]`:** `[3, 27, 38, 43]`
*   **Merge `[9, 82]` and `[10]`:** `[9, 10, 82]`

*   **Merge `[3, 27, 38, 43]` and `[9, 10, 82]`:** `[3, 9, 10, 27, 38, 43, 82]`
