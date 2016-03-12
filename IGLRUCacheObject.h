

@interface IGLRUCacheObject : NSObject {

	id _object;
	unsigned _cost;

}

@property (nonatomic,readonly) id object;                  //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) unsigned cost;              //@synthesize cost=_cost - In the implementation block
-(id)initWithObject:(id)arg1 cost:(unsigned)arg2 ;
-(id)description;
-(id)object;
-(unsigned)cost;
@end

