#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iterator>

int main() {

	std::vector<std::string> strings({ "def", "de", "fgh" });
	std::vector<std::string> queries({ "de", "imn", "fgh" });

	std::map<std::string, int> Container;
	std::map<std::string, int>::iterator itr;

	for (int i = 0; i < queries.size(); i++) {
		Container[queries[i]] = 0;
	}

	for (int j = 0; j < strings.size(); j++) {
		if (Container.count(strings[j])) {
			Container.find(strings[j])->second++;
		}
	}

	for (const auto & kv: Container) {
		std::cout << kv.first << " has value " << kv.second << std::endl;
	}

	std::cin.get();
}