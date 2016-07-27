
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGFeedVideoPlayerDelegate.h>

@class IGMediaThumbnailView, UIView, IGMediaThumbnailSelectableOverlay, IGFeedVideoPlayer, NSString;

@interface IGMediaThumbnailCell : UICollectionViewCell <IGFeedVideoPlayerDelegate> {

	char _showHighlight;
	char _isSelectable;
	IGMediaThumbnailView* _thumbnailView;
	UIView* _highlightView;
	IGMediaThumbnailSelectableOverlay* _selectableOverlay;
	IGFeedVideoPlayer* _videoPlayer;
	UIView* _videoPlayerView;

}

@property (nonatomic,retain) IGMediaThumbnailView * thumbnailView;                               //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                             //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) IGMediaThumbnailSelectableOverlay * selectableOverlay;              //@synthesize selectableOverlay=_selectableOverlay - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * videoPlayer;                                    //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) UIView * videoPlayerView;                                           //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (assign,nonatomic) char showHighlight;                                                 //@synthesize showHighlight=_showHighlight - In the implementation block
@property (assign,nonatomic) char isSelectable;                                                  //@synthesize isSelectable=_isSelectable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)videoPool;
-(UIView *)videoPlayerView;
-(void)setVideoPlayerView:(UIView *)arg1 ;
-(void)finishUsingPlayer:(id)arg1 ;
-(id)dequeueReusablePlayer;
-(void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 ;
-(void)videoPlayerLoadedFirstFrame:(id)arg1 ;
-(void)videoPlayerDidPlayToEnd:(id)arg1 ;
-(void)videoPlayerWillPrepareAssetForPlayback:(id)arg1 ;
-(void)videoPlayerBufferEmpty:(id)arg1 ;
-(void)videoPlayerBufferLikelyToKeepUp:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2 ;
-(void)videoPlayerDidPlay:(id)arg1 ;
-(void)videoPlayerDidPause:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(float)arg2 ;
-(void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(float)arg2 ;
-(void)videoPlayerDidFinishSeeking:(id)arg1 ;
-(void)setImage:(id)arg1 isVideo:(char)arg2 ;
-(void)videoPrepareForReuse;
-(IGMediaThumbnailSelectableOverlay *)selectableOverlay;
-(void)setImageURL:(id)arg1 isVideo:(char)arg2 synchronous:(char)arg3 ;
-(void)setSelectableOverlay:(IGMediaThumbnailSelectableOverlay *)arg1 ;
-(void)setIsSelectable:(char)arg1 ;
-(IGFeedVideoPlayer *)videoPlayer;
-(void)setVideoPlayer:(IGFeedVideoPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(UIView *)highlightView;
-(void)setHighlightView:(UIView *)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)setThumbnailView:(IGMediaThumbnailView *)arg1 ;
-(IGMediaThumbnailView *)thumbnailView;
-(char)isSelectable;
-(void)playVideoWithURL:(id)arg1 ;
-(void)setShowHighlight:(char)arg1 ;
-(char)showHighlight;
@end

