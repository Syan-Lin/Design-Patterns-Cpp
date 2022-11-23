# Design-Patterns-Cpp
C++11 实现设计模式

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

> 在系统中尽量使用关联关系来替代继承关系，因此大部分结构型模式都是对象结构型模式。
> 继承是强耦合的，关联是弱耦合

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
