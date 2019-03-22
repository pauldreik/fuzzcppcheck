class Class {
public:
void Settings::SetSetting(QString strSetting, QString strNewVal)
{
    (*m_pSettings)[strSetting] = strNewVal;
}
private:
    std::map<QString, QString> *m_pSettings;
};