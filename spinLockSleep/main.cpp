#include <atomic>
#include <thread>

using namespace std;

class SpinLock
{
public:
    SpinLock(){};

    void lock()
    {
        while(flag.test_and_set());
    }

    void unlock()
    {
        flag.clear();
    }

    ~SpinLock(){};
protected:
private:
    atomic_flag flag = ATOMIC_FLAG_INIT;
};

SpinLock spin;

void workOnResource()
{
    spin.lock();
    this_thread::sleep_for(chrono::milliseconds(500));
    spin.unlock();
}

auto main() -> int
{
    thread t1{workOnResource};
    thread t2{workOnResource};

    t1.join();
    t2.join();
    return 0;
}
