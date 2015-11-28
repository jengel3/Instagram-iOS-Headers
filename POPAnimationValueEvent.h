
#import <Instagram/POPAnimationEvent.h>

@interface POPAnimationValueEvent : POPAnimationEvent {

	id _value;
	id _velocity;

}

@property (nonatomic,readonly) id value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) id velocity;              //@synthesize velocity=_velocity - In the implementation block
-(void)_appendDescription:(id)arg1 ;
-(id)initWithType:(unsigned)arg1 time:(double)arg2 value:(id)arg3 ;
-(void)setVelocity:(id)arg1 ;
-(id)value;
-(id)velocity;
@end

