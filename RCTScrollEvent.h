
#import <Instagram/RCTEvent.h>

@class UIScrollView, NSDictionary, NSNumber, NSString;

@interface RCTScrollEvent : NSObject <RCTEvent> {

	UIScrollView* _scrollView;
	NSDictionary* _userData;
	unsigned short _coalescingKey;
	NSNumber* _viewTag;
	NSString* _eventName;

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
-(id)initWithEventName:(id)arg1 reactTag:(id)arg2 scrollView:(id)arg3 userData:(id)arg4 coalescingKey:(unsigned short)arg5 ;
-(id)init;
-(id)body;
-(NSString *)eventName;
-(id)arguments;
@end

