
#import <Instagram/RCTEvent.h>

@class NSNumber, NSString, NSArray;

@interface RCTTouchEvent : NSObject <RCTEvent> {

	NSArray* _reactTouches;
	NSArray* _changedIndexes;
	unsigned short _coalescingKey;
	NSString* _eventName;
	NSNumber* _viewTag;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * viewTag;                        //@synthesize viewTag=_viewTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;                 //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,readonly) unsigned short coalescingKey; 
+(id)moduleDotMethod;
-(id)coalesceWithEvent:(id)arg1 ;
-(NSNumber *)viewTag;
-(unsigned short)coalescingKey;
-(char)canCoalesce;
-(id)initWithEventName:(id)arg1 reactTouches:(id)arg2 changedIndexes:(id)arg3 coalescingKey:(unsigned short)arg4 ;
-(id)init;
-(NSString *)description;
-(NSString *)eventName;
-(id)arguments;
@end

