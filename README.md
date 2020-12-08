# Working Effectively With Legacy Code
- the source code snippet in the Michael C. Feathers book which can runnable now.
- there are two subprojects  
    - one for Java
    - another for C&C++ 
    
    
# seam(接缝)
程序中一些特殊的点，在这些点上，你无需做任何修改，就可以达到改变程序行为的目的
## object seam(对象接缝)
cpp/biz/src/seam/CAsyncSslRec

com/uj/seam/objectseam/
## pre-processing seam(预处理接缝)
cpp/biz/src/preprocessing_seams
## linked seam(连接接缝)
cpp/biz/src/seam/linked_seam

com/uj/seam/linkedseam/

# I Don't Have Much Time and I Have to Change It（时间紧迫，但必须需改）
使用这些技术的时候要小心，虽然是在系统中添加已被测试的代码，然而除非你用测试覆盖了所有调用这些代码的代码，否则还是没有对这些代码的使用进行测试，所以，要小心使用
## sprout method(新生方法)
只要你发现待添加的功能可以写成一块独立的代码，或者暂时还没法用测试来覆盖待修改的方法时，建议采用新生方法；

新生方法可以使用TDD进行驱动

com.uj.sprout.method
## sprout class(新生类)
两种情况使用新生类
- 进行的修改迫使你为某个类添加一个全新的职责
- 小小的修改却无法将现有的类放入测试夹具

cpp/biz/src/SproutClass
## wrap method(包装方法)
当需要添加行为的时候，可以考虑不那么纠缠的方式

com/uj/wrap/method
## wrap class(包装类)
- style1 extract implementor or extract interface

com/uj/wrap.classes.s1/LoggingEmployee
- style2 decorator

com/uj/wrap.classes.s2/StepNotifyingController
- style3 use another class to wrap

com/uj/wrap.classes.s3/LoggingPayDispatcher

## Programming by Difference(差异化编程)
- 使用新的子类或者接口实现类来实现新的需求改动

com/uj/programming.by.difference

# I Can't Get This Class into a Test Harness(无法把类放到测试用具中)
## The Case of the Irritating Parameter(恼人的参数)
- Pass Null(传递空值)
- Extract Interface(提取接口)
-  Subclass and Override Method(创建子类并重写方法)
## The Case of the Hidden Dependency(具有隐藏依赖的情况)
- Parameterize Constructor(参数化构造器)
- Extract and Override Getter(提取并重写getter方法)
- Extract and Override Factory Method(提取并重写工厂方法)
- Supersede Instance Variable(取代实例变量)
## The Case of the Construction Blob(構建blob的情況)
- 参数太多就不好使用参数化构造器
- 在构造函数中可以使用Extract and Override Factory Method
-  Supersede Instance Variable(就是setter)，此方法不推荐使用，除非没有别的办法
## The Case of the Irritating Global Dependency(恼人的全局依赖)
单例模式就是一个明显的全局依赖
- Parameterize Constructor 
- Parameterize Method 
-  Extract and Override Call
-  Subclass and Override Method
-  Introduce Static Setter 
- Extract Interface

com/uj/resetSingleton
## The Case of the Onion Parameter(洋葱皮参数)
- Pass Null 
-  Extract Interface 
-  Extract Implementer
## The Case of the Aliased Parameter(别名参数)
- Subclass and Override Method 

# I Can't Run This Method in a Test Harness(无法在测试用具中运行方法)
- Expose Static Method
- Break Out Method Object
## The Case of the Hidden Method
- this is for how to test private method.
