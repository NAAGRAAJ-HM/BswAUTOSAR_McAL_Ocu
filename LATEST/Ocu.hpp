#pragma once
/******************************************************************************/
/* File   : Ocu.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstOcu.hpp"
#include "CfgOcu.hpp"
#include "Ocu_core.hpp"
#include "infOcu_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Ocu:
      INTERFACES_EXPORTED_OCU
      public abstract_module
   ,  public class_Ocu_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstOcu_Type* lptrConst = (ConstOcu_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, OCU_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, OCU_CONST,       OCU_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   OCU_CONFIG_DATA, OCU_APPL_CONST) lptrCfgModule
      );
      FUNC(void, OCU_CODE) DeInitFunction (void);
      FUNC(void, OCU_CODE) MainFunction   (void);
      OCU_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_Ocu, OCU_VAR) Ocu;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

