class Fred : public QObject {
    Q_OBJECT
private slots:
    void foo();
};
void Fred::foo() { }