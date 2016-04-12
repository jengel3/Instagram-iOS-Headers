
#import <Instagram/IGMediaRequestDelegate.h>
#import <Instagram/IGVideoProxyDelegate.h>

@protocol IGEventViewerMediaPreloaderCompletionDelegate, IGEventViewerMediaPreloaderPhotoProgressDelegate, IGEventViewerMediaPreloaderVideoProgressDelegate, IGVideoProxyProtocol;
@class IGMediaLoader, NSMutableDictionary, NSString;

@interface IGEventViewerMediaPreloader : NSObject <IGMediaRequestDelegate, IGVideoProxyDelegate> {

	id<IGEventViewerMediaPreloaderCompletionDelegate> _completionDelegate;
	id<IGEventViewerMediaPreloaderPhotoProgressDelegate> _photoProgressDelegate;
	id<IGEventViewerMediaPreloaderVideoProgressDelegate> _videoProgressDelegate;
	float _photoWidth;
	IGMediaLoader* _mediaLoader;
	id<IGVideoProxyProtocol> _videoProxy;
	NSMutableDictionary* _postsToURLs;

}

@property (assign,nonatomic,__weak) id<IGEventViewerMediaPreloaderCompletionDelegate> completionDelegate;                    //@synthesize completionDelegate=_completionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaPreloaderPhotoProgressDelegate> photoProgressDelegate;              //@synthesize photoProgressDelegate=_photoProgressDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaPreloaderVideoProgressDelegate> videoProgressDelegate;              //@synthesize videoProgressDelegate=_videoProgressDelegate - In the implementation block
@property (assign,nonatomic) float photoWidth;                                                                               //@synthesize photoWidth=_photoWidth - In the implementation block
@property (nonatomic,readonly) IGMediaLoader * mediaLoader;                                                                  //@synthesize mediaLoader=_mediaLoader - In the implementation block
@property (nonatomic,readonly) id<IGVideoProxyProtocol> videoProxy;                                                          //@synthesize videoProxy=_videoProxy - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * postsToURLs;                                                            //@synthesize postsToURLs=_postsToURLs - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3 ;
-(id)initWithPhotoWidth:(float)arg1 ;
-(id)initWithPhotoWidth:(float)arg1 mediaLoader:(id)arg2 videoProxy:(id)arg3 ;
-(NSMutableDictionary *)postsToURLs;
-(IGMediaLoader *)mediaLoader;
-(id<IGVideoProxyProtocol>)videoProxy;
-(void)cancelAllRequestsExcludingPosts:(id)arg1 ;
-(id<IGEventViewerMediaPreloaderPhotoProgressDelegate>)photoProgressDelegate;
-(void)notifyCompletionDelegateIfNeeded;
-(id<IGEventViewerMediaPreloaderVideoProgressDelegate>)videoProgressDelegate;
-(void)videoProxy:(id)arg1 didEndRequest:(id)arg2 forURL:(id)arg3 error:(id)arg4 ;
-(void)preloadMediaForPosts:(id)arg1 ;
-(void)preloadBlurredCoverImageForPosts:(id)arg1 ;
-(void)setPhotoProgressDelegate:(id<IGEventViewerMediaPreloaderPhotoProgressDelegate>)arg1 ;
-(void)setVideoProgressDelegate:(id<IGEventViewerMediaPreloaderVideoProgressDelegate>)arg1 ;
-(float)photoWidth;
-(void)setPhotoWidth:(float)arg1 ;
-(void)cancelAllRequests;
-(id)init;
-(id<IGEventViewerMediaPreloaderCompletionDelegate>)completionDelegate;
-(void)setCompletionDelegate:(id<IGEventViewerMediaPreloaderCompletionDelegate>)arg1 ;
@end

