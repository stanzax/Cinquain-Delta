/*
 * Copyright (C) 2012 Jinglei Ren <jinglei.ren@stanzax.org>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

//
//  delta_decoder.cpp
//  Cinquain-Delta
//
//  Created by Jinglei Ren <jinglei.ren@gmail.com> on 2/22/12.
//

#include "delta_decoder.h"

CinquainDecoder::CinquainDecoder() {
  output_ = 0;
}

offset_t CinquainDecoder::Decode(char *reference, char *delta, char *&output) {
  return 0;
}

CinquainDecoder::~CinquainDecoder() {
  if (output_) {
    delete output_;
  }
}