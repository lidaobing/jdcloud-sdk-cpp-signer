// Copyright 2018 JDCLOUD.COM
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// NOTE: This file is modified from AWS V4 Signer algorithm.

#include "util/logging/Logging.h"
#include "util/logging/LogSystemInterface.h"

static std::shared_ptr<LogSystemInterface> LogSystem(nullptr);

void InitializeLogging(const std::shared_ptr<LogSystemInterface> &logSystem) {
    LogSystem = logSystem;
}

void ShutdownLogging(void) {
    InitializeLogging(nullptr);
}

LogSystemInterface *GetLogSystem() {
    return LogSystem.get();
}
