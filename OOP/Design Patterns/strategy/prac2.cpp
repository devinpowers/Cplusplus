/**
 * The Strategy interface declares operations common to all supported versions
 * of some algorithm.
 *
 * The Context uses this interface to call the algorithm defined by Concrete
 * Strategies.
 */
#include<iostream>

using std::cout;
using std::endl;

#include<string>
using std::string;
#include<vector>
using std::vector;

class Strategy
{
public:
    virtual ~Strategy() {} // Deconstructor
    virtual string DoAlgorithm(const vector<string> &data) const = 0; // Pure virtual function
};

/**
 * The Context defines the interface of interest to clients.
 */

class Context
{
    /**
     * @var Strategy The Context maintains a reference to one of the Strategy
     * objects. The Context does not know the concrete class of a strategy. It
     * should work with all strategies via the Strategy interface.
     */
private:
    Strategy *strategy_;
    /**
     * Usually, the Context accepts a strategy through the constructor, but also
     * provides a setter to change it at runtime.
     */
public:
    Context(Strategy *strategy = nullptr) : strategy_(strategy)
    {
    }
    ~Context()
    {
        delete this->strategy_;
    }
    /**
     * Usually, the Context allows replacing a Strategy object at runtime.
     */
    void set_strategy(Strategy *strategy)
    {   // Setter
        delete this->strategy_;
        this->strategy_ = strategy;
    }
    /**
     * The Context delegates some work to the Strategy object instead of
     * implementing +multiple versions of the algorithm on its own.
     */
    void DoSomeBusinessLogic() const
    {
        // ...
        cout << "Context: Sorting data using the strategy (not sure how it'll do it)" << endl;
        string result = this->strategy_->DoAlgorithm(vector<string>{"a", "e", "c", "b", "d"});
        cout << result << endl;
        // ...
    }
};

/**
 * Concrete Strategies implement the algorithm while following the base Strategy
 * interface. The interface makes them interchangeable in the Context.
 */
class ConcreteStrategyA : public Strategy
{
public:
    std::string DoAlgorithm(const std::vector<std::string> &data) const override
    {
        std::string result;
        std::for_each(std::begin(data), std::end(data), [&result](const std::string &letter) {
            result += letter;
        });
        std::sort(std::begin(result), std::end(result));

        return result;
    }
};
class ConcreteStrategyB : public Strategy
{
    std::string DoAlgorithm(const std::vector<std::string> &data) const override
    {
        std::string result;
        std::for_each(std::begin(data), std::end(data), [&result](const std::string &letter) {
            result += letter;
        });
        std::sort(std::begin(result), std::end(result));
        for (int i = 0; i < result.size() / 2; i++)
        {
            std::swap(result[i], result[result.size() - i - 1]);
        }

        return result;
    }
};
/**
 * The client code picks a concrete strategy and passes it to the context. The
 * client should be aware of the differences between strategies in order to make
 * the right choice.
 */

void ClientCode()
{
    Context *context = new Context(new ConcreteStrategyA);
    std::cout << "Client: Strategy is set to normal sorting" << endl;
    context->DoSomeBusinessLogic();
    std::cout << endl;
    std::cout << "Client: Strategy is set to reverse sorting. " << endl;
    context->set_strategy(new ConcreteStrategyB);
    context->DoSomeBusinessLogic();
    delete context;
}

int main()
{
    ClientCode(); // Run Client Code
    cout << "Testing" << endl;
}