#ifndef SERIALIZER_H_
#define SERIALIZER_H_

class Serializer {
      public:
	int read(InmoovMessage *receive_buffer) {
		return Serial.readBytes((uint8_t *)receive_buffer,
					sizeof(InmoovMessage));
	}

	int write(InmoovMessage *send_buffer) {
		return Serial.write((uint8_t *)send_buffer,
				    sizeof(InmoovMessage));
	}
};

#endif
