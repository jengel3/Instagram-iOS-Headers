

@protocol OS_dispatch_queue;
#import <Instagram/Instagram-Structs.h>
@class IGStreamingVideoCacheRequest, IGDiskCache, NSObject, NSMutableSet, IGRequest, IGStreamingVideoMetaDataCacheEntry, NSString;

@interface IGStreamingVideoTask : NSObject {

	IGStreamingVideoCacheRequest* _originalRequest;
	IGDiskCache* _diskCache;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completionBlock;
	NSMutableSet* _parkingRequests;
	char _canceled;
	unsigned _bytesDownloaded;
	IGRequest* _networkRequest;
	IGStreamingVideoMetaDataCacheEntry* _metaDataEntry;

}

@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) IGStreamingVideoCacheRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
-(void)attachRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithRequest:(id)arg1 diskCache:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)loadVideo;
-(void)queue_loadVideo;
-(void)queue_attachRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)queue_cancel:(id)arg1 ;
-(void)queue_interrupt;
-(NSRange)loadFromDiskCacheAndMaybeAttachRequest:(id)arg1 ;
-(id)loadMetaDataFromDiskCache;
-(void)loadVideoFromNetworkAndFinishTask:(NSRange)arg1 ;
-(NSRange)loadBytesFromDiskCache:(NSRange)arg1 bytesHandler:(/*^block*/id)arg2 ;
-(void)maybeDispatchErrorCallback:(id)arg1 ;
-(void)dispatchProgressCallback:(const char*)arg1 length:(unsigned)arg2 ;
-(void)dispatchMediaInfoCallback:(id)arg1 ;
-(void)interrupt;
-(NSString *)cacheKey;
-(void)cancel:(id)arg1 ;
-(IGStreamingVideoCacheRequest *)originalRequest;
@end

