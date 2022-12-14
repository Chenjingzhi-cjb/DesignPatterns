#include <iostream>
#include "singleton.hpp"
#include "factory.hpp"
#include "builder.hpp"
#include "prototype.hpp"
#include "proxy.hpp"
#include "decorator.hpp"
#include "bridge.hpp"
#include "adapter.hpp"
#include "composite.hpp"
#include "flyweight.hpp"
#include "observer.hpp"
#include "template.hpp"
#include "strategy.hpp"
#include "responsibility.hpp"
#include "state.hpp"
#include "iterator.hpp"
#include "visitor.hpp"


using namespace std;


int main() {
    // 单例模式测试
//    SingletonTest::hungry_test();
//    SingletonTest::lazy_test();

    // 建造者模式测试
//    builder_test(true);
//    builder_test(false);
//    builder_test_smart(true);
//    builder_test_smart(false);

    // 原型模式测试
//    prototype_test();

// **********************************************************************

    // 代理模式测试
//    proxy_test();

    // 装饰器模式测试
//    decorator_test();

    // 桥接模式测试
//    bridge_test();

    // 适配器模式测试
//    adapter_test();

// **********************************************************************

    // 观察者模式测试
//    observer_test();

    // 模板模式测试
//    template_method_test();

    // 策略模式测试
//    strategy_test();

    // 职责链模式测试
//    chain_of_responsibility_test();

    // 状态模式测试
//    state_test();

    // 迭代器模式测试
//    iterator_test();

    // 访问者模式测试
//    visitor_test();

    return 0;
}
