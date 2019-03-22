class ResultEnsemble {
public:
    std::vector<int> &nodeResults() const;
    std::vector<int> &nodeResults();
};
class Simulator {
    int generatePinchResultEnsemble(const ResultEnsemble &power, const ResultEnsemble &ground) {
        power.nodeResults().size();
        assert(power.nodeResults().size()==ground.nodeResults().size());
    }
};