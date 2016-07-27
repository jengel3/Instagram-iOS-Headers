

@interface IGStreamingVideoCacheExperimentConfig : NSObject {

	char _cacheEnabled;

}

@property (nonatomic,readonly) char cacheEnabled;              //@synthesize cacheEnabled=_cacheEnabled - In the implementation block
+(id)sharedConfig;
-(char)cacheEnabled;
-(id)initWithCacheEnabled:(char)arg1 ;
@end

