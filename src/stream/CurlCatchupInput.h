/*
 *  Copyright (C) 2005-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "CurlInput.h"
#include "../utils/Log.h"

namespace ffmpegdirect
{

class CurlCatchupInput : public CurlInput
{
public:
  void Reset() override;
};

} //namespace ffmpegdirect