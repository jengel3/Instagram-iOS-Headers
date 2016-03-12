
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDynamicsModel.h>

@interface IGDynamics2D : IGDynamicsModel {

	/*^block*/id _stepBlock;
	CGPoint _currentValue;
	CGPoint _targetValue;
	CGPoint _velocity;
	CGPoint _minValue;

}

@property (assign,nonatomic) CGPoint currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) CGPoint targetValue;               //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                  //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) CGPoint minValue;                  //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,copy) id stepBlock;                        //@synthesize stepBlock=_stepBlock - In the implementation block
-(CGPoint)currentValue;
-(void)setCurrentValue:(CGPoint)arg1 ;
-(id)init;
-(id)description;
-(void)setVelocity:(CGPoint)arg1 ;
-(CGPoint)targetValue;
-(void)setTargetValue:(CGPoint)arg1 ;
-(CGPoint)velocity;
-(CGPoint)minValue;
-(void)setMinValue:(CGPoint)arg1 ;
-(char)isDone;
-(id)stepBlock;
-(void)setStepBlock:(id)arg1 ;
-(void)step:(double)arg1 ;
-(char)notify;
@end

