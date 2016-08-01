

@class NSArray;

@interface RCTPerformanceLogger : NSObject {

	long long _data[17][2];
	unsigned _cookies[17];
	NSArray* _labelsForTags;

}

@property (nonatomic,copy) NSArray * labelsForTags;              //@synthesize labelsForTags=_labelsForTags - In the implementation block
-(id)valuesForTags;
-(void)markStartForTag:(unsigned)arg1 ;
-(void)markStopForTag:(unsigned)arg1 ;
-(void)setValue:(long long)arg1 forTag:(unsigned)arg2 ;
-(void)addValue:(long long)arg1 forTag:(unsigned)arg2 ;
-(void)appendStartForTag:(unsigned)arg1 ;
-(void)appendStopForTag:(unsigned)arg1 ;
-(long long)durationForTag:(unsigned)arg1 ;
-(long long)valueForTag:(unsigned)arg1 ;
-(NSArray *)labelsForTags;
-(void)setLabelsForTags:(NSArray *)arg1 ;
-(id)init;
@end

