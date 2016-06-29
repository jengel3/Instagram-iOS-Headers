

@class NSString;

@interface POPAnimationEvent : NSObject {

	unsigned _type;
	NSString* _animationDescription;
	double _time;

}

@property (nonatomic,copy) NSString * animationDescription;              //@synthesize animationDescription=_animationDescription - In the implementation block
@property (nonatomic,readonly) unsigned type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double time;                              //@synthesize time=_time - In the implementation block
-(void)_appendDescription:(id)arg1 ;
-(NSString *)animationDescription;
-(id)initWithType:(unsigned)arg1 time:(double)arg2 ;
-(void)setAnimationDescription:(NSString *)arg1 ;
-(id)description;
-(unsigned)type;
-(double)time;
@end

