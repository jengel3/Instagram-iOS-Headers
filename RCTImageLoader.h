
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTBridgeModule.h>
#import <Instagram/RCTURLRequestHandler.h>

@protocol OS_dispatch_queue;
@class NSArray, NSOperationQueue, NSObject, NSURLCache, NSCache, NSMutableArray, RCTBridge, NSString;

@interface RCTImageLoader : NSObject <RCTBridgeModule, RCTURLRequestHandler> {

	NSArray* _loaders;
	NSArray* _decoders;
	NSOperationQueue* _imageDecodeQueue;
	NSObject*<OS_dispatch_queue> _URLCacheQueue;
	NSURLCache* _URLCache;
	NSCache* _decodedImageCache;
	NSMutableArray* _pendingTasks;
	int _activeTasks;
	NSMutableArray* _pendingDecodes;
	int _scheduledDecodes;
	unsigned _activeBytes;
	RCTBridge* _bridge;
	unsigned _maxConcurrentLoadingTasks;
	unsigned _maxConcurrentDecodingTasks;
	unsigned _maxConcurrentDecodingBytes;

}

@property (assign,nonatomic) unsigned maxConcurrentLoadingTasks;                      //@synthesize maxConcurrentLoadingTasks=_maxConcurrentLoadingTasks - In the implementation block
@property (assign,nonatomic) unsigned maxConcurrentDecodingTasks;                     //@synthesize maxConcurrentDecodingTasks=_maxConcurrentDecodingTasks - In the implementation block
@property (assign,nonatomic) unsigned maxConcurrentDecodingBytes;                     //@synthesize maxConcurrentDecodingBytes=_maxConcurrentDecodingBytes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__6762;
+(void)load;
-(/*^block*/id)loadImageWithURLRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(/*^block*/id)loadImageWithURLRequest:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 clipped:(char)arg4 resizeMode:(int)arg5 progressBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)imageURLLoaderForURL:(id)arg1 ;
-(void)dequeueTasks;
-(/*^block*/id)decodeImageData:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 clipped:(char)arg4 resizeMode:(int)arg5 completionBlock:(/*^block*/id)arg6 ;
-(/*^block*/id)loadImageOrDataWithURLRequest:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)imageDataDecoderForData:(id)arg1 ;
-(id)sendRequest:(id)arg1 withDelegate:(id)arg2 ;
-(/*^block*/id)getImageSizeForURLRequest:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)prefetchImage:(id)arg1 resolve:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
-(unsigned)maxConcurrentLoadingTasks;
-(void)setMaxConcurrentLoadingTasks:(unsigned)arg1 ;
-(unsigned)maxConcurrentDecodingTasks;
-(void)setMaxConcurrentDecodingTasks:(unsigned)arg1 ;
-(unsigned)maxConcurrentDecodingBytes;
-(void)setMaxConcurrentDecodingBytes:(unsigned)arg1 ;
-(/*^block*/id)loadImageWithTag:(id)arg1 callback:(/*^block*/id)arg2 ;
-(/*^block*/id)loadImageWithTag:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(/*^block*/id)loadImageWithoutClipping:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(/*^block*/id)decodeImageData:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 completionBlock:(/*^block*/id)arg5 ;
-(/*^block*/id)decodeImageDataWithoutClipping:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 completionBlock:(/*^block*/id)arg5 ;
-(/*^block*/id)getImageSize:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setUp;
-(void)cancelRequest:(id)arg1 ;
-(RCTBridge *)bridge;
-(char)canHandleRequest:(id)arg1 ;
@end

