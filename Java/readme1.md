imple Theory: How Java Code Runs
You write Java code in a .java file (like Hello.java).

JDK compiler (javac) converts that code into bytecode (a .class file).
🔸 Bytecode is not human-readable, but it’s not machine code either.

JVM (Java Virtual Machine) reads the bytecode and converts it into native machine code based on your system (Windows, Mac, Linux, etc.).

The native code is then executed by your computer.

🔁 Think of it like this:
Java code → translated into a middle language (bytecode) ✅

JVM → interprets or compiles that for your specific machine ✅

📦 One Code, Runs Anywhere
Because of this process, the same Java code can run on any computer that has a JVM installed. That’s why Java is called:

“Write once, run anywhere”.