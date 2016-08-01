
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>

@class IGUser, IGSimpleButton, UIColor, IGFeedVideoPlayer, IGFeedVideoStateManager, IGVideoPlaybackController, IGFeedItemVideoView, NSOperationQueue, IGVideoPlaybackItem, NSString;

@interface IGProfilePictureImageView : IGImageView <IGFeedItemVideoViewDelegate> {

	char _buttonDisabled;
	char _hasHighlightedState;
	char _useHDPictureIfAvailable;
	IGUser* _user;
	IGSimpleButton* _profilePicButton;
	int _borderStyle;
	UIColor* _borderColor;
	float _borderWidth;
	IGFeedVideoPlayer* _profileVideoPlayer;
	IGFeedVideoStateManager* _profileVideoStateManager;
	IGVideoPlaybackController* _profileVideoPlaybackController;
	IGFeedItemVideoView* _profileVideoView;
	int _viewMode;
	NSOperationQueue* _itemFetchQueue;
	IGVideoPlaybackItem* _playbackItem;

}

@property (nonatomic,retain) UIColor * borderColor;                                                   //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) float borderWidth;                                                       //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * profileVideoPlayer;                                  //@synthesize profileVideoPlayer=_profileVideoPlayer - In the implementation block
@property (nonatomic,retain) IGFeedVideoStateManager * profileVideoStateManager;                      //@synthesize profileVideoStateManager=_profileVideoStateManager - In the implementation block
@property (nonatomic,retain) IGVideoPlaybackController * profileVideoPlaybackController;              //@synthesize profileVideoPlaybackController=_profileVideoPlaybackController - In the implementation block
@property (nonatomic,retain) IGFeedItemVideoView * profileVideoView;                                  //@synthesize profileVideoView=_profileVideoView - In the implementation block
@property (assign,nonatomic) int viewMode;                                                            //@synthesize viewMode=_viewMode - In the implementation block
@property (nonatomic,retain) NSOperationQueue * itemFetchQueue;                                       //@synthesize itemFetchQueue=_itemFetchQueue - In the implementation block
@property (nonatomic,retain) IGVideoPlaybackItem * playbackItem;                                      //@synthesize playbackItem=_playbackItem - In the implementation block
@property (nonatomic,retain) IGUser * user;                                                           //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGSimpleButton * profilePicButton;                                     //@synthesize profilePicButton=_profilePicButton - In the implementation block
@property (assign,nonatomic) int borderStyle;                                                         //@synthesize borderStyle=_borderStyle - In the implementation block
@property (assign,nonatomic) char buttonDisabled;                                                     //@synthesize buttonDisabled=_buttonDisabled - In the implementation block
@property (assign,nonatomic) char hasHighlightedState;                                                //@synthesize hasHighlightedState=_hasHighlightedState - In the implementation block
@property (assign,nonatomic) char useHDPictureIfAvailable;                                            //@synthesize useHDPictureIfAvailable=_useHDPictureIfAvailable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDidTap:(char)arg1 ;
-(char)didTap;
-(void)setIsInProfile:(char)arg1 ;
-(char)isInProfile;
-(void)displayProfilePic;
-(void)doubleTapped:(id)arg1 ;
-(void)singleTapped:(id)arg1 ;
-(void)didMoveToSuperview;
-(IGSimpleButton *)profilePicButton;
-(IGVideoPlaybackItem *)playbackItem;
-(void)setPlaybackItem:(IGVideoPlaybackItem *)arg1 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)setButtonDisabled:(char)arg1 ;
-(void)setUser:(id)arg1 inViewMode:(int)arg2 ;
-(void)playVideo;
-(void)setHasHighlightedState:(char)arg1 ;
-(void)setUseHDPictureIfAvailable:(char)arg1 ;
-(void)tapped:(id)arg1 ;
-(void)setItemFetchQueue:(NSOperationQueue *)arg1 ;
-(void)setUpProfileVideoViewWithFeedItem:(id)arg1 ;
-(id)profilePicURLForUser:(id)arg1 ;
-(NSOperationQueue *)itemFetchQueue;
-(void)removeCurrentVideo;
-(IGFeedItemVideoView *)profileVideoView;
-(IGFeedVideoStateManager *)profileVideoStateManager;
-(void)setProfileVideoView:(IGFeedItemVideoView *)arg1 ;
-(void)setProfileVideoPlaybackController:(IGVideoPlaybackController *)arg1 ;
-(void)setProfileVideoStateManager:(IGFeedVideoStateManager *)arg1 ;
-(IGVideoPlaybackController *)profileVideoPlaybackController;
-(IGFeedVideoPlayer *)profileVideoPlayer;
-(void)setProfileVideoPlayer:(IGFeedVideoPlayer *)arg1 ;
-(void)updateHighlightedBackgroundColor;
-(char)buttonDisabled;
-(char)hasHighlightedState;
-(char)useHDPictureIfAvailable;
-(void)userUpdated:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderStyle:(int)arg1 ;
-(UIColor *)borderColor;
-(float)borderWidth;
-(void)setIsAccessibilityElement:(char)arg1 ;
-(int)viewMode;
-(void)updateImage;
-(int)borderStyle;
-(void)pauseVideo;
-(void)setViewMode:(int)arg1 ;
@end

