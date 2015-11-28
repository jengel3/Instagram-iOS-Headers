
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGFeedVideoPlayerDelegate.h>

@class IGMediaThumbnailView, UIView, IGFeedVideoPlayer, NSString;

@interface IGMediaThumbnailCell : UICollectionViewCell <IGFeedVideoPlayerDelegate> {

	char _showHighlight;
	IGMediaThumbnailView* _thumbnailView;
	UIView* _highlightView;
	IGFeedVideoPlayer* _videoPlayer;
	UIView* _videoPlayerView;

}

@property (nonatomic,retain) IGMediaThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) char showHighlight;                                //@synthesize showHighlight=_showHighlight - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                            //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * videoPlayer;                   //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) UIView * videoPlayerView;                          //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)videoPool;
-(id)dequeueReusablePlayer;
-(void)finishUsingPlayer:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 ;
-(void)videoPlayerLoadedFirstFrame:(id)arg1 ;
-(void)videoPlayerDidPlayToEnd:(id)arg1 ;
-(void)videoPlayerWillPrepareAssetForPlayback:(id)arg1 ;
-(void)videoPlayer:(id)arg1 playbackBufferEmpty:(char)arg2 ;
-(void)videoPlayer:(id)arg1 playbackBufferLikelyToKeepUp:(char)arg2 ;
-(void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2 ;
-(void)videoPlayerDidPlay:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(float)arg2 ;
-(void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(float)arg2 ;
-(void)videoPrepareForReuse;
-(UIView *)videoPlayerView;
-(void)setVideoPlayerView:(UIView *)arg1 ;
-(void)setImageURL:(id)arg1 isVideo:(char)arg2 synchronous:(char)arg3 ;
-(IGFeedVideoPlayer *)videoPlayer;
-(void)setVideoPlayer:(IGFeedVideoPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(UIView *)highlightView;
-(void)setHighlightView:(UIView *)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)setThumbnailView:(IGMediaThumbnailView *)arg1 ;
-(IGMediaThumbnailView *)thumbnailView;
-(void)playVideoWithURL:(id)arg1 ;
-(void)setShowHighlight:(char)arg1 ;
-(char)showHighlight;
@end

