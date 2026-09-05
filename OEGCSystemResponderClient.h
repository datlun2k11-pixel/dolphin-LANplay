/*
 Copyright (c) 2013, OpenEmu Team
 */

#import <Foundation/Foundation.h>

@protocol OESystemResponderClient;

typedef enum _OEGCButton
{
    OEGCButtonUp,
    OEGCButtonDown,
    OEGCButtonLeft,
    OEGCButtonRight,
    OEGCAnalogUp,
    OEGCAnalogDown,
    OEGCAnalogLeft,
    OEGCAnalogRight,
    OEGCAnalogCUp,
    OEGCAnalogCDown,
    OEGCAnalogCLeft,
    OEGCAnalogCRight,
    OEGCButtonA,
    OEGCButtonB,
    OEGCButtonX,
    OEGCButtonY,
    OEGCButtonL,
    OEGCButtonR,
    OEGCButtonZ,
    OEGCButtonStart,
    OEGCButtonCount
} OEGCButton;

@protocol OEGCSystemResponderClient <OESystemResponderClient, NSObject>

- (oneway void)didMoveGCJoystickDirection:(OEGCButton)button withValue:(CGFloat)value forPlayer:(NSUInteger)player;
- (oneway void)didPushGCButton:(OEGCButton)button forPlayer:(NSUInteger)player;
- (oneway void)didReleaseGCButton:(OEGCButton)button forPlayer:(NSUInteger)player;

@end
