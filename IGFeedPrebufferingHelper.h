

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IGFeedPrebufferingHelper : NSObject {

	NSMutableDictionary* _prebufferingURLs;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSMutableDictionary * prebufferingURLs;              //@synthesize prebufferingURLs=_prebufferingURLs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
-(NSMutableDictionary *)prebufferingURLs;
-(id)keyForVideo:(id)arg1 ;
-(void)prebufferVideoForURL:(id)arg1 video:(id)arg2 ;
-(void)cancelPrebufferForVideo:(id)arg1 ;
-(id)prebufferVideoURLForVideo:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)init;
@end

