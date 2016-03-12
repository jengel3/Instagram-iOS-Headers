

@interface IGTokenBucket : NSObject {

	unsigned _maxTokens;
	double _rate;
	double _tokens;
	double _lastHitTimestamp;

}

@property (assign,nonatomic) double rate;                          //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) unsigned maxTokens;                   //@synthesize maxTokens=_maxTokens - In the implementation block
@property (assign,nonatomic) double tokens;                        //@synthesize tokens=_tokens - In the implementation block
@property (assign,nonatomic) double lastHitTimestamp;              //@synthesize lastHitTimestamp=_lastHitTimestamp - In the implementation block
-(id)initWithRate:(unsigned)arg1 maxTokens:(unsigned)arg2 ;
-(char)hit;
-(unsigned)maxTokens;
-(double)lastHitTimestamp;
-(void)setLastHitTimestamp:(double)arg1 ;
-(void)setMaxTokens:(unsigned)arg1 ;
-(double)rate;
-(double)tokens;
-(void)setTokens:(double)arg1 ;
-(void)setRate:(double)arg1 ;
@end

