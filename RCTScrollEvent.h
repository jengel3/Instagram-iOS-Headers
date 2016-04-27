
#import <Instagram/RCTEvent.h>

@class UIScrollView, NSDictionary, NSNumber, NSString;

@interface RCTScrollEvent : NSObject <RCTEvent> {

	int _type;
	UIScrollView* _scrollView;
	NSDictionary* _userData;
	unsigned short _coalescingKey;
	NSNumber* _viewTag;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * viewTag;                        //@synthesize viewTag=_viewTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName; 
@property (nonatomic,readonly) unsigned short coalescingKey; 
+(id)moduleDotMethod;
-(id)coalesceWithEvent:(id)arg1 ;
-(NSNumber *)viewTag;
-(unsigned short)coalescingKey;
-(char)canCoalesce;
-(id)initWithType:(int)arg1 reactTag:(id)arg2 scrollView:(id)arg3 userData:(id)arg4 coalescingKey:(unsigned short)arg5 ;
-(id)init;
-(id)body;
-(NSString *)eventName;
-(id)arguments;
@end

