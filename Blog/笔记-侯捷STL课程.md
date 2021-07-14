## traits
traits是人为制造的特性萃取机制，是加的中间层。
1. `class(template)iterators`都有能力定义自己的associated types。
2. `Non` class(template)iterators，即`native pointer`，无法定义自己的associated types，但其实很直观。

`iterators`必须有能力回答`algorithms`的提问，但是`native pointer`（被视为一种退化的iterator）并不能回答，因此由traits来回答。

---

## 关键字auto

```cpp
list<string> c;
...
list<string>::iterator ite;
ite = ::find(c.begin(), c.end(), target);
```

可以写为

```cpp
list<string> c;
...
auto ite = ::find(c.begin(), c.end(), target);
```

---

## HashTable的separate chaining（分离链接法）
将冲突的元素放在同一位置的链表里，但是链表也不能太长。

stack和queue从技术上被称为容器适配器（container adapter）

---

## 分配器
allocator调用的是operator new()，而operator new()调用的又是malloc，因此分配内存最终调用的是malloc。调用malloc会出现overhead的情况，即实际数据占的内存空间比例小。

在VC6中，allocator只是以 **::operator new** 和 **::operator delete**完成allocator()和deallocator()没有任何特殊设计。

空间配置函数allocate()首先判断区块大小，如果大于128 bytes就调用第一季配置器，如果小于128 bytes就检查对应的free list。（按照8的倍数进行调整。）

---

## deque如何模拟连续空间
见ipad的源码截图

stack和queue（被称为适配器）都是默认以deque作为底层结构。
1. stack可以以vector作为底层结构，但是**queue不行**，因为无法执行pop操作。
2. stack和queue都不能选择set或map作为底层结构，因为无法转调用一些函数，如`push back, pop back, back`


---

## 红黑树
桥接模式（handle/body）？？？
在handle里有一个东西表现“实现手法”，这个实现手法在body具象化。

## 容器map的独特的operator[]
1. 传回指定key值所对应的data
2. 如果该指定的key值不存在，就创建一个

## lower_bound
lower_bound是二分搜寻法（binary search）的一种。
1. 如果找到了指定值（可能有多个重复），返回第一个指定值的位置。
2. 如果找不到指定值，lower_bound会传回最适合放指定值的位置。


## 容器hashtable
当元素个数**大于**hashtable篮子（buckes）的数量时，就要rehashing，扩充成接近2倍的容量（质数）

每一个hashtable的本身字节数是19，又因为（对齐）的原因，调整为4的倍数，所以是20个字节。

## 算法algorithm
从语言层面讲，除了Algorithms是function template，其余的全都是class template。

算法Algorithms对容器Containers一无所知，所以他所需要的一切信息都从迭代器iterators取得。也就是说迭代器iterators（由Containers提供）必须能够回答Algorithms的所有提问，才能搭配该Algorithms的所有操作。

## 仿函数的条件functors的可适配（adaptable）条件
STL规定每个Adaptable functions都应该挑选适当者继承之，因为Function adapter将会向其提问。

## 一些adapter
binder2nd
not1
bind


## sort
数据量大时采用Quick sort，分段递归排序，一旦分段后的数据量小于某个门槛，为避免Quick sort的递归调用带来过大的额外负担（overhead），就改用Insertion sort。如果递归层次过深，还会改用Heap sort。

Insertion sort以双层循环的形式进行，外循环遍历整个序列，每次迭代决定出一个子空间：内循环遍历子区间，将子区间内的每一个“逆转对”倒转过来。所谓“逆转对”是指任意两个迭代器i,j，有*i > *j。


Quick sort是目前已知最快的排序法，平均复杂度O(n log N)，最坏的情况下将达O(N^2).

- 步骤：
1. 取S中的任何一个元素，当作枢轴(pivot)v。
2. 将S分割为L,R两段，使L内的每一个元素都小于或等于v，R内的每一个元素都大于或等于v
3. 对L，R递归执行Quick sort。

- 注意：任何一个元素都可以被选来当作枢轴，为了避免“元素当初输入时不够随机”所带来的恶化效应，最理想最稳当的方式就是取整个序列的头、尾、中央三个位置的元素，以其中值作为枢轴。这种做法称为median-of-three partitioning（三点中值）。