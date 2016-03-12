
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

