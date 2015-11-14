/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:45 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDynamicsModel.h>

@interface IGDynamics : IGDynamicsModel
+(void)addPhysics:(id)arg1 ;
+(void)displayLink:(id)arg1 ;
+(char)stepWorldWithDelta:(double)arg1 ;
+(id)springFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 dynamicsProperties:(id)arg3 initialVelocity:(CGPoint)arg4 withStepBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
+(id)springFromValue:(float)arg1 toValue:(float)arg2 dynamicsProperties:(id)arg3 initialVelocity:(float)arg4 withStepBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
+(void)cancelDynamics:(id)arg1 ;
+(void)cancelAllDynamics;
+(void)calculateKeyFramesFromValue:(float)arg1 toValue:(float)arg2 dynamicsProperties:(id)arg3 initialVelocity:(float)arg4 pinEndPoint:(char)arg5 outputValues:(id*)arg6 outputTimes:(id*)arg7 ;
@end

