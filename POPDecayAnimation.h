
#import <Instagram/Instagram-Structs.h>
#import <Instagram/POPPropertyAnimation.h>

@interface POPDecayAnimation : POPPropertyAnimation

@property (nonatomic,copy) id velocity; 
@property (nonatomic,copy,readonly) id originalVelocity; 
@property (assign,nonatomic) float deceleration; 
@property (nonatomic,readonly) double duration; 
+(id)animationWithPropertyNamed:(id)arg1 ;
+(id)animation;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(char)arg2 ;
-(id)reversedVelocity;
-(id)originalVelocity;
-(void)_ensureComputedProperties;
-(void)_invalidateComputedProperties;
-(id)init;
-(void)setVelocity:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(id)toValue;
-(id)velocity;
-(float)deceleration;
-(void)setDeceleration:(float)arg1 ;
@end

