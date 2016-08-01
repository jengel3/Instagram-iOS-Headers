

@interface RCTJavaScriptLoader : NSObject
+(id)attemptSynchronousLoadOfBundleAtURL:(id)arg1 sourceLength:(long long*)arg2 error:(id*)arg3 ;
+(void)loadBundleAtURL:(id)arg1 onComplete:(/*^block*/id)arg2 ;
-(id)init;
@end

