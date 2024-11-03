class Unit : public IPrint {
public:
    virtual void action() = 0;

    void print() const override {
        // Реалізація друку для об'єктів класу Unit
    }

    virtual ~Unit() = default;
};
