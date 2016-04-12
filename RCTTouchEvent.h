
#import <Instagram/RCTEvent.h>

@class NSNumber, NSString, NSArray;

@interface RCTTouchEvent : NSObject <RCTEvent> {

	NSArray* _reactTouches;
	NSArray* _changedIndexes;
	NSString* _eventName;
	NSNumber* _viewTag;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * viewTag;                     //@synthesize viewTag=_viewTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
+(id)moduleDotMethod;
-(char)canCoalesce;
-(id)coalesceWithEvent:(id)arg1 ;
-(NSNumber *)viewTag;
-(id)initWithEventName:(id)arg1 reactTouches:(id)arg2 changedIndexes:(id)arg3 ;
-(id)init;
-(NSString *)eventName;
-(id)arguments;
@end

