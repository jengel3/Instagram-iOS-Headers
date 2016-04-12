

@class NSString;

@interface RCTAnimation : NSObject {

	NSString* _property;
	id _fromValue;
	id _toValue;
	float _springDamping;
	float _initialVelocity;
	int _animationType;
	double _duration;
	double _delay;

}

@property (nonatomic,readonly) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double delay;                          //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) id fromValue;                          //@synthesize fromValue=_fromValue - In the implementation block
@property (nonatomic,readonly) id toValue;                            //@synthesize toValue=_toValue - In the implementation block
@property (nonatomic,readonly) float springDamping;                   //@synthesize springDamping=_springDamping - In the implementation block
@property (nonatomic,readonly) float initialVelocity;                 //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (nonatomic,readonly) int animationType;                     //@synthesize animationType=_animationType - In the implementation block
-(id)initWithDuration:(double)arg1 dictionary:(id)arg2 ;
-(void)performAnimations:(/*^block*/id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(float)initialVelocity;
-(double)duration;
-(double)delay;
-(id)fromValue;
-(id)toValue;
-(int)animationType;
-(float)springDamping;
-(NSString *)property;
@end

