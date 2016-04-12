

@interface RCTFrameUpdate : NSObject {

	double _timestamp;
	double _deltaTime;

}

@property (nonatomic,readonly) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double deltaTime;              //@synthesize deltaTime=_deltaTime - In the implementation block
-(id)initWithDisplayLink:(id)arg1 ;
-(id)init;
-(double)timestamp;
-(double)deltaTime;
@end

