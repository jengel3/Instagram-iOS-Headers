

@class NSMutableDictionary;

@interface IGFeedPrebufferingHelper : NSObject {

	NSMutableDictionary* _prebufferingURLs;

}

@property (nonatomic,readonly) NSMutableDictionary * prebufferingURLs;              //@synthesize prebufferingURLs=_prebufferingURLs - In the implementation block
-(NSMutableDictionary *)prebufferingURLs;
-(id)prebufferedVideoURLForPost:(id)arg1 ;
-(void)prebufferVideoForURL:(id)arg1 ;
-(void)prebufferVideoForPost:(id)arg1 ;
-(void)cancelPrebufferVideoForPost:(id)arg1 ;
-(id)init;
@end

