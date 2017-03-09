#ifndef GLES2_IMPL_H_
#define GLES2_IMPL_H_

#include <cstring>

namespace gles2impl {

	std::string init(int width, int height);
	void blit();
	void cleanup();

}

#endif /* GLES2_IMPL_H_ */