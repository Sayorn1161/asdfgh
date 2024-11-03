template <typename T>
class Array : public IPrint {
public:
    void add(const T& element) {
        elements.push_back(element);
    }

    void print() const override {
        for (const auto& element : elements) {
            element->print();
        }
    }

private:
    std::vector<T> elements;
};

class Team : public IPrint {
public:
    void addUnit(Unit* unit) {
        units.add(unit);
    }

    void print() const override {
        units.print();
    }

private:
    Array<Unit*> units;
};
