//
//  ARFaceAnchor.h
//  ARKit
//
//  Copyright © 2016-2017 Apple Inc. All rights reserved.
//

#import <ARKit/ARAnchor.h>
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Blend shape locations of a face geometry.
 @discussion Each location defines an area of the face that can be displaced with a provided coefficient.
 */
typedef NSString *ARBlendShapeLocation NS_STRING_ENUM NS_SWIFT_NAME(ARFaceAnchor.BlendShapeLocation) API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationBrowDownLeft           API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationBrowDownRight          API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationBrowInnerUp            API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationBrowOuterUpLeft        API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationBrowOuterUpRight       API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationCheekPuff              API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationCheekSquintLeft        API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationCheekSquintRight       API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeBlinkLeft           API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeBlinkRight          API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeLookDownLeft        API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeLookDownRight       API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeLookInLeft          API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeLookInRight         API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeLookOutLeft         API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeLookOutRight        API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeLookUpLeft          API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeLookUpRight         API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeSquintLeft          API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeSquintRight         API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeWideLeft            API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationEyeWideRight           API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationJawForward             API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationJawLeft                API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationJawOpen                API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationJawRight               API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthClose             API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthDimpleLeft        API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthDimpleRight       API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthFrownLeft         API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthFrownRight        API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthFunnel            API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthLeft              API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthLowerDownLeft     API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthLowerDownRight    API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthPressLeft         API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthPressRight        API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthPucker            API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthRight             API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthRollLower         API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthRollUpper         API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthShrugLower        API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthShrugUpper        API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthSmileLeft         API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthSmileRight        API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthStretchLeft       API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthStretchRight      API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthUpperUpLeft       API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationMouthUpperUpRight      API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationNoseSneerLeft          API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);
FOUNDATION_EXTERN ARBlendShapeLocation const ARBlendShapeLocationNoseSneerRight         API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos);

@class ARFaceGeometry;

/**
 An anchor representing a face and its geometry.
 */
API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(macos, watchos, tvos)
@interface ARFaceAnchor : ARAnchor <ARTrackable>

/**
 The face geometry updated based on the computed blend shapes.
 */
@property (nonatomic, readonly) ARFaceGeometry *geometry;

/**
 A dictionary of blend shape coefficients for each blend shape location.
 @discussion Blend shapes coefficients define the amount of displacement of a neutral shape at a specific location on the face.
 */
@property (nonatomic, readonly) NSDictionary<ARBlendShapeLocation, NSNumber*> *blendShapes;

/** Unavailable */
- (instancetype)initWithTransform:(matrix_float4x4)transform NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
