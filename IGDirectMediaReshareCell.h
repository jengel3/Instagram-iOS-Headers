
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@class UIView, IGPost, IGImageProgressView, IGProfilePictureImageView, UILabel, IGCoreTextView, IGVideoIndicatorView, UIImageView, NSString;

@interface IGDirectMediaReshareCell : IGDirectContentCell <IGCoreTextLinkHandler> {

	UIView* _shareContainerView;
	IGPost* _post;
	IGImageProgressView* _postImageView;
	IGProfilePictureImageView* _postProfilePicture;
	UILabel* _usernameLabel;
	IGCoreTextView* _captionView;
	UIView* _photoSeparatorTopLine;
	UIView* _photoSeparatorBottomLine;
	IGVideoIndicatorView* _videoIndicatorView;
	UIImageView* _chevronView;

}

@property (nonatomic,retain) UIView * shareContainerView;                                 //@synthesize shareContainerView=_shareContainerView - In the implementation block
@property (nonatomic,retain) IGPost * post;                                               //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) IGImageProgressView * postImageView;                         //@synthesize postImageView=_postImageView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * postProfilePicture;              //@synthesize postProfilePicture=_postProfilePicture - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                                     //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) IGCoreTextView * captionView;                                //@synthesize captionView=_captionView - In the implementation block
@property (nonatomic,retain) UIView * photoSeparatorTopLine;                              //@synthesize photoSeparatorTopLine=_photoSeparatorTopLine - In the implementation block
@property (nonatomic,retain) UIView * photoSeparatorBottomLine;                           //@synthesize photoSeparatorBottomLine=_photoSeparatorBottomLine - In the implementation block
@property (nonatomic,retain) IGVideoIndicatorView * videoIndicatorView;                   //@synthesize videoIndicatorView=_videoIndicatorView - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                                   //@synthesize chevronView=_chevronView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)cellHeightForReshare:(id)arg1 withWidth:(float)arg2 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)setPost:(IGPost *)arg1 ;
-(UILabel *)usernameLabel;
-(id)highlightedBackgroundColor;
-(UIView *)shareContainerView;
-(void)setShareContainerView:(UIView *)arg1 ;
-(IGImageProgressView *)postImageView;
-(IGProfilePictureImageView *)postProfilePicture;
-(UIView *)photoSeparatorTopLine;
-(UIView *)photoSeparatorBottomLine;
-(IGVideoIndicatorView *)videoIndicatorView;
-(IGCoreTextView *)captionView;
-(void)setPostImageView:(IGImageProgressView *)arg1 ;
-(void)setPostProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)setCaptionView:(IGCoreTextView *)arg1 ;
-(void)setPhotoSeparatorTopLine:(UIView *)arg1 ;
-(void)setPhotoSeparatorBottomLine:(UIView *)arg1 ;
-(void)setVideoIndicatorView:(IGVideoIndicatorView *)arg1 ;
-(CGRect)tapTargetFrame;
-(IGPost *)post;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)defaultBorderColor;
-(void)setHighlighted:(char)arg1 ;
-(void)setContent:(id)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
-(id)defaultBackgroundColor;
@end

