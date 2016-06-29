
#import <Instagram/IGDynamicsModel.h>

@interface IGDynamics1D : IGDynamicsModel {

	char _disabled;
	float _currentValue;
	float _targetValue;
	float _velocity;
	float _minValue;
	/*^block*/id _stepBlock;

}

@property (assign,nonatomic) float currentValue;                           //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) float minValue;                               //@synthesize minValue=_minValue - In the implementation block
@property (assign,getter=isDisabled,nonatomic) char disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy) id stepBlock;                                   //@synthesize stepBlock=_stepBlock - In the implementation block
@property (assign,nonatomic) float targetValue;                            //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) float velocity;                               //@synthesize velocity=_velocity - In the implementation block
-(float)currentValue;
-(void)setCurrentValue:(float)arg1 ;
-(id)init;
-(id)description;
-(void)setVelocity:(float)arg1 ;
-(float)targetValue;
-(void)setTargetValue:(float)arg1 ;
-(float)velocity;
-(float)minValue;
-(void)setDisabled:(char)arg1 ;
-(void)setMinValue:(float)arg1 ;
-(char)isDone;
-(id)stepBlock;
-(void)setStepBlock:(id)arg1 ;
-(void)step:(double)arg1 ;
-(char)isDisabled;
-(char)notify;
@end

