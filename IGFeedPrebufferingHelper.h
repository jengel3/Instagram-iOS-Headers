

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IGFeedPrebufferingHelper : NSObject {

	NSMutableDictionary* _prebufferingURLs;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSMutableDictionary * prebufferingURLs;              //@synthesize prebufferingURLs=_prebufferingURLs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
-(NSMutableDictionary *)prebufferingURLs;
-(void)prebufferVideoForURL:(id)arg1 key:(id)arg2 ;
-(void)cancelPrebufferVideoWithKey:(id)arg1 ;
-(id)prebufferVideoURLForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)init;
@end

