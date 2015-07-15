/*ckwg +29
 * Copyright 2014-2015 by Kitware, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 *  * Neither name of Kitware, Inc. nor the names of any contributors may be used
 *    to endorse or promote products derived from this software without specific
 *    prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/// GENERATED BY CMAKE

#include <exception>

#include <maptk/config.h>
#include <vital/logger/logger.h>
#include <maptk/plugin_interface/algorithm_plugin_interface.h>
#include <vital/registrar.h>


/**
 * Assuming public registration function is defined somewhere in a linked
 * library
 */
#ifdef __cplusplus
extern "C"
{
#endif

// Always export this function
MAPTK_EXPORT
int private_register_algo_impls( kwiver::vital::registrar &reg )
{
  kwiver::vital::logger_handle_t m_logger( kwiver::vital::get_logger( "Implementation Registration" ));
  try
  {
    LOG_DEBUG( m_logger,
               "Registering algorithm implementations from module "
               "\"" MAPTK_PLUGIN_LIB_NAME "\"");
    return register_algo_impls( reg );
  }
  catch( std::exception const &e )
  {
    LOG_ERROR( m_logger, "Caught exception: " << e.what() );
  }
  catch ( ... )
  {
    LOG_ERROR( m_logger, "Caught other exception." );
  }
  return -1;
}

#ifdef __cplusplus
}
#endif
