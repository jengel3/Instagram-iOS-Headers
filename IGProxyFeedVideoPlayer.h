
#import <Instagram/IGFeedVideoPlayer.h>

@class NSURL;

@interface IGProxyFeedVideoPlayer : IGFeedVideoPlayer {

	NSURL* _proxyURL;
	NSURL* _videoURL;

}
-(void)loadVideoForURL:(id)arg1 ;
-(void)prepareForReuseWithCompletion:(/*^block*/id)arg1 ;
-(void)assetFailedToPrepareForPlayback:(id)arg1 ;
@end

