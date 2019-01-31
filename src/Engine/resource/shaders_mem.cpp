/*
 * ========================= shaders_mem.cpp ==========================
 *                          -- tpr --
 *                                        CREATE -- 2018.12.26
 *                                        MODIFY --
 * ----------------------------------------------------------
 *  shaders  在 内存中的 管理
 * ----------------------------
 */
//-------------------- Engine --------------------//
#include "srcs_engine.h" //- 所有资源

namespace esrc{ //------------------ namespace: esrc -------------------------//

/* ===========================================================
 *                    init_shaders
 * -----------------------------------------------------------
 * -- init 游戏中 所有 shader实例
 */
void init_shaders(){

    //---- rect_sahder ----//
    rect_shader.init(); 
    rect_shader.use_program();
    rect_shader.get_uniform_location( "model" );
    rect_shader.get_uniform_location( "view" );
    rect_shader.get_uniform_location( "projection" );
    rect_shader.get_uniform_location( "texture1" );
    rect_shader.use_program();
}



}//---------------------- namespace: esrc -------------------------//
