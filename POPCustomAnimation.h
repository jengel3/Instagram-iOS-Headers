
#import <Instagram/Instagram-Structs.h>
#import <Instagram/POPAnimation.h>

@interface POPCustomAnimation : POPAnimation {

	/*^block*/id _animate;
	double _currentTime;
	double _elapsedTime;

}

@property (nonatomic,copy) id animate;                          //@synthesize animate=_animate - In the implementation block
@property (nonatomic,readonly) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime;              //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(id)animationWithBlock:(/*^block*/id)arg1 ;
-(void)_appendDescription:(id)arg1 debug:(char)arg2 ;
-(char)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3 ;
-(double)currentTime;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)beginTime;
-(id)animate;
-(double)elapsedTime;
-(void)setAnimate:(id)arg1 ;
@end

