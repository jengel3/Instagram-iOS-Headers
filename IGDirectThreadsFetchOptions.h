

@interface IGDirectThreadsFetchOptions : NSObject {

	char _isPending;
	char _includeLocalThreads;

}

@property (assign,nonatomic) char isPending;                        //@synthesize isPending=_isPending - In the implementation block
@property (assign,nonatomic) char includeLocalThreads;              //@synthesize includeLocalThreads=_includeLocalThreads - In the implementation block
-(void)setIsPending:(char)arg1 ;
-(void)setIncludeLocalThreads:(char)arg1 ;
-(char)includeLocalThreads;
-(id)init;
-(char)isPending;
@end

