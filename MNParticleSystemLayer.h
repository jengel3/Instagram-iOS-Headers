
#import <Instagram/Instagram-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol MNDoubleSupplier;
@class NSMutableArray, MNParticleLayer, UITouch;

@interface MNParticleSystemLayer : CALayer {

	id<MNDoubleSupplier> _xSupplier;
	NSMutableArray* _queuedParticles;
	NSMutableArray* _deadParticles;
	double _lastBirthTime;
	MNParticleLayer* _touchedParticle;
	UITouch* _trackedTouch;
	CGPoint _lastTouchPoint;

}
-(void)_runSpawns:(double)arg1 ;
-(void)_updateParticles:(double)arg1 ;
-(void)_spawnParticleWithStyle:(id)arg1 withBirthTime:(double)arg2 ;
-(char)_isParticleLayerFinished:(id)arg1 ;
-(id)_obtainParticleWithStyle:(id)arg1 ;
-(float)_calculateInitialParticleY:(id)arg1 ;
-(void)touchEnded:(id)arg1 atPoint:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)queueParticleWithStyle:(id)arg1 ;
-(void)touchBegan:(id)arg1 atPoint:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)touchMoved:(id)arg1 toPoint:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)touchFlingedWithVelocity:(CGPoint)arg1 ;
-(void)touchCanceled:(id)arg1 atPoint:(CGPoint)arg2 withEvent:(id)arg3 ;
-(id)init;
-(void)reset;
-(void)update:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
@end

