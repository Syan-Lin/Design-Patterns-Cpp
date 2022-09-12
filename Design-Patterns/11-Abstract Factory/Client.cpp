#include <memory>
#include "Factory.h"
#include "Product.h"

using namespace std;

int main(){
    unique_ptr<AbstractFactory> sql(new SqlFactory()), oracle(new OracleFactory());
    std::shared_ptr<User> userQuery;
    userQuery = sql->createUserQuery();
    cout << userQuery->getData() << endl;
    userQuery->insert("user: LiMing");

    userQuery = oracle->createUserQuery();
    cout << userQuery->getData() << endl;
    userQuery->insert("user: ZhangSan");

    std::shared_ptr<Password> passwordQuery;
    passwordQuery = sql->createPasswordQuery();
    cout << passwordQuery->getData() << endl;
    passwordQuery->insert("password: 123456");

    passwordQuery = oracle->createPasswordQuery();
    cout << passwordQuery->getData() << endl;
    passwordQuery->insert("password: abcdef");

    return 0;
}
