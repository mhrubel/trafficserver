/** @file
 *
 *  A brief file description
 *
 *  @section license License
 *
 *  Licensed to the Apache Software Foundation (ASF) under one
 *  or more contributor license agreements.  See the NOTICE file
 *  distributed with this work for additional information
 *  regarding copyright ownership.  The ASF licenses this file
 *  to you under the Apache License, Version 2.0 (the
 *  "License"); you may not use this file except in compliance
 *  with the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef __QUIC_ECHOAPP__
#define __QUIC_ECHOAPP__

#include "I_VConnection.h"
#include "QUICApplication.h"

/**
 * @brief Echo over QUIC
 * @detail An example application over QUIC.
 *         Receive DATA of STREAM Frame and echo it.
 */
class QUICEchoApp : public QUICApplication
{
public:
  QUICEchoApp(ProxyMutex *m, QUICNetVConnection *vc);

  int main_event_handler(int event, Event *data);
};
#endif // __QUIC_HANDSHAKE__