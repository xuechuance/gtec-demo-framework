#ifndef FSLDEMOAPP_ADEMOOPTIONPARSER_HPP
#define FSLDEMOAPP_ADEMOOPTIONPARSER_HPP
/****************************************************************************************************************************************************
* Copyright (c) 2014 Freescale Semiconductor, Inc.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
*    * Redistributions of source code must retain the above copyright notice,
*      this list of conditions and the following disclaimer.
*
*    * Redistributions in binary form must reproduce the above copyright notice,
*      this list of conditions and the following disclaimer in the documentation
*      and/or other materials provided with the distribution.
*
*    * Neither the name of the Freescale Semiconductor, Inc. nor the names of
*      its contributors may be used to endorse or promote products derived from
*      this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
* ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
****************************************************************************************************************************************************/

#include <FslBase/Noncopyable.hpp>
#include <FslBase/Getopt/IOptionParser.hpp>

namespace Fsl
{
  class ADemoOptionParser
    : public IOptionParser
    , private Noncopyable
  {
  public:
    virtual void ArgumentSetup(std::deque<Option>& rOptions) override;
    virtual OptionParseResult::Enum Parse(const int32_t cmdId, const char*const pszOptArg) override;
    virtual bool ParsingComplete() override;
  protected:
    //! @brief This is just a dummy implementation for you to override, there is no need to call it
    virtual void OnArgumentSetup(std::deque<Option>& rOptions);
    //! @brief This is just a dummy implementation for you to override, there is no need to call it
    virtual OptionParseResult::Enum OnParse(const int32_t cmdId, const char*const pszOptArg);
    //! @brief This is just a dummy implementation for you to override, there is no need to call it
    virtual bool OnParsingComplete();
  };
}

#endif