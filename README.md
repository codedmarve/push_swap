# 42 Push_Swap

<img width="481" alt="Screen Shot 2023-10-15 at 5 22 49 PM" src="https://github.com/codedmarve/push_swap/assets/93935663/89098c9f-141a-4f3b-adf8-92a72387f7cd">

## Overview

Push_Swap is a sorting algorithm project at 42vwolfburg that aims to sort a stack of integers using a limited set of operations. The goal is to sort the stack with the minimum possible number of operations. This project challenges your algorithmic skills and ability to optimize code for efficiency.

## Project Details

- **Language Used:** C
- **Team Size:** Solo project
- **Duration:** 3 weeks

## 42 Student?
If you are a 42 student and you still don't understand what is expected of you in this project or you don't know how to start, then stay tuned, I will drop a very detailed step-by-step explanation on how I approached this project. In other not to spoil the fun and also help you become confident of your coding skills, you won't be seeing any codes but only logical expalnations. I will also give you step-by-step tasks to help you complete the the project.

## Rules and Operations
The project follows the following rules and operations:

- **Stacks:** Two stacks named A and B.
- **Operations Allowed:**
  - **sa:** swap a - swap the first 2 elements at the top of stack A.
  - **sb:** swap b - swap the first 2 elements at the top of stack B.
  - **ss:** sa and sb at the same time.
  - **pa:** push a - take the first element at the top of B and put it at the top of A.
  - **pb:** push b - take the first element at the top of A and put it at the top of B.
  - **ra:** rotate a - takes the first element at the top of A and put it at the bottom of A.
  - **rb:** rotate b - takes the first element at the top of B and put it at the bottom of B.
  - **rr:** ra and rb at the same time.
  - **rra:** reverse rotate a - takes the last element at the bottom of A and put it at the top of A.
  - **rrb:** reverse rotate b - takes the last element at the bottom of B and put it at the top of B.
  - **rrr:** rra and rrb at the same time.

```shell
Example of Usage
$ ./push_swap 4 67 1 2 9
SA
RRA
PB
RRA
PB
RRR
```

## Grading
- With **1** number, the programme should **do nothing**
- With **2** numbers, the programme should sort them in just **1 move**
- With **3** numbers, the programme should sort them with not more than **3 moves**
- With **5** numbers, the programme should sort them with not more than **12 moves** 
- With **100** numbers:
  - less than **700 moves** give **5 points**
  - less than **900 moves** give **4 points**
  - less than **1100 moves** give **3 points**
  - less than **1300 moves** give **2 points**
  - less than **1500 moves** give **1 point**
- With **500** numbers:
  - less than **5500 moves** give **5 points**
  - less than **7000 moves** give **4 points**
  - less than **8500 moves** give **3 points**
  - less than **10000 moves** give **2 points**
  - less than **11500 moves** give **1 point**

If you can get score at least 80% in the project after 3 evaluations then you pass the project.

