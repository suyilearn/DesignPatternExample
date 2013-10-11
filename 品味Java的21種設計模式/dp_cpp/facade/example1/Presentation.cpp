#include "Presentation.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example1
				{

					void Presentation::generate()
					{
						//1：从配置管理里面获取相应的配置信息
						ConfigModel *cm = ConfigManager::getInstance()->getConfigData();
						if(cm->isNeedGenPresentation())
						{
							//2：按照要求去生成相应的代码，并保存成文件
							puts("正在生成表现层代码文件");
						}
					}
				}
			}
		}
	}
}
