#pragma once
#include "api/request.h"
#include "api/response.h"

class login_handler {
public:
	static std::shared_ptr<response> handle(std::shared_ptr<request> request);
};
