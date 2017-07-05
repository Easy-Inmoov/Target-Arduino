struct __attribute__((packed)) inmoov_message {
	char mode;
	char limb;
	char motor_id;
	char debug;
};

class Serializer {
      public:
	int read(inmoov_message *receive_buffer) {
		return Serial.readBytes((uint8_t *)receive_buffer,
					sizeof(inmoov_message));
	}

	int write(inmoov_message *send_buffer) {
		return Serial.write((uint8_t *)send_buffer,
				    sizeof(inmoov_message));
	}
};
