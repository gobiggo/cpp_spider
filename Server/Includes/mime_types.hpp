//
//  main.hpp
//  spider_server
//
//  Created by Victor Sousa on 28/09/2017.
//
//

#ifndef HTTP_MIME_TYPES_HPP
#define HTTP_MIME_TYPES_HPP

#include <string>

namespace http {
  namespace mime_types {

    std::string extension_to_type(const std::string& extension);

  } // namespace mime_types
} // namespace http

#endif // HTTP_MIME_TYPES_HPP
