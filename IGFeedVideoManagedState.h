

@class IGVideo, IGFeedItemVideoView, IGFeedVideoPlayer;

@interface IGFeedVideoManagedState : NSObject {

	IGVideo* _video;
	IGFeedItemVideoView* _videoView;
	IGFeedVideoPlayer* _player;

}

@property (nonatomic,readonly) IGVideo * video;                              //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) IGFeedItemVideoView * videoView;              //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,readonly) IGFeedVideoPlayer * player;                   //@synthesize player=_player - In the implementation block
-(id)initWithVideo:(id)arg1 videoView:(id)arg2 player:(id)arg3 ;
-(IGFeedItemVideoView *)videoView;
-(IGFeedVideoPlayer *)player;
-(IGVideo *)video;
@end

