 /*++
 Copyright (c) 2016 Microsoft Corporation

 Module Name:

  bv_bound_chk_tactic.h

 Abstract:


 Author:

 Mikolas Janota

 Revision History:
 --*/
#ifndef BV_BOUND_CHK_TACTIC_H_
#define BV_BOUND_CHK_TACTIC_H_

#include"tactical.h"
#include"params.h"
#include"ast.h"

tactic* mk_bv_bound_chk_tactic(ast_manager & m, params_ref const & p = params_ref());

/*
  ADD_TACTIC("bv_bound_chk", "attempts to detect inconsistencies of bounds on bv expressions.", "mk_bv_bound_chk_tactic(m, p)")
*/

#endif /* BV_BOUND_CHK_TACTIC_H_*/
