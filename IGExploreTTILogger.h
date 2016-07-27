

@class NSString;

@interface IGExploreTTILogger : NSObject {

	char _hasLoggedOnce;
	NSString* _module;
	double _startTimestamp;

}

@property (assign,nonatomic) double startTimestamp;              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,readonly) NSString * module;                //@synthesize module=_module - In the implementation block
@property (assign,nonatomic) char hasLoggedOnce;                 //@synthesize hasLoggedOnce=_hasLoggedOnce - In the implementation block
-(NSString *)module;
-(void)stopWithSuccess:(char)arg1 ;
-(char)hasLoggedOnce;
-(void)setHasLoggedOnce:(char)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(void)start;
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
@end

