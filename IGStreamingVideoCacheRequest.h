

#import <Instagram/Instagram-Structs.h>
@class NSString, NSURL;

@interface IGStreamingVideoCacheRequest : NSObject {

	char _ignoreCache;
	char _isPrefetch;
	NSString* _cacheKey;
	NSString* _diskCacheKeyForStreamData;
	NSString* _diskCacheKeyForMetaData;
	NSURL* _url;
	int _readAheadLimitInBytes;
	/*^block*/id _mediaInfoParsedBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _successBlock;
	/*^block*/id _errorBlock;
	NSRange _requestedRange;

}

@property (nonatomic,copy,readonly) NSString * cacheKey;                               //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * diskCacheKeyForStreamData;              //@synthesize diskCacheKeyForStreamData=_diskCacheKeyForStreamData - In the implementation block
@property (nonatomic,copy,readonly) NSString * diskCacheKeyForMetaData;                //@synthesize diskCacheKeyForMetaData=_diskCacheKeyForMetaData - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) char ignoreCache;                                       //@synthesize ignoreCache=_ignoreCache - In the implementation block
@property (nonatomic,readonly) char isPrefetch;                                        //@synthesize isPrefetch=_isPrefetch - In the implementation block
@property (nonatomic,readonly) NSRange requestedRange;                                 //@synthesize requestedRange=_requestedRange - In the implementation block
@property (nonatomic,readonly) int readAheadLimitInBytes;                              //@synthesize readAheadLimitInBytes=_readAheadLimitInBytes - In the implementation block
@property (nonatomic,copy,readonly) id mediaInfoParsedBlock;                           //@synthesize mediaInfoParsedBlock=_mediaInfoParsedBlock - In the implementation block
@property (nonatomic,copy,readonly) id progressBlock;                                  //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy,readonly) id successBlock;                                   //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy,readonly) id errorBlock;                                     //@synthesize errorBlock=_errorBlock - In the implementation block
-(NSString *)diskCacheKeyForStreamData;
-(NSString *)diskCacheKeyForMetaData;
-(char)ignoreCache;
-(NSRange)requestedRange;
-(int)readAheadLimitInBytes;
-(id)mediaInfoParsedBlock;
-(id)successBlock;
-(id)initWithUrl:(id)arg1 requestedRange:(NSRange)arg2 readAheadLimitInBytes:(int)arg3 ignoreCache:(char)arg4 isPrefetch:(char)arg5 mediaInfoParsedBlock:(/*^block*/id)arg6 progressBlock:(/*^block*/id)arg7 successBlock:(/*^block*/id)arg8 errorBlock:(/*^block*/id)arg9 ;
-(id)errorBlock;
-(void)cancel;
-(NSURL *)url;
-(void)begin;
-(NSString *)cacheKey;
-(char)isPrefetch;
-(id)progressBlock;
@end

