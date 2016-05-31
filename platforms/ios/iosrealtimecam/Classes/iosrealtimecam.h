// Note that Xcode gets this line wrong.  You need to change "Cordova.h" to "CDV.h" as shown below.
#import <Cordova/CDV.h>

// Import the CustomCameraViewController class
#import "realtimecamViewController.h"

@interface iosrealtimecam : CDVPlugin

// Cordova command method
-(void) openCamera:(CDVInvokedUrlCommand*)command;

// Create and override some properties and methods (these will be explained later)
-(void) capturedImageWithPath:(NSString*)imagePath;
@property (strong, nonatomic) realtimecamViewController* overlay;
@property (strong, nonatomic) CDVInvokedUrlCommand* latestCommand;
@property (readwrite, assign) BOOL hasPendingOperation;

@end