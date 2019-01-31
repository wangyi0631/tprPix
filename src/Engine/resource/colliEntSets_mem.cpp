/*
 * ========================= colliEntSets_mem.cpp ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.01.14
 *                                        MODIFY -- 
 * ----------------------------------------------------------
 *  资源管理:  colliEntSets
 * ----------------------------
 */
//-------------------- CPP --------------------//
#include <string>
#include <vector>

//-------------------- Engine --------------------//
#include "ColliEntSet.h"
#include "ColliEntSetLoader.h"
#include "srcs_engine.h" //- 所有资源

#include "debug.h" //- tmp

namespace esrc{ //------------------ namespace: esrc -------------------------//


/* ===========================================================
 *                 init_colliEntSet_tables
 * -----------------------------------------------------------
 * -- 创建 name - idx 正反表 
 * -- 目前有 16 个 collientSet 预制件 
 */
void init_colliEntSet_tables(){

    std::vector<std::string> names {
        "ces_1_1", //- 0

        "ces_2_1", //- 1
        "ces_1_2", //- 2

        "ces_2_2", //- 3

        "ces_3_2", //- 4
        "ces_2_3", //- 5
        "ces_3_3", //- 6

        "ces_4_3", //- 7
        "ces_5_3", //- 8

        "ces_4_4", //- 9
        "ces_5_4", //- 10 
        "ces_5_5", //- 11

        "ces_6_5", //- 12
        "ces_6_6", //- 13
        "ces_7_6", //- 14
        "ces_7_7"  //- 15
    };

    for( int i=0; i<16; i++ ){
       esrc::colliEntSet_name_idx.insert({ names.at(i), i });
       esrc::colliEntSet_idx_name.insert({ i, names.at(i) });
    }
}


/* ===========================================================
 *                   load_colliEntSets
 * -----------------------------------------------------------
 * -- 在游戏初始化阶段，被调用。
 * -- 统一加载并初始化 所有 colliEntSets 资源
 */
void load_colliEntSets(){

    //- ces 预制件 个数 --
    int totalSets = 16; 

    //-- 创建 ColliEntSetLoader 实例 --
    ColliEntSetLoader  loader { "colliEntSet_1.png",
                                IntVec2{ 35, 35 },
                                IntVec2{ 4, 4 },
                                totalSets };
    
    //-- 解析 图片数据，将数据存储自身容器中 --
    loader.init();

    //-- 将 loader 中的数据，手动 搬运到 全局容器中  [ copy ] --
    for( int i=0; i<totalSets; i++ ){
        esrc::colliEntSets.insert({ i, loader.get_collientSet(i) });
    }

    //-- 自动销毁 ColliEntSetLoader 实例: loader -- 
}


/* ===========================================================
 *                  debug_colliEntSets
 * -----------------------------------------------------------
 * -- 
 */
void debug_colliEntSets(){
    
    auto p = esrc::colliEntSets.begin();
    for( ; p!=esrc::colliEntSets.end(); p++ ){

        cout << "-------- " << p->first 
             << " -------->"
             << endl;
        p->second.debug();
        cout << endl;
    }
    
}






}//---------------------- namespace: esrc -------------------------//

