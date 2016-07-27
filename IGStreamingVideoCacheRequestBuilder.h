

#import <Instagram/Instagram-Structs.h>
@class NSURL;

@interface IGStreamingVideoCacheRequestBuilder : NSObject {

	NSURL* _url;
	NSRange _requestedRange;
	int _readAheadLimitInBytes;
	char _ignoreCache;
	char _isPrefetch;
	/*^block*/id _mediaInfoParsedBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _successBlock;
	/*^block*/id _errorBlock;

}
+(id)builderWithUrl:(id)arg1 ;
-(void)onProgress:(/*^block*/id)arg1 ;
-(void)onSuccess:(/*^block*/id)arg1 ;
-(void)setRequestedRange:(NSRange)arg1 ;
-(void)setReadAheadLimitInBytes:(int)arg1 ;
-(void)setIsPrefetch:(char)arg1 ;
-(id)initWithUrl:(id)arg1 ;
-(void)setIgnoreCache:(char)arg1 ;
-(void)onMediaInfoParsed:(/*^block*/id)arg1 ;
-(void)onError:(/*^block*/id)arg1 ;
-(id)build;
@end

