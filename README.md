# Design-Patterns-Cpp
C++11 实现设计模式

### 设计模式原则
**单一职责原则**
一个类只做一件事、只负责一项职责，职责的拆分和分离是一种解耦方式。

**开闭原则**
代码对拓展开放，但对修改封闭，也就是说，可以对一个类进行拓展，但不能修改原有的逻辑和代码。

**里氏替换原则**
子类可以扩展父类的功能，但不能改变原有父类的功能，也就是说，对调用者来说，子类可以完全替换父类而不影响功能。

**依赖倒转原则**
上层模块不应该依赖底层模块，两者应依赖其抽象；抽象不应该依赖细节，细节应该依赖抽象，即类之间交互尽量使用抽象（接口）。

**迪米特法则**
如果两个类不必彼此直接通信，那么这两个类就不应当发生直接的相互作用（聚合）。如果其中一个类需要调用另一个类的某一个方法的话，可以通过第三者转发这个调用。一个对象应该对其他对象有最少的了解，据此进行解耦。

**合成/聚合复用原则**
优先使用对象的合成或聚合，而不是类的继承，继承是一种强耦合关系，而聚合是一种弱耦合。

**接口隔离原则**
实现高内聚低耦合，对外的接口尽可能精简，不暴露对客户端无用的接口。

### 创建型模式
创建型模式抽象封装了实例化的过程，用户无需知道所使用对象具体是如何实例化的以及具体的对象细节，只需要知晓抽象类所定义的接口即可。而因为所使用的是接口，也就带来了松耦合，依赖接口而不是依赖过程，使整个系统的设计更加符合单一职责原则。

创建型模式在创建什么，由谁创建，何时创建等方面都为软件设计者提供了尽可能大的灵活性。创建型模式隐藏了类的实例的创建细节，通过隐藏对象如何被创建和组合在一起达到使整个系统独立的目的。
- [抽象工厂模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/11-Abstract%20Factory)
- [建造者模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/9-Builder)
- [工厂模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/5-Factory)
- [原型模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/6-Prototype)
- [单例模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/17-Singleton)

### 结构型模式
结构型模式通常用于对现有的类进行复用或拓展，主要表现为类或者对象结合在一起形成更大的结构，就像搭积木，可以通过简单积木的组合形成复杂的、功能更为强大的结构。
- [适配器模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/13-Adapter)
- [桥接模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/18-Bridge)
- [组合模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/15-Composite)
- [装饰模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/3-Decorator)
- [外观模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/8-Facade)
- [享元模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/22-Flyweight)
- [代理模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/4-Proxy)

> 在系统中尽量使用聚合关系来替代继承关系，因此大部分结构型模式都是对象结构型模式。继承是强耦合，聚合是弱耦合。

### 行为型模式
行为型模式是对在不同的对象之间划分责任和算法的抽象化。

通过行为型模式，可以更加清晰地划分类与对象的职责，并研究系统在运行时实例对象之间的交互。在系统运行时，对象并不是孤立的，它们可以通过相互通信与协作完成某些复杂功能，一个对象在运行时也将影响到其他对象的运行。
- [观察者模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/10-Observer)
- [模板方法](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/7-Template%20Method)
- [命令模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/19-Command)
- [状态模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/12-State)
- [职责链模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/20-Chain%20of%20Responsibility)
- [解释器模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/23-Interpreter)
- [中介者模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/21-Mediator)
- [访问者模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/24-Visitor)
- [策略模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/2-Strategy)
- [备忘录模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/14-Memento)
- [迭代器模式](https://github.com/Syan-Lin/Design-Patterns-Cpp/tree/main/Design-Patterns/16-Iterator)

### 参考资料
- 《图解设计模式》
- 《大话设计模式》
- [图说设计模式](https://github.com/me115/design_patterns)
