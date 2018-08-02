# Google Test POC

# Google Test Installation
For this demo we are using Eclipse Photon as our IDE

**Installing Google Test Lib** (Note: This project already includes googleTest Lib, so you can skip to eclipse configuration)

1. Clone [GoogleTest](https://github.com/google/googletest) into a workspace

2. Create a new C++ project in Eclipse (ex: **/Users/rargarw/workspace/GooglTestDemo**) [MacOSX GCC]

3. Go to the folder where you cloned google test (ex. **/user/workspace/googletest**) & the navigate to **_/user/workspace/googletest/googletest/scripts_**

4. Now we need to run _fuse_gtest_files.py_ . use the following format
   ```
   $ ./fuse_gtest_files.py .//Users/rargarw/workspace/GooglTestDemo/{googleTestLib}
   ```
  This will create a folder name _googleTestLib_ in your C++ project.


**Eclipse IDE Configuration**

1. Right click on GoogleTestDemo _Properties->C/C++ Build->Setting->Tool Settings->GCC C++ Compiler -> Include_
2. In Include paths (-l), add path to googleTestLib, then Apply
3. Now Click _MacOS X C++ Linker -> Libraries_. Under Libraries(-I) add pthread

**NOTE: If create seperate src and test folder, follows these steps so test can find src class**

1. Assuming two folders are created **src** and **test**
2. Right click on _test(folder)->properties->GCC C++ Compiler->Includes->Include paths(-I)-> add both **googleTestLib** and **src** path_


**TEST OUTPUT**
```
[==========] Running 13 tests from 6 test cases.
[----------] Global test environment set-up.
[----------] 2 tests from SimpleClassTest
[ RUN      ] SimpleClassTest.failingTest
[       OK ] SimpleClassTest.failingTest (0 ms)
[ RUN      ] SimpleClassTest.MyClassReturnZero
[       OK ] SimpleClassTest.MyClassReturnZero (0 ms)
[----------] 2 tests from SimpleClassTest (0 ms total)

[----------] 4 tests from SquareRootTest
[ RUN      ] SquareRootTest.PositiveNos
[       OK ] SquareRootTest.PositiveNos (0 ms)
[ RUN      ] SquareRootTest.Zeros
[       OK ] SquareRootTest.Zeros (0 ms)
[ RUN      ] SquareRootTest.FailureTest
../test/SquareRootTest.cpp:24: Failure
Expected: (-1) > (n.squareroot(-22.0)), actual: -1 vs nan
[  FAILED  ] SquareRootTest.FailureTest (1 ms)
[ RUN      ] SquareRootTest.FloatingPointTest
[       OK ] SquareRootTest.FloatingPointTest (0 ms)
[----------] 4 tests from SquareRootTest (1 ms total)

[----------] 1 test from STRINGTEST
[ RUN      ] STRINGTEST.stringCompare
[       OK ] STRINGTEST.stringCompare (0 ms)
[----------] 1 test from STRINGTEST (0 ms total)

[----------] 2 tests from BASICASSERTION
[ RUN      ] BASICASSERTION.SubTest_1
[       OK ] BASICASSERTION.SubTest_1 (0 ms)
[ RUN      ] BASICASSERTION.SubTest_2
[       OK ] BASICASSERTION.SubTest_2 (0 ms)
[----------] 2 tests from BASICASSERTION (0 ms total)

[----------] 2 tests from FatalFailure
[ RUN      ] FatalFailure.success
This line will be reached
[       OK ] FatalFailure.success (0 ms)
[ RUN      ] FatalFailure.failure
../test/basicTest.cpp:33: Failure
Value of: 1==1
  Actual: true
Expected: false
[  FAILED  ] FatalFailure.failure (0 ms)
[----------] 2 tests from FatalFailure (0 ms total)

[----------] 2 tests from NonFatalFailure
[ RUN      ] NonFatalFailure.success
This line will be reached
[       OK ] NonFatalFailure.success (0 ms)
[ RUN      ] NonFatalFailure.failure
../test/basicTest.cpp:44: Failure
Expected equality of these values:
  1
  2
This line will be reached and test should fail
[  FAILED  ] NonFatalFailure.failure (0 ms)
[----------] 2 tests from NonFatalFailure (0 ms total)

[----------] Global test environment tear-down
[==========] 13 tests from 6 test cases ran. (5 ms total)
[  PASSED  ] 10 tests.
[  FAILED  ] 3 tests, listed below:
[  FAILED  ] SquareRootTest.FailureTest
[  FAILED  ] FatalFailure.failure
[  FAILED  ] NonFatalFailure.failure

 3 FAILED TESTS
```

**LAST UPDATE** Aug 1, 2018
