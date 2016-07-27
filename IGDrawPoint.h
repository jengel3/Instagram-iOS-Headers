

@interface IGDrawPoint : NSObject {

	float _x;
	float _y;
	float _velocity;
	IGDrawPoint* _previous;
	IGDrawPoint* _next;
	double _timestamp;

}

@property (x,nonatomic,readonly) float x;                           //@synthesize x=_x - In the implementation block
@property (y,nonatomic,readonly) float y;                           //@synthesize y=_y - In the implementation block
@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) float velocity;                      //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,readonly) IGDrawPoint * previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,readonly) IGDrawPoint * next;                  //@synthesize next=_next - In the implementation block
-(void)setNextPoint:(id)arg1 ;
-(id)initWithX:(float)arg1 y:(float)arg2 timestamp:(double)arg3 ;
-(id)initWithX:(float)arg1 y:(float)arg2 timestamp:(double)arg3 velocity:(float)arg4 previous:(id)arg5 next:(id)arg6 ;
-(IGDrawPoint *)next;
-(IGDrawPoint *)previous;
-(double)timestamp;
-(float)velocity;
-(float)x;
-(float)y;
@end

