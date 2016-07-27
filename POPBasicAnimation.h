
#import <Instagram/Instagram-Structs.h>
#import <Instagram/POPPropertyAnimation.h>

@class CAMediaTimingFunction;

@interface POPBasicAnimation : POPPropertyAnimation

@property (assign,nonatomic) double duration; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
+(id)animationWithPropertyNamed:(id)arg1 ;
+(id)easeInEaseOutAnimation;
+(id)linearAnimation;
+(id)easeInAnimation;
+(id)easeOutAnimation;
+(id)defaultAnimation;
+(id)animation;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(char)arg2 ;
-(id)init;
-(double)duration;
-(CAMediaTimingFunction *)timingFunction;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
@end

