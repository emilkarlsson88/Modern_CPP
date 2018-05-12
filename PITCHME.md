@title[Code Presenting]
# Modern 
# C++

---
@title[Working With Code Blocks]

#### Tools and Best Practic 

### You Need To Know!

![Press Down Key](assets/down-arrow.png)
+++
---?image=assets/google_the_error_message.jpg&size=auto 50%
---?image=copy_and_pasting_from_stack_overflow.jpg&size=auto 50%
---
@title[Main Points]

###### <p> **compiler warnings**
###### <p> **clang-tidy** and **clang-format**
###### <p> **cppcheck**
###### <p> **sanitizer**

---

#### **compiler warnings** 


---

#### **clang-tidy** and **clang-format**
![Press Down Key](assets/down-arrow.png)
+++
**Clang-tidy** is a clang-based C++ “**linter**” tool.
<p> Its purpose is to provide an extensible framework for diagnosing and **fixing typical programming errors**, like style violations, interface misuse, or bugs that can be deduced via **static analysis**.

+++?code=modern_cpp_ex/clang_tidy_checks/demo_orig.cpp&lang=cpp
@[7,12](Should use override specifier)
@[17-18](Boilderplate code)
@[23-24](Boilderplate code)
@[31-32](Risk of out-of-bound access => Undefined Behavior)
---
#### **cppcheck**
![Press Down Key](assets/down-arrow.png)
+++
**Cppcheck** is a **static analysis** tool for C/C++ code.
<p> It provides unique code analysis to detect bugs and focuses on detecting undefined behaviour and dangerous coding constructs.

---

#### **sanitizer**
---
