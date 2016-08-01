

@class NSURL, NSArray;

@interface BFAppLink : NSObject {

	char _backToReferrer;
	NSURL* _sourceURL;
	NSArray* _targets;
	NSURL* _webURL;

}

@property (nonatomic,retain) NSURL * sourceURL;                                        //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSArray * targets;                                          //@synthesize targets=_targets - In the implementation block
@property (nonatomic,retain) NSURL * webURL;                                           //@synthesize webURL=_webURL - In the implementation block
@property (assign,getter=isBackToReferrer,nonatomic) char backToReferrer;              //@synthesize backToReferrer=_backToReferrer - In the implementation block
+(id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 ;
+(id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 isBackToReferrer:(char)arg4 ;
-(id)initWithIsBackToReferrer:(char)arg1 ;
-(char)isBackToReferrer;
-(void)setBackToReferrer:(char)arg1 ;
-(void)setWebURL:(NSURL *)arg1 ;
-(void)setTargets:(NSArray *)arg1 ;
-(NSArray *)targets;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(NSURL *)webURL;
@end

