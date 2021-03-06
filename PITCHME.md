---
@title[Working With Code Blocks]
#### Modern C++
### Tools and Best Practic
#### You Need To Know!
![Image-Relative](https://media.giphy.com/media/3hQ0hZDo4QhR6/giphy.gif)
+++
![Image-Relative](https://media.giphy.com/media/PerRzSEG0PuKY/giphy.gif)
"C++ makes it harder to shoot yourself in the foot [than C does], but when you
do, you blow away your whole leg!" //Stroustrup
+++?image=assets/books.jpg&size=auto 70%
+++
@title[Main Points]
![Image-Relative](https://media.giphy.com/media/3o752irJcGdztiZY0U/giphy.gif)
###### <p> **compiler warnings**
###### <p> **clang-tidy** and **clang-format**
###### <p> **cppcheck**
###### <p> **sanitizer**

---
### **compiler warnings** 
![Image-Relative](https://media.giphy.com/media/1sd2bQx5GnQf6/giphy.gif)
+++
Catch bugs early from compiler warnings.
+++?code=modern_cpp_ex/compiler_warnings/ex/Wconversion.cpp&lang=cpp
@[7](-32768 <= short <= 32767)
@[8](?)
@[8](20000 + 20000 = -25536)
+++?code=modern_cpp_ex/compiler_warnings/ex/Wshadow.cpp&lang=cpp
@[3-4](1)
@[6-7](2)
@[9](?)
@[9](1)
+++
#### **Takeaway**
- Turn the warnings as **high as possible**.
- **GCC**:
    - -Wall -Wextra -Wshadow -Wnon-virtual-dtor
    - -Wold-style-cast -Wcast-align -Wunused
    - -Worverload-virtual -pedantic 
- **MSVC**: /W4 (/Wall not recomended)
---
### **clang-tidy** and **clang-format**
![Image-Relative](https://media.giphy.com/media/36f3FuSRfoozm/giphy.gif)
+++
**Clang-tidy** is a clang-based C++ “**linter**” tool.
<p> Its purpose is to provide an extensible framework for diagnosing and **fixing typical programming errors**, like style violations, interface misuse, or bugs that can be deduced via **static analysis**.
+++
But it can also make you write modern C++!!
+++?code=modern_cpp_ex/clang_tidy_checks/demo_orig.cpp&lang=cpp
@[7,12](Should use override specifier)
@[17-20](Boilderplate code)
@[23-27](Boilderplate code)
@[29,31-33](Risk of out-of-bound access => Undefined Behavior!)
+++
**Clang-format** is a tool to **automatically format** C/C++/Objective-C code, so that you don't need to worry about **style issues** during code reviews or manually fix them.
+++?code=modern_cpp_ex/clang_tidy_checks/bugprone/misc-incorrect-roundings.cpp&lang=cpp
@[4-6,12](Round of the float value to an int)
@[5,16-17](What will it print?)
@[5,16](my_round(0.4999999702) = 1)
@[5,17](my_round(-1.399999976) = 0)
+++
#### **Takeaway**
- Enable all warnings from clang-tidy
    - -options=\*
- Which formatting style you use is less important than having a consistent style.
---
### **cppcheck**
![Image-Relative](https://media.giphy.com/media/88SCuVTIoAJ8Y/giphy.gif)
+++
**Cppcheck** is a **static analysis** tool for C/C++ code.
<p> It provides unique code analysis to detect bugs and focuses on detecting undefined behaviour and dangerous coding constructs.
+++
## Demo
![Image-Relative](https://m.popkey.co/c8f24a/dgdQR.gif)
+++
#### **Takeaway**
- Enable all warnings from cppcheck.
    - --enable=all
---
### **sanitizer**
![Image-Relative](https://media.giphy.com/media/10LBLrmqSkQHks/giphy.gif)
+++
These are **runtime analyzers** that are executed alongside your program execution that can detect:
- Memory errors
- Data races.
- Memory leaks.
- Undefined behavior.
- etc.
+++
## Demo
![Image-Relative](https://media.giphy.com/media/3ofT5MEbCFuEPtVy3m/giphy.gif)
+++
#### **Takeaway**
- Can catch bugs that static analysis tools can't see.
- or humans (you can't debug race conditions!).
- You need to define a "scenario" when the problem occurred.
---
![Image-Relative](https://media.giphy.com/media/hcpVSCSwDcKju/giphy.gif)

