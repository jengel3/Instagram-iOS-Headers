
#import <Instagram/IGMediaRequestDelegate.h>
#import <Instagram/IGVideoProxyDelegate.h>

@protocol IGMediaPreloaderCompletionDelegate, IGMediaPreloaderPhotoProgressDelegate, IGMediaPreloaderVideoProgressDelegate, IGVideoProxyProtocol;
@class IGMediaLoader, NSMutableDictionary, NSString;

@interface IGMediaPreloader : NSObject <IGMediaRequestDelegate, IGVideoProxyDelegate> {

	id<IGMediaPreloaderCompletionDelegate> _completionDelegate;
	id<IGMediaPreloaderPhotoProgressDelegate> _photoProgressDelegate;
	id<IGMediaPreloaderVideoProgressDelegate> _videoProgressDelegate;
	float _photoWidth;
	IGMediaLoader* _mediaLoader;
	id<IGVideoProxyProtocol> _videoProxy;
	NSMutableDictionary* _urlsToItems;

}

@property (assign,nonatomic,__weak) id<IGMediaPreloaderCompletionDelegate> completionDelegate;                    //@synthesize completionDelegate=_completionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGMediaPreloaderPhotoProgressDelegate> photoProgressDelegate;              //@synthesize photoProgressDelegate=_photoProgressDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGMediaPreloaderVideoProgressDelegate> videoProgressDelegate;              //@synthesize videoProgressDelegate=_videoProgressDelegate - In the implementation block
@property (assign,nonatomic) float photoWidth;                                                                    //@synthesize photoWidth=_photoWidth - In the implementation block
@property (nonatomic,readonly) IGMediaLoader * mediaLoader;                                                       //@synthesize mediaLoader=_mediaLoader - In the implementation block
@property (nonatomic,readonly) id<IGVideoProxyProtocol> videoProxy;                                               //@synthesize videoProxy=_videoProxy - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * urlsToItems;                                                 //@synthesize urlsToItems=_urlsToItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3 ;
-(id)initWithPhotoWidth:(float)arg1 ;
-(void)setVideoProgressDelegate:(id<IGMediaPreloaderVideoProgressDelegate>)arg1 ;
-(void)preloadBlurredCoverImageForItems:(id)arg1 ;
-(void)preloadMediaForItems:(id)arg1 ;
-(void)cancelAllRequestsExcludingItems:(id)arg1 ;
-(void)videoProxy:(id)arg1 didEndRequest:(id)arg2 forURL:(id)arg3 error:(id)arg4 ;
-(id)initWithPhotoWidth:(float)arg1 mediaLoader:(id)arg2 videoProxy:(id)arg3 ;
-(NSMutableDictionary *)urlsToItems;
-(IGMediaLoader *)mediaLoader;
-(id<IGVideoProxyProtocol>)videoProxy;
-(id<IGMediaPreloaderPhotoProgressDelegate>)photoProgressDelegate;
-(void)notifyCompletionDelegateIfNeeded;
-(id<IGMediaPreloaderVideoProgressDelegate>)videoProgressDelegate;
-(void)setPhotoProgressDelegate:(id<IGMediaPreloaderPhotoProgressDelegate>)arg1 ;
-(float)photoWidth;
-(void)setPhotoWidth:(float)arg1 ;
-(void)cancelAllRequests;
-(id)init;
-(id<IGMediaPreloaderCompletionDelegate>)completionDelegate;
-(void)setCompletionDelegate:(id<IGMediaPreloaderCompletionDelegate>)arg1 ;
@end

