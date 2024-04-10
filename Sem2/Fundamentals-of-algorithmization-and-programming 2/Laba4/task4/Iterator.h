
#ifndef TASK4_ITERATOR_H
#define TASK4_ITERATOR_H
template<typename T>
class Iterator{
    T* ptr;
public:
    explicit Iterator(T* point){
        ptr = point;
    }
    Iterator &operator++() {
        ++ptr;
        return *this;
    }
    T &operator*(){
        return *ptr;
    }
    Iterator &operator--(){
        --ptr;
        return *this;
    }

};
#endif //TASK4_ITERATOR_H
int Search::BinPow(int digit, int power, int mod) {
    if(power == 0) return 1;

    if(power % 2 == 1) {
        return digit * BinPow(digit, power - 1, mod) % mod;
    } else {
        int temp = BinPow(digit, power / 2, mod);
        return temp * temp % mod;
    }
}