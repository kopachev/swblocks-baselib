/*
 * This file is part of the swblocks-baselib library.
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
 */

#ifndef __BL_HTTPSERVER_HTTPSERVERPORTS_H_
#define __BL_HTTPSERVER_HTTPSERVERPORTS_H_

#include <baselib/core/BaseIncludes.h>

namespace bl
{
    namespace httpserver
    {
        /**
         * @brief The HTTP / HTTPS server default inbound ports
         */

        enum : os::port_t
        {
            HttpDefaultInboundPort = 80U,
            HttpDefaultSecureInboundPort = 443U,
        };

    } // httpserver

} // bl

#endif /* __BL_HTTPSERVER_HTTPSERVERPORTS_H_ */
