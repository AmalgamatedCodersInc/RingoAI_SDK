//
//  FaceCapturePrivate.h
//  RingoAI
//

#import <RingoAI/FaceCapture.h>

@interface FaceCapture(Private)
- (void)callComplete:(BOOL)success;
- (void)callResults:(BOOL)success
			   info:(NSDictionary<NSString*,id>*)info;
- (void)callThermalWarning:(BOOL)abort;
- (void)metadata:(NSDictionary<NSString*,NSObject*>*)meta;
- (void)popUX:(UINavigationController*)navVC;
@end

extern BOOL launchedCalled;
