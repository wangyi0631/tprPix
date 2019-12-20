/*
 * ========================= goSpecIds.cpp ==========================
 *                          -- tpr --
 *                                        CREATE -- 2018.12.23
 *                                        MODIFY -- 
 * ----------------------------------------------------------
 *   将 具象go species 注册到 
 *    ssrc::go_specId_names 
 *    ssrc::go_name_specIds 中去
 * ----------------------------
 */
//-------------------- CPP --------------------//
#include <string>

//-------------------- Engine --------------------//

#include "GoSpecFromJson.h"
#include "UIGoSpecFromJson.h"


#include "esrc_state.h"

//-------------------- Script --------------------//
#include "Script/gameObjs/allGoes.h"
#include "Script/uiGos/allUIGoes.h"

#include "Script/json/json_all.h"



using namespace std::placeholders;

//#include "tprDebug.h" //- tmp

//namespace goSpecIds_inn {//-------------- namespace: goSpecIds_inn ---------------------
//}//------------------------- namespace: goSpecIds_inn end -------------------


/* ===========================================================
 *                   onGoSpecIds_SignUp   
 * -----------------------------------------------------------
 * 
 */
void onGoSpecIds_SignUp(){

    goSpecId_t   id {};

    //==================================//
    tprAssert( esrc::is_setState("json_gameObj") );
    tprAssert( esrc::is_setState("json_uiGo") );


    //================ Goes ==================//
    GoSpecFromJson::insert_2_initFuncs( "oneEyeBoy",      std::bind( &gameObjs::OneEyeBoy::init, _1, _2 ) );


    //-------------------//
    //     artifacts
    //-------------------//
    GoSpecFromJson::insert_2_initFuncs( "fence",      std::bind( &gameObjs::Fence::init, _1, _2 ) );

    //-------------------//
    //        tree
    //-------------------//
    GoSpecFromJson::insert_2_initFuncs( "cactus",        std::bind( &gameObjs::Cactus::init, _1, _2 ) );

    GoSpecFromJson::insert_2_initFuncs( "figTree",        std::bind( &gameObjs::FigTree::init, _1, _2 ) );
    GoSpecFromJson::insert_2_initFuncs( "pineTree",        std::bind( &gameObjs::PineTree::init, _1, _2 ) );
    GoSpecFromJson::insert_2_initFuncs( "poplarTree",      std::bind( &gameObjs::PoplarTree::init, _1, _2 ) );

    //-------------------//
    //        bush
    //-------------------//
    GoSpecFromJson::insert_2_initFuncs( "mushroom",        std::bind( &gameObjs::Mushroom::init, _1, _2 ) );

    
    GoSpecFromJson::insert_2_initFuncs( "bushOth",           std::bind( &gameObjs::BushOth::init, _1, _2 ) );
    


    GoSpecFromJson::insert_2_initFuncs( "grass",     std::bind( &gameObjs::Grass::init, _1, _2 ) );

    //-------------------//
    //        rock
    //-------------------//
    GoSpecFromJson::insert_2_initFuncs( "rock",       std::bind( &gameObjs::Rock::init, _1, _2 ) );

    //-------------------//
    //    mapSurface
    //-------------------//
    GoSpecFromJson::insert_2_initFuncs( "floorGo",      std::bind( &gameObjs::FloorGo::init, _1, _2 ) );

    //-------------------//
    //        oth
    //-------------------//
    GoSpecFromJson::insert_2_initFuncs( "playerGoCircle",  std::bind( &gameObjs::PlayerGoCircle::init, _1, _2 ) );
    GoSpecFromJson::insert_2_initFuncs( "groundGo",        std::bind( &gameObjs::GroundGo::init, _1, _2 ) );
    GoSpecFromJson::insert_2_initFuncs( "fieldRim",        std::bind( &gameObjs::FieldRim::init, _1, _2 ) );

     //...

    //================ UIGoes ==================//
    UIGoSpecFromJson::insert_2_initFuncs( "button_sceneBegin_archive_2", std::bind( &uiGos::Button_SceneBegin_Archive::init, _1, _2 ) );
    UIGoSpecFromJson::insert_2_initFuncs( "button_sceneBegin_pointer_2", std::bind( &uiGos::Button_SceneBegin_Pointer::init, _1, _2 ) );



    //cout << "--- onGoSpecIds_SignUp(). DONE. ---" << endl; 
}



//namespace goSpecIds_inn {//------------------- namespace: goSpecIds_inn ---------------------
//}//------------------------- namespace: goSpecIds_inn end -------------------


//-- 仅用于流程测试 
void onStart_test(){
    //cout << "--- onStart_test(). DONE. ---" << endl;
}



