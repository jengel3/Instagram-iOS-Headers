

@class NSString, NSMutableDictionary;

@interface IGAnalyticsEvent : NSObject {

	NSString* _module;
	NSMutableDictionary* _extra;
	double _time;
	char _hasLogged;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
+(void)recordAverage:(id)arg1 value:(double)arg2 ;
+(void)recordEvent:(id)arg1 forTimer:(id)arg2 uuid:(id)arg3 ;
+(void)startTimer:(id)arg1 uuid:(id)arg2 ;
+(id)eventWithName:(id)arg1 module:(id)arg2 navState:(id)arg3 ;
+(id)eventWithName:(id)arg1 module:(id)arg2 ;
+(void)incrementCounter:(id)arg1 ;
+(void)startTimer:(id)arg1 ;
+(void)recordEvent:(id)arg1 forTimer:(id)arg2 ;
+(void)incrementCounter:(id)arg1 byAmount:(int)arg2 ;
-(id)initWithName:(id)arg1 module:(id)arg2 navState:(id)arg3 ;
-(void)assertHasNotLogged;
-(void)setValue:(id)arg1 forExtraKey:(id)arg2 ;
-(void)logImmediately;
-(void)dealloc;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)log;
-(void)log:(int)arg1 ;
@end

