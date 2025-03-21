//
//  CPPUtilsWrapper.h
//  MySkin
//
//  Created by Sagar Bhosale on 17/02/24.
//
#import <Foundation/Foundation.h>
#import <AVFoundation/AVDepthData.h>

typedef struct {
    double yaw_angleXY;
    double pitch_angleYZ;
    double roll_angleZX;
} YPRAnglesStruct;

NS_ASSUME_NONNULL_BEGIN

@interface CPPUtilsAPIWrapper : NSObject
@property (readwrite) double capture_width;
@property (readwrite) double capture_height;
@property (readwrite) double capture_fov;

// Wrapper method for readMediapipeLandmark
- (float)getPixelPupilDistanceWithMediaPipeLMDataDict:(NSDictionary *)dataDict;
- (float)getPixelIrisDistanceWithMediaPipeLMDataDict:(NSDictionary *)dataDict;

- (NSDictionary<NSString *, id> *) getROIPyrWithrefLM:(NSArray<NSDictionary<NSString *, id> *> *)refLMs
                                                             curData:(NSDictionary<NSString *, id> *)curData
                                                          depthDatas:(NSArray<AVDepthData *> *)depthDatas;

- (NSDictionary<NSString *, id> *) getROIPyrWithrefLMFilePaths:(NSArray<NSString *> *)refLMFilePaths
                                                          curDataFilePath:(NSString *)curDataFilePath
                                                   depthDataFilePaths:(NSArray<NSString *> *)depthDataFilePaths;

- (NSDictionary<NSString *, NSNumber *> *)getFacePRY:(NSDictionary<NSString *, id> *)curData;
- (float)getPupilDepth:(NSDictionary *)imageData andDepthData:(AVDepthData *)depthData;
- (float)getFaceDepthWithTD:(NSDictionary *)landmarks andDepthData:(AVDepthData *)depthData;

- (void)startPDCalibration;
- (BOOL)hasPDCalibrationStarted;
- (BOOL)isPDCalibDone;
- (void)setPDCalibDone:(BOOL)status;

- (void) setHorizFovDegrees: (double) fov ;
- (void) setVertFovDegrees: (double) fov ;
- (void) setFrameCaptureWidth: (double) value ;
- (void) setFrameCaptureHeight: (double) value ;
@end

NS_ASSUME_NONNULL_END
