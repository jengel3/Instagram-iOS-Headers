

@class NSArray, NSString;

@interface IGPivotMediaInfo : NSObject {

	NSArray* _creators;
	NSArray* _pivots;
	int _index;
	NSString* _pivotMediaId;
	NSString* _rankToken;

}

@property (nonatomic,readonly) NSArray * creators;               //@synthesize creators=_creators - In the implementation block
@property (nonatomic,readonly) NSArray * pivots;                 //@synthesize pivots=_pivots - In the implementation block
@property (assign,nonatomic) int index;                          //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) NSString * pivotMediaId;              //@synthesize pivotMediaId=_pivotMediaId - In the implementation block
@property (nonatomic,copy) NSString * rankToken;                 //@synthesize rankToken=_rankToken - In the implementation block
+(void)logPivotEvent:(id)arg1 media:(id)arg2 module:(id)arg3 ;
-(NSString *)rankToken;
-(void)setRankToken:(NSString *)arg1 ;
-(NSArray *)creators;
-(NSArray *)pivots;
-(NSString *)pivotMediaId;
-(void)setPivotMediaId:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)index;
-(void)setIndex:(int)arg1 ;
@end

