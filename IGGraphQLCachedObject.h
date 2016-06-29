

@class NSDate;

@interface IGGraphQLCachedObject : NSObject {

	NSDate* _date;
	id _content;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) id content;                 //@synthesize content=_content - In the implementation block
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)content;
-(id)initWithContent:(id)arg1 ;
-(void)setContent:(id)arg1 ;
@end

