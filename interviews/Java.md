# Java
- [Java Environment](#java-environment)
- [OOP](#oop)
- [Basic](#basic)
- [Collections](#collections)
- [Concurrency](#concurrency)
- [Java8](#java8)
- [Java Advanced](#java-advanced)
  * [Clean code & Refactoring](#clean-code---refactoring)
  * [Java Generic](#java-generic)
  * [Java Reflection](#java-reflection)
  * [Java Socket](#java-socket)
- [Data Structure](#data-structure)
- [Algorithms](#algorithms)
  * [BigO notation](#bigo-notation)
  * [Search Algorithms](#search-algorithms)
  * [Sort Algorithms](#sort-algorithms)
  * [Graph Algorithms](#graph-algorithms)
  * [Other Algorithms](#other-algorithms)
  
## Java Environment
[Java](#java)
#### JDK, JRE & JVM
![jdk](https://github.com/linhpv96/english/blob/main/images/java/jdk1.png)
![jdk](https://github.com/linhpv96/english/blob/main/images/java/jdk2.png)
* JVM interprets Java bytecode and executes it on hardware of computer, it enables Java programs to run on any hardware platform that has a JVM installed, making Java a highly portable language.
* JRE provides runtime environment that is necessary to run Java applications on end-user machines. It includes JVM and Java class libraries that are required for running Java programs.
* JDK is a software development kit that provides a complete set of development tools for develop Java applications. It includes JRE, Java compiler which compiles source code into bytecode, debugger, and other development utilities.

#### Heap memory
* Heap is also used by JVM to store class data, arrays, and other types of data that need to be dynamically allocated during program execution.
* The garbage collector manages the heap memory by freeing up memory that is no longer being used by the program.

#### String Pool
* String pool is a memory area for storing string literals explicitly defined in the source code.
* When a new string is created with an existing literal value, JVM can return a reference to the original object instead of creating a new one.
* By reusing the same instance of a string literal from the pool, JVM saves memory by avoiding creation of duplicate objects.
* Comparing strings from pool can be faster because JVM can compare string references instead of string contents.
* Strings in pool are immutable, so it can be shared among multiple parts of a program without risk of modifications.
```java

String s1 = "hello"; // stored in String pool
String s2 = "hello"; // stored in String pool
String s3 = new String("hello"); // stored in heap

System.out.println(s1 == s2); // true because refer to same instance
System.out.println(s1 == s3); // false because s3 return new instance not in string pool

```
#### Garbage collection
* A process that automatically manages memory allocation and deallocation.
* It frees up memory by identifying unused objects in memory.
* Prevent memory leaks and other memory-related errors that can occur in long-running programs.
#### Memory leeks
* Memory leaks occur when objects are no longer needed by program, but they are not properly deallocated from memory. It can lead to performance issues or cash programs.
* Common causes of memory leaks in Java:
	* Keep references when objects are created within a method or loop and are not properly released after they are used. Prevent by set references to null when they are no longer needed.
	* Creation of large objects that are not properly released. Prevent by release objects when they are no longer needed or using object pools to reuse objects instead of creating new ones.
	* Improper use of caches, caches are not properly cleared or when they are not sized correctly. Prevent by clear caches  when they are no longer needed. 
	* Improper use of threads, threads are not properly managed or when they are not properly terminated. Prevent by use thread pool or terminate properly.
#### Compile-time & Run-time
* Compile-time refers to the process of converting source code to byte code, syntax and type errors are checked and reported.
* Run-time refers to period Java Virtual Machine (JVM) executes the compiled bytecode. At runtime, various tasks are performed by the JVM, such as loading the class files, verifying the bytecode, allocating memory, garbage collection, and handling exceptions.

## OOP
[Java](#java)
* Concepts
* Interface & Abstraction
* Overloading & Overriding
* Access Modifiers

## Basic
[Java](#java)
* Keywords
    * static
    * final
    * super & this
* Data types
    * Primitive
    * Wrapper class
    * Autoboxing & Unboxing
* Equal & HashCode
* String, StringBuffer & StringBuilder
* Association, Composition & Aggregation
* Comparable & Comparator
* Exceptions
    * Types
    * Handling
    * Throw & Throws
* File I/O
    * I/O Stream
    * Serialization & Deserialization
    * try-with-resources

## Collections
[Java](#java)
* Collections interface
* Array & ArrayList
* ArrayList, LinkedList & Vector
* HashSet, LinkedHashSet & TreeSet
* HashTable, HashMap & TreeMap
* HashMap & ConcurrentHashMap
* Stack & Queue

## Concurrency
[Java](#java)
* Synchronous, Asynchronous, Concurrent & Parallel
* Multithreaded programming
* Thread & Daemon Thread
* Thread States
* Thread Pool & Executor
* Thread-safe

## Java8
[Java](#java)
* Default method & static method
* Function interface
* Lambda Expressions
* Method References
* Stream API

## Java Advanced

### Clean code & Refactoring
[Java](#java)

### Java Generic
[Java](#java)

### Java Reflection
[Java](#java)

### Java Socket
[Java](#java)

## Data Structure
[Java](#java)
* Array
* Stack
* Queue
* Linked List
* Tree
* Graph

## Algorithms

### BigO notation
[Java](#java)


### Search Algorithms
[Java](#java)
* Linear search
* Binary search

### Sort Algorithms
[Java](#java)
* Bubble sort
* Quick sort
* Merge sort
* Insertion Sort
* Selection Sort
* Count sort

### Graph Algorithms
[Java](#java)
* Breadth-First Search (BFS)
* Depth-First Search (DFS)
* Dijkstra (Shortest-Path)

### Other Algorithms
[Java](#java)
* Recursive
* Backtracking
