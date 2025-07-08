#include <EdgeVision.h>

// Replace these with your actual WiFi credentials
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

// Create an instance of the EdgeVision class
EdgeVision cam;

void setup() {
  // Start serial communication
  Serial.begin(115200);

  // Initialize WiFi
  cam.initWiFi(ssid, password);

  // Initialize the camera
  cam.initCamera();

  // Start the web streaming server
  cam.startCameraServer();

  Serial.println("Camera server started.");
}

void loop() {
  // Keep the HTTP server running
  cam.keepServerAlive();
}
