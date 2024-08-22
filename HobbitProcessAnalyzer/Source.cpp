#include"HobbitProcessAnalyzer.h"
#include <iomanip>
int main()
{
	HobbitProcessAnalyzer hobbitProcessAnalyzer;

	std::vector<uint32_t> objs = hobbitProcessAnalyzer.getAllObjects();
	std::cout << std::hex;
	
	/*for (uint32_t obj : objs)
	{
		std::cout <<"ObjAddress: " << obj << std::endl;
		uint64_t objGUID = hobbitProcessAnalyzer.readData<uint64_t>(obj + 0x8, 8);
		std::cout << "GUID: " << objGUID << std::endl;
		uint32_t objAddrsFromGUID = hobbitProcessAnalyzer.findGameObjByGUID(objGUID);
		std::cout << "ObjAddress from GUID: " << objAddrsFromGUID << std::endl;
	}*/
	float input;
	while (std::cin >> input)
	{
		std::vector<uint32_t> found = hobbitProcessAnalyzer.searchProcessMemory(input);
		for (uint32_t e : found)
		{
			std::cout << e << std::endl;
		}
		std::cout << "ALL" << std::endl;
	}
	std::cout << "Process!" << std::endl;
}