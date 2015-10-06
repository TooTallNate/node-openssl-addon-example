#include "node.h"
#include "nan.h"

#include <openssl/ssl.h>

NAN_METHOD(Do) {
  const SSL_METHOD *method = SSLv23_method();
  /* do SSL stuffs… */
  method = nullptr;
}

NAN_MODULE_INIT(init) {
  Nan::HandleScope scope;
  Nan::SetMethod(target, "do", Do);
}
NODE_MODULE(binding, init);
