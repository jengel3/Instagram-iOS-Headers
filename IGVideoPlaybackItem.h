

@protocol IGFeedVideoCell;
@class NSURL, IGFeedItemVideoView, UICollectionViewCell, IGVideoPlaybackConfiguration;

@interface IGVideoPlaybackItem : NSObject {

	NSURL* _videoURL;
	NSURL* _subtitleURL;
	IGFeedItemVideoView* _videoView;
	UICollectionViewCell*<IGFeedVideoCell> _videoCell;
	IGVideoPlaybackConfiguration* _videoConfig;

}

@property (nonatomic,readonly) NSURL * videoURL;                                              //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) NSURL * subtitleURL;                                           //@synthesize subtitleURL=_subtitleURL - In the implementation block
@property (nonatomic,readonly) IGFeedItemVideoView * videoView;                               //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,readonly) UICollectionViewCell*<IGFeedVideoCell> videoCell;              //@synthesize videoCell=_videoCell - In the implementation block
@property (nonatomic,readonly) IGVideoPlaybackConfiguration * videoConfig;                    //@synthesize videoConfig=_videoConfig - In the implementation block
-(UICollectionViewCell*<IGFeedVideoCell>)videoCell;
-(NSURL *)subtitleURL;
-(id)initWithVideoURL:(id)arg1 subtitleURL:(id)arg2 videoView:(id)arg3 videoCell:(id)arg4 videoConfig:(id)arg5 ;
-(IGVideoPlaybackConfiguration *)videoConfig;
-(NSURL *)videoURL;
-(IGFeedItemVideoView *)videoView;
@end

