/*
 * ========================= srcs_script.h ==========================
 *                          -- tpr --
 *                                        CREATE -- 2018.12.10
 *                                        MODIFY -- 
 * ----------------------------------------------------------
 *   脚本区 公共资源 存储地
 * ----------------------------
 */
#ifndef _TPR_SRC_SCRIPT_H_
#define _TPR_SRC_SCRIPT_H_

//-------------------- CPP --------------------//
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set> 
#include <functional> 
#include <map>

//------------------- Libs --------------------//
#include "tprDataType.h" 

//-------------------- Engine --------------------//
#include "GameObj.h" //- goSpecId_t


namespace ssrc{ //------------------ namespace: ssrc -------------------------//

//-- 正反表 --
inline std::unordered_map<u32, std::string> acionHdle_typeId_names;
inline std::unordered_map<std::string, u32> acionHdle_name_typeIds;

//-- 正反表 --
inline std::unordered_map<goSpecId_t, std::string> go_specId_names;
inline std::unordered_map<std::string, goSpecId_t> go_name_specIds;



}//---------------------- namespace: ssrc -------------------------//
#endif 

