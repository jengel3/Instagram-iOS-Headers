

@class NSString;

@interface RCTAnimation : NSObject {

	NSString* _property;
	float _springDamping;
	float _initialVelocity;
	int _animationType;
	double _duration;
	double _delay;

}

@property (nonatomic,readonly) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double delay;                          //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) float springDamping;                   //@synthesize springDamping=_springDamping - In the implementation block
@property (nonatomic,readonly) float initialVelocity;                 //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (nonatomic,readonly) int animationType;                     //@synthesize animationType=_animationType - In the implementation block
+(void)keyboardWillChangeFrame:(id)arg1 ;
+(void)initializeStatics;
-(id)initWithDuration:(double)arg1 dictionary:(id)arg2 ;
-(void)performAnimations:(/*^block*/id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(float)initialVelocity;
-(double)duration;
-(double)delay;
-(int)animationType;
-(float)springDamping;
-(NSString *)property;
@end

