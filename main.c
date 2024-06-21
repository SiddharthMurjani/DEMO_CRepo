struct Device {
    int deviceId;
    char deviceName[20];
    int isActive;
};

union User {
    int userId;
    int timeIn;
    int timeout;
};

struct Authorizor {
    int authorizationLevel;
    struct Device device;
    union User user;
};

int main() {
    printf("Starting program...\n");

    // Call the first method
    char status = "on";
    checkDeviceState();
    updateDeviceStatus(status);
    printf("Program finished.\n");

    return 0;
}

void checkDeviceState() {
    printf("Checking device state...\n");

    // Simulate checking device state
    int deviceOn = 1; // Assume device is on
    processActiveDevice();
    if (deviceOn) {
        printf("Device is powered on.\n");
        // Call method to process active device
    } else {
        printf("Device is powered off. Cannot proceed.\n");
    }

    printf("Device state check completed.\n");
}

void processActiveDevice() {
    printf("Processing active device...\n");

    // Simulate processing operations
    validateLogin(); // Call method to validate login

    for (int i = 1; i <= 3; i++) {
        printf("Processing task %d for active device...\n", i);
    }

    printf("Active device processing completed.\n");
}

void validateLogin() {
    printf("Validating login...\n");

    // Simulate login validation operations
    int loggedIn = 1; // Assume login is successful
    if (loggedIn) {
        printf("Login successful.\n");
    } else {
        printf("Login failed.\n");
    }

    printf("Login validation completed.\n");
}
