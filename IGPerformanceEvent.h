

@class NSString, NSMutableDictionary;

@interface IGPerformanceEvent : NSObject {

	char _complete;
	NSString* _name;
	double _start;
	/*^block*/id _completion;
	NSMutableDictionary* _extra;

}
-(id)initWithName:(id)arg1 start:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)complete;
@end

